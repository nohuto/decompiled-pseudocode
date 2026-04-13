/*
 * XREFs of ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800A58A0
 * Callers:
 *     ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x1800A5558 (--1UniqueExtendedExecutionSession@@UEAA@XZ.c)
 *     ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x1800A6930 (-OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionR.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800A72F8 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180037C98 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F60 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180065A70 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800724D8 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x1800A4580 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800A7730 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall UniqueExtendedExecutionSession::CloseSession(struct IUnknown *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 (__fastcall **QueryInterface)(struct IUnknownVtbl *, GUID *, struct IUnknown **); // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IUnknown *v10; // [rsp+40h] [rbp+20h] BYREF
  char v11; // [rsp+48h] [rbp+28h] BYREF
  struct IUnknown *v12; // [rsp+50h] [rbp+30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+38h] BYREF

  v11 = a2;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v13 = &UniqueExtendedExecutionSession::s_extendedExecutionLock;
  v10 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(
                (Microsoft::WRL::WeakRef *)&UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
                (struct IInspectable **)&v10) >= 0
      && v10 )
    {
      v12 = this;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
      if ( (unsigned int)SHIsSameObject(v10, this) )
      {
        v3 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
        UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    }
    else
    {
      v4 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
  lpVtbl = this[8].lpVtbl;
  if ( lpVtbl )
  {
    v10 = 0LL;
    QueryInterface = (__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, struct IUnknown **))lpVtbl->QueryInterface;
    v10 = 0LL;
    v7 = (*QueryInterface)(lpVtbl, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v10);
    if ( v7 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IUnknown *))v10->lpVtbl[2].QueryInterface)(v10);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)(unsigned int)v8);
      CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(&v11);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)&this[8]);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v10);
  }
}
