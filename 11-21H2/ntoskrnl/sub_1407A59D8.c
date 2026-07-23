/*
 * XREFs of sub_1407A59D8 @ 0x1407A59D8
 * Callers:
 *     sub_14066BAB0 @ 0x14066BAB0 (sub_14066BAB0.c)
 *     sub_14066C1DC @ 0x14066C1DC (sub_14066C1DC.c)
 *     sub_1406BE210 @ 0x1406BE210 (sub_1406BE210.c)
 *     sub_14074DC30 @ 0x14074DC30 (sub_14074DC30.c)
 *     sub_1407A56B0 @ 0x1407A56B0 (sub_1407A56B0.c)
 *     sub_1407A58A4 @ 0x1407A58A4 (sub_1407A58A4.c)
 *     sub_1407A58E0 @ 0x1407A58E0 (sub_1407A58E0.c)
 *     sub_1407A817C @ 0x1407A817C (sub_1407A817C.c)
 *     sub_140881980 @ 0x140881980 (sub_140881980.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1407A59D8(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  char v3; // al
  __int64 v4; // rdx

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v3 = *(_BYTE *)(a1 - 32);
  if ( (v3 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    sub_1402AFC00((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v3 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    sub_1402AFC00((ULONG_PTR)v1);
    sub_14042A5E0(a1, v4);
    return 1;
  }
}
