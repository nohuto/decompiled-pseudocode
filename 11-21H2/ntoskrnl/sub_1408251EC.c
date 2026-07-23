/*
 * XREFs of sub_1408251EC @ 0x1408251EC
 * Callers:
 *     sub_140825158 @ 0x140825158 (sub_140825158.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408251EC(__int64 *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // eax
  __int64 v5; // rdi
  ULONG v6; // ebp
  __int64 Pool2; // rax
  __int64 v8; // rbx
  int v9; // esi
  int Acl; // edi

  v2 = RtlLengthSid(qword_140C5AFA8);
  v3 = RtlLengthSid(SidToCheck) + v2;
  v4 = RtlLengthSid(Group);
  v5 = v3 + v4 + 44;
  v6 = v3 + v4 + 44;
  Pool2 = ExAllocatePool2(256LL, v5 + 20, 1818452292LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    v9 = Pool2 + 20;
    *(_OWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_BYTE *)Pool2 = 1;
    memset((void *)(Pool2 + 20), 0, v6);
    Acl = RtlCreateAcl((PACL)(v8 + 20), v5, 2u);
    if ( Acl < 0
      || (Acl = sub_1407B4900((ACL *)(v8 + 20), 2u, 0, 983041, (unsigned __int8 *)qword_140C5AFA8, 0), Acl < 0)
      || (Acl = sub_1407B4900((ACL *)(v8 + 20), 2u, 0, 983041, (unsigned __int8 *)SidToCheck, 0), Acl < 0)
      || (Acl = sub_1407B4900((ACL *)(v8 + 20), 2u, 0, 983041, (unsigned __int8 *)Group, 0), Acl < 0) )
    {
      ExFreePoolWithTag((PVOID)v8, 0);
    }
    else
    {
      *(_WORD *)(v8 + 2) |= 0x8004u;
      *(_DWORD *)(v8 + 16) = v9 - v8;
      *a1 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
