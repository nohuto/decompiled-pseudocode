/*
 * XREFs of sub_1402ECFD8 @ 0x1402ECFD8
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_1402ED0C4 @ 0x1402ED0C4 (sub_1402ED0C4.c)
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_14079D6B0 @ 0x14079D6B0 (sub_14079D6B0.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 */

__int64 __fastcall sub_1402ECFD8(_DWORD *P, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rbp
  __int64 result; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-98h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)CurrentThread + 23);
  if ( (P[12] & 0x200000) == 0 && *(_QWORD *)(**((_QWORD **)P + 9) + 64LL) && *((__int64 *)P + 15) < 0 )
    return 3221225505LL;
  LODWORD(v11[2]) = a4;
  v11[3] = a2;
  v11[4] = a3;
  v11[1] = P;
  result = sub_14079D6B0(v11);
  if ( (int)result >= 0 )
  {
    sub_1402ED194(v11);
    sub_140281A58((__int64)CurrentThread, v9);
    if ( (P[12] & 0x200000) != 0 )
      sub_1407BC0B0(P);
    else
      sub_1406F9060(P);
    sub_1402ED0C4(v11);
    return 0LL;
  }
  return result;
}
