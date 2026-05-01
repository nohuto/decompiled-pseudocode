/*
 * XREFs of ?CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180037370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800375EC (--$As@UIInspectable@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktop::CreateThumbnailVisualFactory(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v3; // esi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)a3;
  *a3 = 0LL;
  v14[0] = 0LL;
  v6 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>(a1 + 112, v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6,
      v13);
  }
  else
  {
    v18 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>(a1 + 104, &v18);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v8,
        v13);
    }
    else
    {
      v19 = 0LL;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 128) + 32LL))(*(_QWORD *)(a1 + 128), &v17);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(
        &v19,
        v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
      v10 = *v19;
      v15 = *a2;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v10 + 72))(v19, &v15, v14[0], v18);
      v7 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8D,
          (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
          (const char *)(unsigned int)v11,
          v3);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v14);
  return v7;
}
