/*
 * XREFs of sub_140A80ACC @ 0x140A80ACC
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 * Callees:
 *     sub_1403B51C4 @ 0x1403B51C4 (sub_1403B51C4.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 */

__int64 __fastcall sub_140A80ACC(PVOID Object, IRP *a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // r8
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v5 = sub_140A8CC6C(Object, a2, 0LL);
  if ( (dword_140D0110C & 2) != 0 )
    v7 = sub_14055969C(Object, a2, v6);
  else
    v7 = sub_1403B51C4((__int64)Object, a2);
  LODWORD(v9) = v7;
  sub_140A8CA78(0LL, &v9, v5);
  return (unsigned int)v9;
}
