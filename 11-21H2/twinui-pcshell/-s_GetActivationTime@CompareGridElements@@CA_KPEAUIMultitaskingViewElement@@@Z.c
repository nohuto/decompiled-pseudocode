/*
 * XREFs of ?s_GetActivationTime@CompareGridElements@@CA_KPEAUIMultitaskingViewElement@@@Z @ 0x180235F1C
 * Callers:
 *     ?Compare@CompareGridElements@@QEBAHAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z @ 0x180235B12 (-Compare@CompareGridElements@@QEBAHAEBV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CompareGridElements::s_GetActivationTime(
        void (__fastcall ***a1)(struct IMultitaskingViewElement *, GUID *, __int64 *))
{
  void (__fastcall *v2)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = **a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  v2((struct IMultitaskingViewElement *)a1, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, &v5);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  return v3;
}
