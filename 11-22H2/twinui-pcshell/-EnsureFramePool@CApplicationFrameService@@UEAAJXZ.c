/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180049160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180049364 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18004951C (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1800498D8 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1803A4C10 (WPP_SF_d.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x1803BB900 (-IsPPIFullFrameUI@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BC504 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAAX_N.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  CApplicationFrameWrapper **v9; // rdx
  CApplicationFrameWrapper *v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  TabletModeHelpers *v14; // rcx
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  char *v20; // [rsp+30h] [rbp-18h] BYREF
  CApplicationFrameWrapper *v21; // [rsp+80h] [rbp+38h] BYREF
  __int64 v22; // [rsp+88h] [rbp+40h] BYREF
  __int64 v23; // [rsp+90h] [rbp+48h] BYREF
  __int64 v24; // [rsp+98h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v2;
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v23);
    if ( v4 >= 0 )
    {
      v22 = 0LL;
      v5 = v23;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      v4 = v6(v5, &v22);
      if ( v4 >= 0 )
      {
        if ( IsPPIEdition() && IsPPIFullFrameUI() && TabletModeHelpers::IsTabletMode(v14) )
        {
          v24 = 0LL;
          v15 = v22;
          v16 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 144LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
          if ( v16(v15, &v24) >= 0 )
          {
            LOBYTE(v17) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_Hub_AppCloseButton>::GetImpl'::`2'::impl,
              v17);
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 88LL))(v24, 1023LL, 28LL);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
        }
        v21 = 0LL;
        v18 = v22;
        v19 = v23;
        v20 = (char *)this - 40;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v21);
        v4 = ((__int64 (__fastcall *)(CApplicationFrameWrapper **, char **, __int64 *, __int64 *))Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>)(
               &v21,
               &v20,
               &v19,
               &v18);
        if ( v4 < 0 )
          goto LABEL_28;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( CApplicationFrameWrapper::IsManagedBy(v21, *((struct IApplicationFrameManager **)this + 17)) )
        {
          v4 = 0;
          v7 = *((_QWORD *)this + 9);
          if ( v7 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                       (char *)this + 64,
                       v7 + 1),
                v4 >= 0) )
          {
            v8 = *((_QWORD *)this + 9);
            *((_QWORD *)this + 9) = v8 + 1;
            v9 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * v8);
            if ( v9 )
            {
              *v9 = v21;
              v10 = v21;
              if ( v21 )
              {
                v11 = *((_QWORD *)v21 + 8);
                while ( v11 >= 0 )
                {
                  if ( (_DWORD)v11 != 0x7FFFFFFF )
                  {
                    v12 = v11;
                    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 8, v11 + 1, v11);
                    if ( v12 != v11 )
                      continue;
                  }
                  goto LABEL_15;
                }
                Microsoft::WRL::Details::SafeUnknownIncrementReference(
                  (Microsoft::WRL::Details *)(2 * v11 + 16),
                  (volatile int *)((unsigned __int64)v11 >> 63));
              }
            }
          }
        }
        else
        {
          v4 = -2147024809;
        }
LABEL_15:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_28:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v22);
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v21);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_6d5eaa5084fc3011a08fb726731b271f_Traceguids,
          *((unsigned int *)this + 14),
          v18,
          v19,
          v20);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  }
  return (unsigned int)v4;
}
