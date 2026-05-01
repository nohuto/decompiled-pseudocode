/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1804CE864
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800F610C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VVie_ea_1800F610C.c)
 *     ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x1800F62A0 (--0ViewEventArgsForNavigationRequest@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNavigationRequest@@@Z @ 0x1800F64C4 (-Attach@-$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNa.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017FED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_18017FED0.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801923A4 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,std::nullptr_t>(
        _QWORD *a1,
        __int64 *a2)
{
  ViewEventArgsForNavigationRequest *v4; // rax
  unsigned int v5; // edi
  ViewEventArgsForNavigationRequest *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ViewEventArgsForNavigationRequest *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ViewEventArgsForNavigationRequest::ViewEventArgsForNavigationRequest(v4);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForNavigationRequest>::Attach(&v11, (__int64)v6);
    v7 = *a2;
    v8 = v11;
    v9 = (__int64 *)(v11 + 56);
    *(_DWORD *)(v11 + 48) = 2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=(v9, v7);
    v5 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>>(
           v8,
           &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
