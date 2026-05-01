/*
 * XREFs of ?ItemOperationEnd@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1804BEAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x180236386 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSwitchItemGrid::ItemOperationEnd(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 == 1 )
  {
    ElementHelpers::GetRootElement(&v4, a1 - 224);
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 384LL))(v4, v5);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 72LL))(*v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 392LL))(v4, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  }
}
