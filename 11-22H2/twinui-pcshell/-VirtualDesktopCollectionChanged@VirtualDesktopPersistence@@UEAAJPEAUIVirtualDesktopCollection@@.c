/*
 * XREFs of ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180617CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18013B7F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013B820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ @ 0x18013B8B0 (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1802D73A4 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIShellPositionerActivationHandler@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIShellPositionerActivationHandler@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18039469C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIShellPositionerActivationHandler@@@WRL@Microsoft@@@@YAPEAPEAX.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18039637C (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopCollectionChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktopCollection *a2)
{
  __int64 (__fastcall *v4)(struct IVirtualDesktopCollection *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  void *v9; // r8
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbx
  int v16; // eax
  void *v17; // r8
  _OWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v23; // [rsp+40h] [rbp-49h] BYREF
  __int64 v24; // [rsp+48h] [rbp-41h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h] BYREF
  __int64 v26; // [rsp+58h] [rbp-31h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h]
  __int64 v28; // [rsp+68h] [rbp-21h]
  __int64 v29; // [rsp+70h] [rbp-19h]
  __int64 v30; // [rsp+78h] [rbp-11h] BYREF
  int v31; // [rsp+80h] [rbp-9h]
  __int64 v32; // [rsp+88h] [rbp-1h] BYREF
  __int64 v33; // [rsp+90h] [rbp+7h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  __int64 v35[3]; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v36; // [rsp+B8h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v24 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, GUID *, __int64 *))(*(_QWORD *)a2 + 136LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellPositionerActivationHandler>>(&v24);
  v6 = v4(a2, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 54LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_28;
  }
  v23 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 24LL))(v24, &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 57LL;
    goto LABEL_5;
  }
  v10 = v23;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
          (__int64)&v26,
          v23,
          v9);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = 60LL;
LABEL_8:
    v13 = (unsigned int)v11;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v13);
    goto LABEL_27;
  }
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v30,
    v24);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
    (__int64)&v32,
    (__int64)&v30,
    0);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
    (__int64)v35,
    (__int64)&v30,
    v31);
  v14 = v27;
  while ( (_DWORD)v32 != LODWORD(v35[0]) || v34 != v35[2] )
  {
    v15 = v33;
    v25 = v33;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
    v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 32LL))(v15, &v36);
    v7 = v16;
    if ( v16 < 0 )
    {
      v20 = (unsigned int)v16;
      v21 = 64LL;
      goto LABEL_26;
    }
    v7 = 0;
    if ( v14 != v29
      || (v7 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                 (__int64)&v26,
                 v14 + 1,
                 v17),
          v14 = v27,
          v7 >= 0) )
    {
      v27 = ++v14;
      v18 = (_OWORD *)(v26 + 16 * (v14 - 1));
      if ( !v18 )
        goto LABEL_19;
      *v18 = v36;
    }
    if ( v7 < 0 )
    {
      v20 = (unsigned int)v7;
      v21 = 65LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v20);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v25);
      std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v35);
      std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(&v32);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v30);
      goto LABEL_27;
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v25);
    LODWORD(v32) = v32 + 1;
    details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject((unsigned int *)&v32);
  }
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v35);
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(&v32);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v30);
  if ( v14 != v10 )
  {
    v7 = -2147467259;
    v13 = 2147500037LL;
    v12 = 67LL;
    goto LABEL_9;
  }
  LOBYTE(v19) = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const wchar_t *, int, __int64, __int64))(**((_QWORD **)this + 2) + 32LL))(
          *((_QWORD *)this + 2),
          v19,
          0LL,
          L"VirtualDesktopIDs",
          3,
          v26,
          16LL * v23);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = 68LL;
    goto LABEL_8;
  }
LABEL_27:
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)&v26);
LABEL_28:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v24);
  return (unsigned int)v7;
}
