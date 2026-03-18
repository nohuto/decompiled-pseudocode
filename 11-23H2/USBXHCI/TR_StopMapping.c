/*
 * XREFs of TR_StopMapping @ 0x1C000FC90
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x1C000F9D0 (ESM_StoppingMappingOnCancelStart.c)
 *     ESM_StoppingMappingAfterControllerResetInEnabled @ 0x1C0051E20 (ESM_StoppingMappingAfterControllerResetInEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 104LL))();
}
