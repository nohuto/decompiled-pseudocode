/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0160544
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0160468 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C002BC9C (WPP_RECORDER_SF_DDD.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F0C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C013948C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  if ( (dword_1C00F5B98 & 1) == 0 )
  {
    qword_1C00F40B0 = 0LL;
    qword_1C00F40E0 = 0LL;
    dword_1C00F5B98 |= 1u;
    *(_OWORD *)&stru_1C00F4060.DefaultValue = 0LL;
    qword_1C00F4090 = (__int64)L"StuckNblReaction";
    qword_1C00F4098 = (__int64)ndisNblTrackerStuckNblDisposition;
    qword_1C00F40A0 = 2LL;
    qword_1C00F40B8 = 2LL;
    qword_1C00F40C0 = (__int64)L"LeakedNblReaction";
    qword_1C00F40C8 = (__int64)&ndisNblTrackerLeakedNblDisposition;
    qword_1C00F40F0 = (__int64)L"NblTimeoutMs";
    qword_1C00F40F8 = (__int64)ndisNblTrackerNblTimeoutMilliseconds;
    qword_1C00F4118 = 0LL;
    qword_1C00F4120 = (__int64)L"NblTrackerHistorySize";
    qword_1C00F4128 = (__int64)&ndisNblTrackerHistorySize;
    *(_OWORD *)&stru_1C00F4060.MinimumValue = 0LL;
    dword_1C00F40A8 = 32;
    qword_1C00F40D0 = 5LL;
    dword_1C00F40D8 = 32;
    qword_1C00F40E8 = 5LL;
    qword_1C00F4100 = 60000LL;
    xmmword_1C00F4108 = 0LL;
    xmmword_1C00F4130 = 0LL;
    xmmword_1C00F4140 = 0LL;
  }
  ndisRegisterKnobs(&stru_1C00F4060, 5LL, a3, 0LL);
  if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds )
  {
    if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds < 0x64u )
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 60000;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( *(int *)ndisNblTrackerMode < 1 )
      *(_DWORD *)ndisNblTrackerMode = 1;
    if ( ndisDriverVerifierNdisFlagEnabled() && *(int *)ndisNblTrackerMode < 3 )
      *(_DWORD *)ndisNblTrackerMode = 3;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
      ndisNblTrackerMode[0],
      ndisNblTrackerStuckNblDisposition[0],
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds);
}
