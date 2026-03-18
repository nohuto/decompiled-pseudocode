/*
 * XREFs of ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x1C01F7CF0
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01F7F88 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char __fastcall DelayZoneTelemetry::HitTestInputPanelRegion(DelayZoneTelemetry *this, struct tagPOINT a2)
{
  char *v2; // r14
  char v3; // si
  char *v4; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v2 = (char *)this + 12288;
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 1536);
  if ( v4 == (char *)this + 12288 )
    return 0;
  do
  {
    if ( PtInRect((_DWORD *)v4 + 4, *(_QWORD *)&a2) )
      v3 = 1;
    v8 = *(_QWORD *)v4;
    v4 = (char *)v8;
    if ( *(_QWORD *)(v8 + 8) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v7);
  }
  while ( v4 != v2 );
  return v3;
}
