/*
 * XREFs of sub_1406F5F80 @ 0x1406F5F80
 * Callers:
 *     sub_1406CF50C @ 0x1406CF50C (sub_1406CF50C.c)
 *     sub_1406F5F44 @ 0x1406F5F44 (sub_1406F5F44.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 */

__int64 __fastcall sub_1406F5F80(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int128 *v7; // r14
  volatile signed __int64 *v9; // rbx
  unsigned __int64 v11; // rsi
  __int64 v13; // r8
  unsigned int v14; // edi
  __int128 v16; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+60h] [rbp-48h]

  v6 = a1[2];
  v7 = &v16;
  v17 = 0;
  v9 = (volatile signed __int64 *)(v6 + 40);
  v11 = *a1 + ((2 * (a5 >> 4)) >> 3);
  v16 = 0LL;
  if ( a2 <= 1 )
    v7 = 0LL;
  ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
  if ( (unsigned int)sub_14030EB80(v6) )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 40);
    sub_1402AFC00(v6 + 40);
    return 3221225738LL;
  }
  else
  {
    v14 = sub_140700460(a1, a2, v13, a4, v11, v6, 0, v7, (2 * ((a6 - a5) >> 4)) >> 3);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 40);
    sub_1402AFC00(v6 + 40);
    return v14;
  }
}
