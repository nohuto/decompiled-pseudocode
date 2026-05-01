/*
 * XREFs of ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1800283CC
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180027C4C (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x1802F4850 (-AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PE.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FB564 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18003D8DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x1802EC358 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_AddPresentedWindowCallbackTrigger(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _DWORD *),
        __int64 a4,
        __int64 a5,
        int *a6)
{
  int *v10; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  int v13; // r14d
  __int64 (__fastcall *v14)(_QWORD, GUID *, _DWORD *); // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, __int64 *); // rbx
  int v20; // ebx
  char v21; // al
  _DWORD *v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h]

  v10 = a6;
  *a6 = 0;
  v11 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v11[2] = 0;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    v11[10] = 0;
    *(_QWORD *)v11 = &CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::`vftable';
    v11[12] = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v22 = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  if ( v12 )
  {
    LODWORD(a6) = 2;
    v23 = a5;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v12 + 6,
            &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a,
            &v23,
            &a6);
    if ( v13 >= 0 )
    {
      v14 = **a3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12 + 4);
      v13 = v14(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v12 + 4);
      if ( v13 >= 0 )
      {
        v12[2] = a2;
        *((_QWORD *)v12 + 4) = a4;
        v12[10] = _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
        v13 = 0;
        v15 = *(_QWORD *)(a1 + 96);
        if ( v15 != *(_QWORD *)(a1 + 112)
          || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                      a1 + 88,
                      v15 + 1),
              v13 >= 0) )
        {
          v16 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (*(_QWORD *)(a1 + 96))++);
          if ( v16 )
          {
            *v16 = v12;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
          }
        }
        if ( v13 >= 0 )
        {
          *v10 = v12[10];
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          {
            v24 = 0LL;
            v25 = 0LL;
            v26 = 0LL;
            v18 = *((_QWORD *)v12 + 2);
            v19 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 32LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v24);
            v25 = -1LL;
            v26 = -1LL;
            if ( v19(v18, &v24) >= 0
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v20 = *v10;
              v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *)))(*a3)[20])(a3);
              WPP_SF_Sdd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                30,
                (unsigned int)&WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids,
                v24,
                v21,
                v20);
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v24);
          }
        }
      }
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v13;
}
