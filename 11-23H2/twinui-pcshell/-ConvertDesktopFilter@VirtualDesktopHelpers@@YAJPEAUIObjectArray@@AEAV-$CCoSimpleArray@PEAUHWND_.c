/*
 * XREFs of ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18055F0D4
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18055F410 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059CE4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopHelpers::ConvertDesktopFilter(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // rbx
  int v4; // eax
  void *v5; // r8
  __int64 v6; // rsi
  _QWORD *v7; // r15
  int v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  void *v11; // rcx
  int v12; // eax
  void *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  void *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64); // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-40h]
  unsigned int v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp-30h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-28h]
  unsigned int v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v31; // [rsp+C0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+48h] BYREF

  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v22,
    a1);
  v24 = 0;
  v25 = 0LL;
  v26 = &v22;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v24);
  v27 = v23;
  v28 = 0LL;
  v29 = &v22;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
  while ( 1 )
  {
    if ( v24 == v27 && v26 == v29 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      return 0LL;
    }
    v3 = v25;
    v20 = v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    v19 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v20, (__int64)&v19) >= 0 )
    {
      v31 = 0;
      pv = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v19 + 32LL))(v19, &v31, &pv);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10,
          (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
          (const char *)(unsigned int)v4);
LABEL_14:
        v11 = pv;
        pv = 0LL;
        CoTaskMemFree(v11);
        goto LABEL_22;
      }
      v6 = 0LL;
      if ( !v31 )
        goto LABEL_14;
      while ( 1 )
      {
        v7 = pv;
        v8 = 0;
        v9 = a2[1];
        if ( v9 != a2[3]
          || (v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                     (__int64)a2,
                     v9 + 1,
                     v5),
              v9 = a2[1],
              v8 >= 0) )
        {
          a2[1] = v9 + 1;
          v10 = (_QWORD *)(*a2 + 8 * v9);
          if ( !v10 )
            goto LABEL_13;
          *v10 = v7[v6];
        }
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14,
            (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
            (const char *)(unsigned int)v8);
          v18 = pv;
          pv = 0LL;
          CoTaskMemFree(v18);
          goto LABEL_26;
        }
LABEL_13:
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v31 )
          goto LABEL_14;
      }
    }
    v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64 *))(*v3)[9])(v3, &v21);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B,
        (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
        (const char *)(unsigned int)v12);
      goto LABEL_22;
    }
    v8 = 0;
    v14 = a2[1];
    if ( v14 != a2[3]
      || (v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)a2,
                 v14 + 1,
                 v13),
          v8 >= 0) )
    {
      v15 = a2[1];
      a2[1] = v15 + 1;
      v16 = (_QWORD *)(*a2 + 8 * v15);
      if ( !v16 )
        goto LABEL_22;
      *v16 = v21;
    }
    if ( v8 < 0 )
      break;
LABEL_22:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
    ++v24;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v24);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
    (const char *)(unsigned int)v8);
LABEL_26:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return (unsigned int)v8;
}
