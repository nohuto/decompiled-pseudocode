/*
 * XREFs of ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x1800B5848
 * Callers:
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x1800B6B30 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180027EB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CAA4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x1800B7100 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800B7268 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(struct IInspectable **a1)
{
  struct IInspectable *v2; // rcx
  _QWORD *v3; // rax
  UniqueExtendedExecutionSession *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  struct IInspectable *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  _QWORD *v13; // rcx
  UniqueExtendedExecutionSession *v14; // rcx
  _QWORD *v15; // rcx
  UniqueExtendedExecutionSession *v16; // rdx
  UniqueExtendedExecutionSession *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  struct IInspectable *v20; // rcx
  __int64 v21; // rcx
  struct IInspectable *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct IInspectable *v24; // [rsp+70h] [rbp+38h] BYREF
  struct IInspectable *v25; // [rsp+78h] [rbp+40h] BYREF
  _QWORD *v26; // [rsp+80h] [rbp+48h] BYREF
  UniqueExtendedExecutionSession *v27; // [rsp+88h] [rbp+50h] BYREF

  *a1 = 0LL;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v24 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
    && (int)Microsoft::WRL::WeakRef::As<IInspectable>(
              &UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
              (__int64 *)&v24) >= 0
    && v24 )
  {
    CDMUtilsUnlockTelemetry::ReusingExistingExtendedExecution();
    v2 = v24;
    if ( v24 )
    {
      ((void (__fastcall *)(struct IInspectable *))v24->lpVtbl->AddRef)(v24);
      v2 = v24;
    }
    *a1 = v2;
LABEL_51:
    if ( v2 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v2->lpVtbl->Release)(v2);
    }
    ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
    return 0LL;
  }
  v25 = 0LL;
  v3 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (UniqueExtendedExecutionSession *)v3;
  v26 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v5);
    v8 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v8->lpVtbl->Release)(v8);
    }
    v9 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
    return (unsigned int)v5;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  *((_QWORD *)v4 + 7) = 1LL;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable';
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)v4 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v4 = &UniqueExtendedExecutionSession::`vftable';
  *v6 = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)v4 + 5) = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  v27 = v4;
  v26 = 0LL;
  v5 = UniqueExtendedExecutionSession::RuntimeClassInitialize(v4);
  v7 = *(_QWORD *)v4;
  if ( v5 < 0 )
  {
    (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(v7 + 16))(v4);
    goto LABEL_14;
  }
  v5 = (*(__int64 (__fastcall **)(UniqueExtendedExecutionSession *, GUID *, struct IInspectable **))v7)(
         v4,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v25);
  (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 < 0 )
    goto LABEL_14;
  v11 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
  UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v26 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, _QWORD **))v25->lpVtbl->QueryInterface)(
          v25,
          &GUID_00000038_0000_0000_c000_000000000046,
          &v26);
  if ( v12 >= 0 )
  {
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, UniqueExtendedExecutionSession **))(*v26 + 24LL))(v26, &v27);
    if ( v12 >= 0 )
    {
      v16 = v27;
      v17 = v27;
      if ( v27 )
      {
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v27 + 8LL))(v27);
        v16 = v27;
      }
      v18 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = v17;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v16 = v27;
      }
      if ( v16 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v19 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      }
      v12 = 0;
    }
    else
    {
      v14 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      }
    }
  }
  else
  {
    v13 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
  }
  if ( v12 >= 0 )
  {
    v22 = v25;
    if ( v25 )
    {
      ((void (__fastcall *)(struct IInspectable *))v25->lpVtbl->AddRef)(v25);
      v22 = v25;
    }
    *a1 = v22;
    if ( v22 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v22->lpVtbl->Release)(v22);
    }
    v2 = v24;
    goto LABEL_51;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDB,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v12);
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v20->lpVtbl->Release)(v20);
  }
  v21 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  return (unsigned int)v12;
}
