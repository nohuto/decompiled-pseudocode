/*
 * XREFs of ??$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVUnlockActionHelper@@AEAPEAUIInspectable@@@Z @ 0x18004DB98
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18005C6A0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180051674 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@.c)
 *     ?InternalRelease@?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x180059DC4 (-InternalRelease@-$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@UnlockActionHelper@@QEAAJPEAUIInspectable@@@Z @ 0x1800A7694 (-RuntimeClassInitialize@UnlockActionHelper@@QEAAJPEAUIInspectable@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UnlockActionHelper,UnlockActionHelper,IInspectable * &>(
        volatile signed __int64 **a1,
        struct IInspectable **a2)
{
  volatile signed __int64 *v4; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // edi
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  volatile signed __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int64 *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (volatile signed __int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v12 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>(v4);
    *v5 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = (volatile signed __int64)&UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    v11 = v5;
    v12 = 0LL;
    v6 = UnlockActionHelper::RuntimeClassInitialize((UnlockActionHelper *)v5, *a2);
    if ( v6 >= 0 )
    {
      v8 = *((_QWORD *)v5 + 3);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64(v5 + 3, v8 + 1, v8);
          if ( v9 != v8 )
            continue;
        }
        goto LABEL_13;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
LABEL_13:
      *a1 = v5;
      Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease(&v11);
      v6 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease(&v11);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>((void **)&v12);
  return (unsigned int)v6;
}
