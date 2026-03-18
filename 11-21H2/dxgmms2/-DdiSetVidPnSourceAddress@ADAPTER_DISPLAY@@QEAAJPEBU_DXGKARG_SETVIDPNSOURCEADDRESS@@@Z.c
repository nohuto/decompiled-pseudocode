/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C001A7F0
 * Callers:
 *     VidSchSetVidPnSourceAddress @ 0x1C00A95D0 (VidSchSetVidPnSourceAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_DISPLAY *, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))DxgCoreInterface[29])(
           this,
           a2);
}
