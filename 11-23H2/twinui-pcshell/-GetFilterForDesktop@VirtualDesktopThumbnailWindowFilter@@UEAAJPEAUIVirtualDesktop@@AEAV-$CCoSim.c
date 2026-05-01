/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055F520
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18055F410 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopThumbnailWindowFilter::GetFilterForDesktop(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int FilterForDesktop; // eax
  int v7; // ebx
  int v8; // eax
  void *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  void *v16; // rcx
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF

  FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(a2, *(_QWORD *)(a1 + 24), a3, a4);
  v7 = FilterForDesktop;
  if ( FilterForDesktop < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)FilterForDesktop);
    return (unsigned int)v7;
  }
  pv[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *, unsigned int *))(**(_QWORD **)(a1 + 32) + 104LL))(
         *(_QWORD *)(a1 + 32),
         pv,
         &v20);
  v7 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 55LL;
    goto LABEL_16;
  }
  v12 = 0LL;
  if ( !v20 )
  {
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v13 = pv[0];
    v7 = 0;
    v14 = a4[1];
    if ( v14 == a4[3] )
    {
      v7 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)a4,
             v14 + 1,
             v9);
      v14 = a4[1];
      if ( v7 < 0 )
        break;
    }
    a4[1] = v14 + 1;
    v15 = (_QWORD *)(*a4 + 8 * v14);
    if ( v15 )
    {
      *v15 = v13[v12];
      break;
    }
LABEL_11:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v20 )
      goto LABEL_12;
  }
  if ( v7 >= 0 )
    goto LABEL_11;
  v10 = (unsigned int)v7;
  v11 = 58LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
    (const char *)v10);
LABEL_13:
  v16 = pv[0];
  pv[0] = 0LL;
  CoTaskMemFree(v16);
  return (unsigned int)v7;
}
