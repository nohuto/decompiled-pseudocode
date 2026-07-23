/*
 * XREFs of sub_140933280 @ 0x140933280
 * Callers:
 *     <none>
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall sub_140933280(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  char v4; // al
  unsigned int v5; // [rsp+20h] [rbp-69h] BYREF
  int v6; // [rsp+28h] [rbp-61h] BYREF
  __int128 v7; // [rsp+30h] [rbp-59h] BYREF
  __int64 v8; // [rsp+40h] [rbp-49h]
  _QWORD v9[14]; // [rsp+50h] [rbp-39h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  memset(v9, 0, 0x68uLL);
  v5 = 24;
  result = ExQueryWnfStateData(a1, &v6, &v7, &v5);
  if ( (int)result >= 0 )
  {
    v3 = v7 - 0x44FD8B8ECC99192BLL;
    if ( (_QWORD)v7 == 0x44FD8B8ECC99192BLL )
      v3 = *((_QWORD *)&v7 + 1) - 0x294D1B1462EFA9B0LL;
    v4 = v9[1];
    if ( !v3 )
      v4 = 1;
    LODWORD(v9[3]) = 0;
    LOBYTE(v9[1]) = v4;
    v9[2] = v8;
    return sub_140358A20(2u, 62, 0, (__int64)v9);
  }
  return result;
}
