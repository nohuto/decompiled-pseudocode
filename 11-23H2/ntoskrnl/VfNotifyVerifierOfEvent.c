/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140AC2140
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AB0144 (KdEnterDebugger.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140B5D6A0 (IoInitSystem.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x1405CE38C (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x1405CE844 (VfUtilDbgPrint.c)
 *     DifUpdatePluginState @ 0x1405D5980 (DifUpdatePluginState.c)
 *     VfInitializeBranchTracing @ 0x140AD3880 (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x140AD3A00 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140AD3A8C (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140C37348, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140C37354, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            DifUpdatePluginState();
          }
        }
        else
        {
          _InterlockedAdd(&dword_140C37350, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140C3734C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140C37344, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
