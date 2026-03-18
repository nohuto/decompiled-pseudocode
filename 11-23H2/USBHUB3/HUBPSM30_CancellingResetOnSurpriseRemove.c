/*
 * XREFs of HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C0011B10
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CancelControlTransfer @ 0x1C0004474 (HUBHTX_CancelControlTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C0010E18 (HUBMUX_ReleaseInterruptReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_CancellingResetOnSurpriseRemove(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  HUBHTX_CancelControlTransfer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  return 1000LL;
}
