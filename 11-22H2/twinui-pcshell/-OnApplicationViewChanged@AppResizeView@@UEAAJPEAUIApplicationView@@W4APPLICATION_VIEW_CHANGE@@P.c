/*
 * XREFs of ?OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805D76B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1805D85A4 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 */

__int64 __fastcall AppResizeView::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 56)
    && a3 == 15
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 184LL))(*(_QWORD *)(a1 + 32)) )
  {
    AppResizeView::UpdateAppResizeData(a1 - 40, a1 + 100, 7LL);
  }
  return 0LL;
}
