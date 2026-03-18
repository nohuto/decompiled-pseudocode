/*
 * XREFs of PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407F1308
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407F0070 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsInitialize @ 0x140B24AB0 (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14036C210 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     SleepstudyHelperSetBlockerVerboseDescription @ 0x140661D80 (SleepstudyHelperSetBlockerVerboseDescription.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407F1400 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1407F15C0 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall PopPowerRequestStatsCreateSleepstudyBlocker(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // xmm0
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  ULONG Seed; // [rsp+78h] [rbp+28h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  if ( PopPowerRequestSleepstudyHandle )
  {
    v10 = RtlRandomEx(&Seed);
    v5 = v10;
    v10 = 0LL;
    v11 = v5;
    LODWORD(v10) = -1428313379;
    BYTE4(v10) = 6;
    v6 = SleepstudyHelperCreateBlockerFromGuid(PopPowerRequestSleepstudyHandle, &v10, &v11, a1 + 8, 7u, (__int64 *)&v13);
    v7 = v13;
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0
        || (v8 = SleepstudyHelperSetBlockerVerboseDescription(
                   v13,
                   *(_WORD *)(a1 + 40),
                   (unsigned __int16 *)(a1 + 24),
                   *(_DWORD *)(a1 + 44),
                   (unsigned __int16 *)(a1 + 48)),
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
