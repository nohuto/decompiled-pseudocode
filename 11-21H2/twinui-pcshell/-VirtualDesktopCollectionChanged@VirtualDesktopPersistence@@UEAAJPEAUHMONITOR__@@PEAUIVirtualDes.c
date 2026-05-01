/*
 * XREFs of ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopCollection@@@Z @ 0x18055CF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1803D98E0 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopCollectionChanged(
        VirtualDesktopPersistence *this,
        HMONITOR a2,
        struct IVirtualDesktopCollection *a3)
{
  __int64 (__fastcall *v6)(struct IVirtualDesktopCollection *, HMONITOR, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // r14
  void *v10; // r8
  int v11; // eax
  char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // eax
  void *v16; // r8
  int v17; // eax
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 v24; // [rsp+40h] [rbp-59h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-49h] BYREF
  __int64 v27; // [rsp+58h] [rbp-41h]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+68h] [rbp-31h]
  __int64 v30; // [rsp+70h] [rbp-29h] BYREF
  int v31; // [rsp+78h] [rbp-21h]
  unsigned int v32; // [rsp+80h] [rbp-19h] BYREF
  __int64 v33[2]; // [rsp+88h] [rbp-11h] BYREF
  int v34; // [rsp+98h] [rbp-1h] BYREF
  __int64 v35[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v36; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v24 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, HMONITOR, GUID *, __int64 *))(*(_QWORD *)a3 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v7 = v6(a3, a2, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v24);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, HMONITOR))(*(_QWORD *)a3 + 24LL))(a3, a2);
    pv = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
            (__int64)&pv,
            v9,
            v10);
    v8 = v11;
    if ( v11 >= 0 )
    {
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
        (__int64)&v30,
        v24);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v32,
        (__int64)&v30,
        0);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v34,
        (__int64)&v30,
        v31);
      v13 = v27;
      v12 = (char *)pv;
      while ( v32 != v34 || v33[1] != v35[1] )
      {
        v14 = v33[0];
        v25 = v33[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
        v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 32LL))(v14, &v36);
        v8 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_22;
        }
        if ( v13 == v29 )
        {
          v17 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                  (__int64)&pv,
                  v13 + 1,
                  v16);
          v8 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4D,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v17);
            v12 = (char *)pv;
LABEL_22:
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v33);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
            goto LABEL_23;
          }
          v13 = v27;
          v12 = (char *)pv;
        }
        v27 = ++v13;
        v18 = &v12[16 * v13 - 16];
        if ( v18 )
          *(_OWORD *)v18 = v36;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
        ++v32;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v32);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v33);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      if ( v13 == v9 )
      {
        LOBYTE(v19) = 1;
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const wchar_t *, int, char *, unsigned __int64))(**((_QWORD **)this + 2) + 32LL))(
                *((_QWORD *)this + 2),
                v19,
                0LL,
                L"VirtualDesktopIDs",
                3,
                v12,
                16 * v9);
        v8 = v22;
        if ( v22 >= 0 )
          goto LABEL_23;
        v20 = (unsigned int)v22;
        v21 = 80LL;
      }
      else
      {
        v8 = -2147467259;
        v20 = 2147500037LL;
        v21 = 79LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v11);
      v12 = (char *)pv;
    }
LABEL_23:
    if ( v12 )
      CoTaskMemFree(v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  return v8;
}
