/*
 * XREFs of PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A81D4
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407A79CC (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsInitialize @ 0x140B64EBC (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402099A0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     RtlRandomEx @ 0x140292830 (RtlRandomEx.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407A82B0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1407A8480 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperSetBlockerVerboseDescription @ 0x1409A22C0 (SleepstudyHelperSetBlockerVerboseDescription.c)
 */

__int64 __fastcall PopPowerRequestStatsCreateSleepstudyBlocker(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // xmm0
  int v6; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  ULONG Seed; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  if ( PopPowerRequestSleepstudyHandle )
  {
    v10 = RtlRandomEx(&Seed);
    v5 = v10;
    v10 = 0LL;
    v11 = v5;
    LODWORD(v10) = -1428313379;
    BYTE4(v10) = 6;
    v6 = SleepstudyHelperCreateBlockerFromGuid(PopPowerRequestSleepstudyHandle, &v10, &v11, a1 + 8, 7u, &v13);
    v7 = v13;
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0
        || (v8 = SleepstudyHelperSetBlockerVerboseDescription(
                   v13,
                   *(unsigned __int16 *)(a1 + 40),
                   (int)a1 + 24,
                   *(_DWORD *)(a1 + 44),
                   a1 + 48),
            v8 >= 0) )
      {
        v8 = SleepstudyHelperBuildBlocker(v7, a3);
        if ( v8 >= 0 )
        {
          v7 = 0LL;
          v8 = 0;
        }
      }
    }
    if ( v7 )
      SleepstudyHelperDestroyBlockerBuilder(v7);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
