/*
 * XREFs of sub_14074F220 @ 0x14074F220
 * Callers:
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_14074F2EC @ 0x14074F2EC (sub_14074F2EC.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_14074F220(unsigned int a1, char a2, char a3, void *a4, ACL **a5, __int64 a6, _DWORD *a7)
{
  _DWORD *v7; // rdi
  ACL **v10; // r12
  int v11; // eax
  USHORT AclSize; // r15
  unsigned __int8 *v14; // rax
  ACL *Pool2; // rax
  ACL *v16; // rsi
  bool v17; // zf
  _NT_PRODUCT_TYPE NtProductType; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(NtProductType) = a3;
  v7 = a7;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 < 0x14 && (a1 == 2 || a1 == 7 && (a2 & 1) != 0) )
  {
    NtProductType = 0;
    AclSize = Acl->AclSize;
    if ( !RtlGetNtProductType(&NtProductType) )
      return 0LL;
    if ( NtProductType == NtProductWinNt )
    {
      v14 = (unsigned __int8 *)qword_140C5AFC8;
    }
    else
    {
      if ( a1 != 2 )
      {
LABEL_19:
        Pool2 = (ACL *)ExAllocatePool2(256LL, AclSize, 1699966793LL);
        v16 = Pool2;
        if ( !Pool2 )
          return 0LL;
        memmove(Pool2, Acl, Acl->AclSize);
        v17 = NtProductType == NtProductWinNt;
        v16->AclSize = AclSize;
        if ( v17 )
        {
          sub_1407B4900((int)v16, 2, 0, -1073676288, (void *)qword_140C5AFC8, 0);
        }
        else if ( a1 == 2 )
        {
          sub_1407B4900((int)v16, 2, 0, 0x80000000, qword_140C5AFA8, 0);
        }
        RtlCreateSecurityDescriptor(a4, 1u);
        RtlSetDaclSecurityDescriptor(a4, 1u, v16, 0);
        if ( v7 )
          *v7 |= 4u;
        *v10 = v16;
        v11 = 0;
        goto LABEL_7;
      }
      v14 = (unsigned __int8 *)qword_140C5AFA8;
    }
    AclSize += 4 * (v14[1] + 4);
    goto LABEL_19;
  }
  v11 = sub_14074F2EC(a4);
LABEL_7:
  if ( v11 >= 0 )
    return a4;
  return 0LL;
}
