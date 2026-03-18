/*
 * XREFs of ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00B0BF8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C00B0CB0 (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRecalcProp::RemoveRecalcProperty(struct tagWND *a1)
{
  char v2; // dl
  char v3; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  CRecalcProp *v7; // rbx

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      41,
      5,
      23,
      41,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      *(_QWORD *)a1);
  v4 = InternalRemoveProp((__int64)a1, CRecalcProp::s_atom, 1u);
  v7 = (CRecalcProp *)v4;
  if ( v4 )
    *(_QWORD *)(v4 + 16) = 0LL;
  if ( *(_DWORD *)(v4 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  *((_DWORD *)a1 + 80) &= ~0x80u;
  CRecalcProp::`scalar deleting destructor'(v7, v5);
}
