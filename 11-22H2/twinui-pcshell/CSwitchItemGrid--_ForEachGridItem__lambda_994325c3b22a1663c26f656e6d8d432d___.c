/*
 * XREFs of CSwitchItemGrid::_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___ @ 0x180578664
 * Callers:
 *     ?SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z @ 0x18057A310 (-SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18057824C (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 16);
  v4 = &v3[*(_QWORD *)(a1 + 24)];
  while ( v3 != v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(v3, &v6);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
    ++v3;
  }
  return 0LL;
}
