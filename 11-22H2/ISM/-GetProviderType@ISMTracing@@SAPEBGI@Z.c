/*
 * XREFs of ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x1800C6348
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180039638 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x1800C6F78 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 *     ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x1800D95DC (-MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ISMTracing::GetProviderType(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return L"SixDof";
    if ( !a1 )
      return L"UnknownKind";
    v1 = a1 - 1;
    if ( !v1 )
      return L"Gaze";
    v2 = v1 - 1;
    if ( !v2 )
      return L"Controller";
    v3 = v2 - 1;
    if ( !v3 )
      return L"Mouse";
    if ( v3 == 1 )
      return L"GamePad";
    return &Src;
  }
  v5 = a1 - 6;
  if ( !v5 )
    return L"Hand";
  v6 = v5 - 1;
  if ( !v6 )
    return L"Voice";
  v7 = v6 - 1;
  if ( !v7 )
    return L"EyeGaze";
  if ( v7 != 1 )
    return &Src;
  return L"HomeGesture";
}
