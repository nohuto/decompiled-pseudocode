/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801876A0
 * Callers:
 *     ?remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180187610 (-remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@.c)
 *     ?remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180187710 (-remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1803267E0 (--$InvokeDelegates@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@U-$ITypedEventHandler@PEAUIGaming.c)
 *     ??$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0808a6f2104e0fe6f743d65699099e1d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180326984 (--$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009FEF8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800A1F08 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  unsigned int v4; // edi
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  bool v8; // r15
  __int64 v9; // r12
  RTL_SRWLOCK *v10; // r12
  int v11; // r14d
  struct IUnknown **v12; // r14
  void **v13; // r13
  RTL_SRWLOCK *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int32 *v16; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v14, a1 + 2);
  Ptr = a1->Ptr;
  if ( a1->Ptr )
  {
    v7 = (struct IUnknown **)Ptr[2];
    v8 = 0;
    v9 = Ptr[3] - (_QWORD)v7;
    v15 = 0LL;
    v10 = (RTL_SRWLOCK *)((v9 >> 3) - 1);
    v17 = v10;
    if ( v10 )
    {
      v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
              &v15,
              (unsigned __int64 *)&v17);
      if ( v11 < 0 )
      {
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)&v15);
        v4 = v11;
        goto LABEL_2;
      }
      v12 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v13 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v12 == *((struct IUnknown ***)a1->Ptr + 3) )
      {
LABEL_16:
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)&v15);
        goto LABEL_2;
      }
      do
      {
        if ( v8 || a2 != *v12 )
        {
          if ( !v10 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v12, *v13++);
          v10 = (RTL_SRWLOCK *)((char *)v10 - 1);
        }
        else
        {
          v8 = 1;
        }
        ++v12;
      }
      while ( v12 != *((struct IUnknown ***)a1->Ptr + 3) );
    }
    else
    {
      v8 = *v7 == a2;
    }
    if ( v8 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v15);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
    }
    goto LABEL_16;
  }
LABEL_2:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v14);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v16);
  return v4;
}
