/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18009EED4
 * Callers:
 *     ??$InvokeDelegates@V_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1800462F4 (--$InvokeDelegates@V_lambda_c5bfabb814bec5f5156f201f837dd6b0_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?remove_Shown@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1800A0D30 (-remove_Shown@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_856e806f3bb394c289d8b818d14fd793_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_856e806f3bb394c289d8b818d14fd793_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18035659C (--$InvokeDelegates@V_lambda_856e806f3bb394c289d8b818d14fd793_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?remove_Shown@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18035F890 (-remove_Shown@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_4968d30b413081c09ea62553d21bc736_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_4968d30b413081c09ea62553d21bc736_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180388E90 (--$InvokeDelegates@V_lambda_4968d30b413081c09ea62553d21bc736_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?remove_Shown@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18038D360 (-remove_Shown@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009FEF8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800A1F08 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        __int64 *a1,
        struct IUnknown *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  struct IUnknown **v6; // rcx
  bool v7; // r15
  __int64 v8; // r12
  __int64 v9; // r12
  int v10; // r14d
  struct IUnknown **v11; // r14
  void **v12; // r13
  _BYTE v14[16]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v14, a1 + 2);
  v5 = *a1;
  if ( *a1 )
  {
    v6 = *(struct IUnknown ***)(v5 + 16);
    v7 = 0;
    v8 = *(_QWORD *)(v5 + 24) - (_QWORD)v6;
    v15 = 0LL;
    v9 = (v8 >> 3) - 1;
    v17 = v9;
    if ( v9 )
    {
      v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
              &v15,
              &v17);
      if ( v10 < 0 )
      {
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v15);
        v4 = v10;
        goto LABEL_12;
      }
      v11 = *(struct IUnknown ***)(*a1 + 16);
      v12 = *(void ***)(*a1 + 32);
      if ( v11 == *(struct IUnknown ***)(*a1 + 24) )
        goto LABEL_11;
      do
      {
        if ( v7 || a2 != *v11 )
        {
          if ( !v9 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v11, *v12++);
          --v9;
        }
        else
        {
          v7 = 1;
        }
        ++v11;
      }
      while ( v11 != *(struct IUnknown ***)(*a1 + 24) );
    }
    else
    {
      v7 = *v6 == a2;
    }
    if ( v7 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v15);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v17);
    }
LABEL_11:
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v15);
  }
LABEL_12:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v14);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v16);
  return v4;
}
