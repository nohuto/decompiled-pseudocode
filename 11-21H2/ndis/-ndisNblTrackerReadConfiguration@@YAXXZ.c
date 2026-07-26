/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0154BEC
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0154B10 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0030AE4 (WPP_RECORDER_SF_DDD.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0115810 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C012D690 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  if ( (dword_1C00ECBA4 & 1) == 0 )
  {
    qword_1C00EB0B0 = 0LL;
    qword_1C00EB0E0 = 0LL;
    dword_1C00ECBA4 |= 1u;
    *(_OWORD *)&stru_1C00EB060.DefaultValue = 0LL;
    qword_1C00EB090 = (__int64)L"StuckNblReaction";
    qword_1C00EB098 = (__int64)ndisNblTrackerStuckNblDisposition;
    qword_1C00EB0A0 = 2LL;
    qword_1C00EB0B8 = 2LL;
    qword_1C00EB0C0 = (__int64)L"LeakedNblReaction";
    qword_1C00EB0C8 = (__int64)&ndisNblTrackerLeakedNblDisposition;
    qword_1C00EB0F0 = (__int64)L"NblTimeoutMs";
    qword_1C00EB0F8 = (__int64)ndisNblTrackerNblTimeoutMilliseconds;
    qword_1C00EB118 = 0LL;
    qword_1C00EB120 = (__int64)L"NblTrackerHistorySize";
    qword_1C00EB128 = (__int64)&ndisNblTrackerHistorySize;
    *(_OWORD *)&stru_1C00EB060.MinimumValue = 0LL;
    dword_1C00EB0A8 = 32;
    qword_1C00EB0D0 = 5LL;
    dword_1C00EB0D8 = 32;
    qword_1C00EB0E8 = 5LL;
    qword_1C00EB100 = 60000LL;
    xmmword_1C00EB108 = 0LL;
    xmmword_1C00EB130 = 0LL;
    xmmword_1C00EB140 = 0LL;
  }
  ndisRegisterKnobs(&stru_1C00EB060, 5LL, a3, 0LL);
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
      (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
      ndisNblTrackerMode[0],
      ndisNblTrackerStuckNblDisposition[0],
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds);
}
