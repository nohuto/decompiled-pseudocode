/*
 * XREFs of VslCreateSecureSection @ 0x1409319A0
 * Callers:
 *     <none>
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslCreateSecureSection(_QWORD *a1, __int64 a2, struct _MDL *a3, int a4, int a5)
{
  __int64 result; // rax
  SIZE_T v10; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+30h] [rbp-A1h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-51h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  *a1 = 0LL;
  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 3221225716LL;
  if ( (a5 & 1) == 0 && ((a3->ByteCount & 0xFFF) != 0 || a3->ByteOffset) )
    return 3221225713LL;
  v10 = MmSizeOfMdl((PVOID)a3->ByteOffset, a3->ByteCount);
  if ( v10 > 0xFFFFFFFF )
    return 3221225713LL;
  result = sub_1403A0F08((__int64)v12, a3, v10, 0, 0);
  if ( (int)result >= 0 )
  {
    v13[3] = v12[0];
    v13[5] = v12[7];
    v13[1] = *(_QWORD *)(a2 + 992);
    LODWORD(v13[2]) = a4;
    v11 = sub_140358A20(2u, 65, 0, (__int64)v13);
    sub_1403A0EB4(v12);
    if ( v11 >= 0 )
      *a1 = v13[4];
    return (unsigned int)v11;
  }
  return result;
}
