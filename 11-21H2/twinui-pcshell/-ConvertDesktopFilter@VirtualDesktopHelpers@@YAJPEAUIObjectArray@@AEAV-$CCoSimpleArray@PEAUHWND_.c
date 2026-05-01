/*
 * XREFs of ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18049F69C
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18049F9D0 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA2F4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopHelpers::ConvertDesktopFilter(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  void *v5; // r8
  __int64 v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rdx
  void *v12; // rcx
  int v13; // eax
  void *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  void *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-40h]
  unsigned int v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-30h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-28h]
  unsigned int v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v32; // [rsp+C0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+48h] BYREF

  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v23,
    a1);
  v25 = 0;
  v26 = 0LL;
  v27 = &v23;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
  v28 = v24;
  v29 = 0LL;
  v30 = &v23;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
  while ( 1 )
  {
    if ( v25 == v28 && v27 == v30 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      return 0LL;
    }
    v3 = v26;
    v21 = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    v20 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v21, &v20) >= 0 )
      break;
    v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v3)[9])(v3, &v22);
    if ( v13 >= 0 )
    {
      v15 = a2[1];
      if ( v15 == a2[3] )
      {
        v16 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                (__int64)a2,
                v15 + 1,
                v14);
        v10 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D,
            (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
            (const char *)(unsigned int)v16);
          goto LABEL_24;
        }
      }
      v17 = (_QWORD *)(*a2 + 8 * a2[1]++);
      if ( v17 )
        *v17 = v22;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
        (const char *)(unsigned int)v13);
    }
LABEL_20:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
    ++v25;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
  }
  v32 = 0;
  pv = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v20 + 32LL))(v20, &v32, &pv);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
      (const char *)(unsigned int)v4);
LABEL_13:
    v12 = pv;
    pv = 0LL;
    CoTaskMemFree(v12);
    goto LABEL_20;
  }
  v6 = 0LL;
  if ( !v32 )
    goto LABEL_13;
  while ( 1 )
  {
    v7 = pv;
    v8 = a2[1];
    if ( v8 == a2[3] )
    {
      v9 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)a2,
             v8 + 1,
             v5);
      v10 = v9;
      if ( v9 < 0 )
        break;
    }
    v11 = (_QWORD *)(*a2 + 8 * a2[1]++);
    if ( v11 )
      *v11 = v7[v6];
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v32 )
      goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14,
    (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
    (const char *)(unsigned int)v9);
  v19 = pv;
  pv = 0LL;
  CoTaskMemFree(v19);
LABEL_24:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return v10;
}
