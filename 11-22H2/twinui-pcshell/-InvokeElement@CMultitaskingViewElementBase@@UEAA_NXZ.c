/*
 * XREFs of ?InvokeElement@CMultitaskingViewElementBase@@UEAA_NXZ @ 0x180574B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CMultitaskingViewElementBase::InvokeElement(CMultitaskingViewElementBase *this)
{
  char v2; // si
  int (__fastcall *v3)(CMultitaskingViewElementBase *, GUID *, IRawElementProviderSimple **); // rbx
  IRawElementProviderSimple *v4; // rbx
  HRESULT (__stdcall *GetPatternProvider)(IRawElementProviderSimple *, PATTERNID, IUnknown **); // rdi
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IRawElementProviderSimple *pProvider; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 592LL))(this);
  if ( v2
    && UiaClientsAreListening()
    && (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this) )
  {
    pProvider = 0LL;
    v10 = 0LL;
    v3 = *(int (__fastcall **)(CMultitaskingViewElementBase *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)this + 376LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
    if ( v3(this, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider) >= 0 )
    {
      v4 = pProvider;
      GetPatternProvider = pProvider->lpVtbl->GetPatternProvider;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
      if ( ((int (__fastcall *)(IRawElementProviderSimple *, __int64, __int64 *))GetPatternProvider)(v4, 10000LL, &v10) >= 0 )
      {
        v6 = UiaRaiseAutomationEvent(pProvider, 20009);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24A,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
            (const char *)(unsigned int)v6);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
  }
  return v2;
}
