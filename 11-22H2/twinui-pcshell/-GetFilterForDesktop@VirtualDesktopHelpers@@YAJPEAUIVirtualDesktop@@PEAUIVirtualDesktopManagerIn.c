/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x18055F410
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055F520 (-GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV-$CCoSim.c)
 *     ?GetFilterForDesktop@VirtualDesktopGestureWindow@@IEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18060D8B0 (-GetFilterForDesktop@VirtualDesktopGestureWindow@@IEAAJPEAUIVirtualDesktop@@AEAV-$CCoSimpleArray.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18055F0D4 (-ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV-$CCoSimpleArray@PEAUHWND_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopHelpers::GetFilterForDesktop(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v13[0] = 0LL;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  v9 = v8(a2, a1, v13, &v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = VirtualDesktopHelpers::ConvertDesktopFilter(v13[0], a3);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = VirtualDesktopHelpers::ConvertDesktopFilter(v15, a4);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      v11 = 45LL;
    }
    else
    {
      v11 = 44LL;
    }
  }
  else
  {
    v11 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  return v10;
}
