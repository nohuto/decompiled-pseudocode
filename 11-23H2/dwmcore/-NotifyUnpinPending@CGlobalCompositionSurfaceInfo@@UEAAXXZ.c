/*
 * XREFs of ?NotifyUnpinPending@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x18025B130
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012DEAC (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyUnpinPending(CGlobalCompositionSurfaceInfo *this)
{
  ++*((_DWORD *)this + 104);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (__int64)&Pinning_OutstandingUnpinCount);
}
