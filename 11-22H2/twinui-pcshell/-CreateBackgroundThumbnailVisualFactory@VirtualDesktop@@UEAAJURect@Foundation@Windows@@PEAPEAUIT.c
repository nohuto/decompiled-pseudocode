/*
 * XREFs of ?CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180063BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180063CA8 (--$As@UIInspectable@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktop::CreateBackgroundThumbnailVisualFactory(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v13[0] = 0LL;
  v6 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>(a1 + 120, v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6,
      v13[0]);
  }
  else
  {
    v18 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>(a1 + 112, &v18);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v8,
        v13[0]);
    }
    else
    {
      v17 = 0LL;
      v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 136) + 32LL))(
                        *(_QWORD *)(a1 + 136),
                        &v16);
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)&v17, v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
      v10 = *v17;
      v14 = *a2;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD *))(v10 + 56))(v17, &v14, a3);
      v7 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA4,
          (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
          (const char *)(unsigned int)v11,
          v13[0]);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13);
  return v7;
}
