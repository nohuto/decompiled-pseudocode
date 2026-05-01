/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180565DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805659F8 (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x180565CCC (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::CurrentVirtualDesktopChanged(
        VirtualDesktopItemCollection *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // rsi
  int v7; // eax
  unsigned int v8; // ebx
  struct IUnknown **v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  struct IUnknown **v13; // rax
  int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+48h] BYREF

  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this - 16);
  v6 = &v5[*((_QWORD *)this - 15)];
  while ( 1 )
  {
    if ( v5 == v6 )
      return 0LL;
    v20 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v5, (__int64 *)&v20);
    v8 = v7;
    if ( v7 < 0 )
      break;
    v9 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v20 + 72))(v20, &v16);
    v10 = SHIsSameObject(*v9, a2);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    v11 = *v20;
    if ( v10 )
    {
      v19 = 0;
      v12 = (*(__int64 (**)(void))(v11 + 56))();
    }
    else
    {
      v13 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 72))(v20, &v17);
      v14 = SHIsSameObject(*v13, a3);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
      if ( !v14 )
        goto LABEL_8;
      v19 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64 *))(*v20 + 56))(v20);
    }
    ObservableProperty<bool>::operator=(v12, &v19);
LABEL_8:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    ++v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return v8;
}
