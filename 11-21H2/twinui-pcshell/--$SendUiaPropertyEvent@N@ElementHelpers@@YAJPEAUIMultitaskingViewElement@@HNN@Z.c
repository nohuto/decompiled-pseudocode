/*
 * XREFs of ??$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z @ 0x1804D45A8
 * Callers:
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804D5878 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1804D5DF8 (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementHelpers::SendUiaPropertyEvent<double>(__int64 a1, PROPERTYID a2, DOUBLE a3, DOUBLE a4)
{
  __int64 (__fastcall *v6)(__int64, GUID *, IRawElementProviderSimple **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  VARIANTARG pvarg; // [rsp+28h] [rbp-39h] BYREF
  VARIANTARG v12; // [rsp+40h] [rbp-21h] BYREF
  VARIANT newValue; // [rsp+58h] [rbp-9h] BYREF
  VARIANT oldValue; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  IRawElementProviderSimple *pProvider; // [rsp+D8h] [rbp+77h] BYREF

  if ( a3 == a4
    || !UiaClientsAreListening()
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1) )
  {
    return 0LL;
  }
  pProvider = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
  v7 = v6(a1, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v12.vt = 5;
    v12.dblVal = a3;
    pvarg.vt = 5;
    pvarg.dblVal = a4;
    newValue = pvarg;
    oldValue = v12;
    v9 = UiaRaiseAutomationPropertyChangedEvent(pProvider, a2, &oldValue, &newValue);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
        (const char *)(unsigned int)v9);
    VariantClear(&pvarg);
    VariantClear(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
  return v8;
}
