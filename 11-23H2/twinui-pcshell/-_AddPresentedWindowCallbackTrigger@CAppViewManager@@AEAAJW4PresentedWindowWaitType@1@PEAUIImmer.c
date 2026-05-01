/*
 * XREFs of ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1803B5410
 * Callers:
 *     ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x1803AD7A0 (-AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PE.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1803B5770 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B9424 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x1803A4B80 (WPP_SF_Sdd.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1803B5B18 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 */

// Hidden C++ exception states: #wind=4
__int64 CAppViewManager::_AddPresentedWindowCallbackTrigger(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64),
        __int64 a4,
        IUnknown *a5,
        ...)
{
  int *v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // rsi
  int v10; // r14d
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64); // rbx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, const wchar_t **); // rbx
  int v20; // [rsp+20h] [rbp-40h]
  int v21; // [rsp+28h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *v23; // [rsp+38h] [rbp-28h] BYREF
  const wchar_t *v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h]
  int *v29; // [rsp+C8h] [rbp+68h] BYREF
  va_list va; // [rsp+C8h] [rbp+68h]
  va_list va1; // [rsp+D0h] [rbp+70h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v29 = va_arg(va1, int *);
  v7 = v29;
  *v29 = 0;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v8[2] = 0;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    v8[10] = 0;
    *(_QWORD *)v8 = &CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::`vftable';
    v8[12] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v22 = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  if ( v9 )
  {
    LODWORD(v29) = 2;
    v23 = a5;
    v11 = *(_QWORD *)(v9 + 24);
    if ( v11 )
    {
      *(_QWORD *)(v9 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            (__int64 *)(v9 + 24),
            &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a,
            &v23,
            (int *)va);
    if ( v10 >= 0 )
    {
      v12 = **a3;
      v13 = v9 + 16;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v9 + 16));
      v10 = v12(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v9 + 16);
      if ( v10 >= 0 )
      {
        *(_DWORD *)(v9 + 8) = a2;
        *(_QWORD *)(v9 + 32) = a4;
        *(_DWORD *)(v9 + 40) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
        v10 = 0;
        v14 = *(_QWORD *)(a1 + 96);
        if ( v14 != *(_QWORD *)(a1 + 112)
          || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                      a1 + 88,
                      v14 + 1),
              v10 >= 0) )
        {
          v15 = *(_QWORD *)(a1 + 96);
          *(_QWORD *)(a1 + 96) = v15 + 1;
          v16 = (__int64 *)(*(_QWORD *)(a1 + 88) + 8 * v15);
          if ( v16 )
          {
            *v16 = v9;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
          }
        }
        if ( v10 >= 0 )
        {
          *v7 = *(_DWORD *)(v9 + 40);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          {
            v24 = 0LL;
            v25 = 0LL;
            v26 = 0LL;
            v17 = *(_QWORD *)v13;
            v18 = *(int (__fastcall **)(__int64, const wchar_t **))(**(_QWORD **)v13 + 32LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
            v25 = -1LL;
            v26 = -1LL;
            if ( v18(v17, &v24) >= 0
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v21 = *v7;
              v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*a3)[20])(a3);
              WPP_SF_Sdd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Eu,
                &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids,
                v24,
                v20,
                v21);
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
          }
        }
      }
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v10;
}
