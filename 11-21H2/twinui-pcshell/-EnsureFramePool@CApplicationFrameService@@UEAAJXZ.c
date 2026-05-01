/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800C05F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x1800C07F0 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1800C0BA8 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800C3894 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180144170 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1802EC3E8 (WPP_SF_d.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x1802FFDB0 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  void *v7; // r8
  __int64 v8; // rdx
  CApplicationFrameWrapper **v9; // rdx
  CApplicationFrameWrapper *v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  char *v18; // [rsp+30h] [rbp-18h] BYREF
  CApplicationFrameWrapper *v19; // [rsp+80h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+40h] BYREF
  __int64 v21; // [rsp+90h] [rbp+48h] BYREF
  __int64 v22; // [rsp+98h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v21);
    if ( v4 >= 0 )
    {
      v20 = 0LL;
      v5 = v21;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
      v4 = v6(v5, &v20);
      if ( v4 >= 0 )
      {
        if ( IsPPIEdition() && IsPPIFullFrameUI() )
        {
          v22 = 0LL;
          v14 = v20;
          v15 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 144LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
          if ( v15(v14, &v22) >= 0 )
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 88LL))(v22, 1023LL, 24LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
        }
        v19 = 0LL;
        v16 = v20;
        v17 = v21;
        v18 = (char *)this - 40;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v19);
        v4 = ((__int64 (__fastcall *)(CApplicationFrameWrapper **, char **, __int64 *, __int64 *))Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>)(
               &v19,
               &v18,
               &v17,
               &v16);
        if ( v4 < 0 )
          goto LABEL_27;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( CApplicationFrameWrapper::IsManagedBy(v19, *((struct IApplicationFrameManager **)this + 17)) )
        {
          v4 = 0;
          v8 = *((_QWORD *)this + 9);
          if ( v8 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                       (__int64)this + 64,
                       v8 + 1,
                       v7),
                v4 >= 0) )
          {
            v9 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
            if ( v9 )
            {
              *v9 = v19;
              v10 = v19;
              if ( v19 )
              {
                v11 = *((_QWORD *)v19 + 8);
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
LABEL_27:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v20);
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v19);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_6d5eaa5084fc3011a08fb726731b271f_Traceguids,
          *((unsigned int *)this + 14));
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  }
  return (unsigned int)v4;
}
