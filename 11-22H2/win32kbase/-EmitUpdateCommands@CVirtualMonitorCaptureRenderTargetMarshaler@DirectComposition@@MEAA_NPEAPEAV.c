/*
 * XREFs of ?EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022E5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022DDA0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(this, a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 288LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 296LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 304LL))(
             this,
             a2) != 0;
  }
  return v4;
}
