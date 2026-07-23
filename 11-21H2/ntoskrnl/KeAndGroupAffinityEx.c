/*
 * XREFs of KeAndGroupAffinityEx @ 0x140263350
 * Callers:
 *     sub_140225CB4 @ 0x140225CB4 (sub_140225CB4.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402D301C @ 0x1402D301C (sub_1402D301C.c)
 *     HalSendNMI @ 0x1402DA8E0 (HalSendNMI.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 *     sub_14099B3D8 @ 0x14099B3D8 (sub_14099B3D8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(_WORD *a1, __int64 a2, char *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  char v7; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v7;
  }
  v4 = *(unsigned __int16 *)(a2 + 8);
  if ( *a1 <= (unsigned __int16)v4 )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v5;
  LOBYTE(v3) = v5 != 0;
  return v3;
}
