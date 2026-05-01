/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x18009CD04
 * Callers:
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18009CAE8 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1804C7F68 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009CC70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??0ViewEventArgs@@QEAA@XZ @ 0x18009CDB8 (--0ViewEventArgs@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801923A4 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  ViewEventArgs *v7; // rax
  ViewEventArgs *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  volatile int *v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  v3 = 0;
  *a1 = 0LL;
  v7 = (ViewEventArgs *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = ViewEventArgs::ViewEventArgs(v7);
    v9 = *a3;
    v10 = (__int64)v8;
    *((_DWORD *)v8 + 12) = *a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((char *)v8 + 56, v9);
    v12 = *(_QWORD *)(v10 + 80);
    while ( v12 >= 0 )
    {
      if ( (_DWORD)v12 != 0x7FFFFFFF )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), v12 + 1, v12);
        if ( v13 != v12 )
          continue;
      }
      goto LABEL_6;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v11);
LABEL_6:
    *a1 = v10;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
