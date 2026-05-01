/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundation@Windows@@H@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@$$QEAH@Z @ 0x1804B940C
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801923A4 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804ACCF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1804ACCF0.c)
 *     ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x1804BBC5C (--0ViewEventArgsForSelectTargetView@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet *,int>(
        __int64 *a1,
        __int64 *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  ViewEventArgsForSelectTargetView *v7; // rax
  ViewEventArgsForSelectTargetView *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  volatile int *v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  v3 = 0;
  *a1 = 0LL;
  v7 = (ViewEventArgsForSelectTargetView *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = ViewEventArgsForSelectTargetView::ViewEventArgsForSelectTargetView(v7);
    v9 = *a2;
    v10 = (__int64)v8;
    *((_DWORD *)v8 + 26) = *a3;
    *((_DWORD *)v8 + 12) = 1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)v8 + 7, v9);
    v12 = *(_QWORD *)(v10 + 88);
    while ( v12 >= 0 )
    {
      if ( (_DWORD)v12 != 0x7FFFFFFF )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 88), v12 + 1, v12);
        if ( v13 != v12 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v11);
LABEL_9:
    *a1 = v10;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
