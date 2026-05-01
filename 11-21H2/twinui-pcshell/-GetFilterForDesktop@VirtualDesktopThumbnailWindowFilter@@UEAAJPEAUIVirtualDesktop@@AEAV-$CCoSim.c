/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18049FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18049F9D0 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopThumbnailWindowFilter::GetFilterForDesktop(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int FilterForDesktop; // eax
  unsigned int v7; // ebx
  int v8; // eax
  void *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  void *v15; // rcx
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(a2, *(_QWORD *)(a1 + 24), a3, a4);
  v7 = FilterForDesktop;
  if ( FilterForDesktop >= 0 )
  {
    pv[0] = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *, unsigned int *))(**(_QWORD **)(a1 + 32) + 104LL))(
           *(_QWORD *)(a1 + 32),
           pv,
           &v19);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v11 = 0LL;
      if ( !v19 )
      {
LABEL_11:
        v7 = 0;
LABEL_12:
        v15 = pv[0];
        pv[0] = 0LL;
        CoTaskMemFree(v15);
        return v7;
      }
      while ( 1 )
      {
        v12 = pv[0];
        v13 = a4[1];
        if ( v13 == a4[3] )
        {
          v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)a4,
                 v13 + 1,
                 v9);
          v7 = v8;
          if ( v8 < 0 )
            break;
        }
        v14 = (_QWORD *)(*a4 + 8 * a4[1]++);
        if ( v14 )
          *v14 = v12[v11];
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v19 )
          goto LABEL_11;
      }
      v10 = 58LL;
    }
    else
    {
      v10 = 55LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
    (const char *)(unsigned int)FilterForDesktop);
  return v7;
}
