/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805662E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x180565C68 (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180566714 (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x18056680C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopDestroyed(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  int i; // ebp
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rbx
  int v11; // eax
  __int64 v12; // rax
  VirtualDesktopItemCollection *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopItem *v16; // [rsp+58h] [rbp+20h] BYREF

  v4 = VirtualDesktopItemCollection::_RemoveDesktopItem((VirtualDesktopItemCollection *)((char *)this - 144), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v15 = 0;
  if ( *((_QWORD *)this - 15) )
  {
    v7 = 0LL;
    for ( i = 0; ; ++i )
    {
      v16 = 0LL;
      v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IVirtualDesktopItem **))(*((_QWORD *)this - 16) + 8 * v7);
      v10 = **v9;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
      v11 = v10(v9, &GUID_8335a836_e567_41a4_8778_62f004524ceb, &v16);
      v5 = v11;
      if ( v11 < 0 )
        break;
      v12 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v16 + 48LL))(v16);
      ObservableProperty<unsigned int>::operator=(v12, &v15);
      VirtualDesktopItemCollection::_SetTitle(v13, v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
      v7 = (unsigned int)(i + 1);
      v15 = v7;
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this - 15) )
        return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    return v5;
  }
  return 0LL;
}
