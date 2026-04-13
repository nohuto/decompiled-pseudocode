/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180062EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800632B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x1800B6B30 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock(
        ContentManagement::ContentManagementService *this,
        struct IInspectable *a2)
{
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  UnlockActionHelper *v15; // [rsp+50h] [rbp+20h]

  v3 = (volatile signed __int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v5);
    return v5;
  }
  *((_QWORD *)v3 + 3) = 1LL;
  *v3 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v4 = (volatile signed __int64)&UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
    goto LABEL_7;
  }
  v8 = *((_QWORD *)v4 + 3);
  while ( v8 >= 0 )
  {
    if ( (_DWORD)v8 != 0x7FFFFFFF )
    {
      v10 = _InterlockedCompareExchange64(v4 + 3, v8 + 1, v8);
      v9 = v8 == v10;
      v8 = v10;
      if ( !v9 )
        continue;
    }
    goto LABEL_15;
  }
  do
    v11 = *(_DWORD *)(2 * v8 + 0x10);
  while ( v11 != 0x7FFFFFFF
       && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v8 + 16), v11 + 1, v11) );
LABEL_15:
  v15 = (UnlockActionHelper *)v4;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
  v12 = UnlockActionHelper::QueueActionAfterUnlock((UnlockActionHelper *)v4);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x390,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v12);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v15);
    return v13;
  }
}
