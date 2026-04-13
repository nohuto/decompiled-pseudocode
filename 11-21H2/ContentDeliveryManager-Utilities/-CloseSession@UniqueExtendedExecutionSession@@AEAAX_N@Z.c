/*
 * XREFs of ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800B4560
 * Callers:
 *     ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x1800B40A0 (--1UniqueExtendedExecutionSession@@UEAA@XZ.c)
 *     ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x1800B62B0 (-OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionR.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800B7268 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CAA4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x1800B343C (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall UniqueExtendedExecutionSession::CloseSession(UniqueExtendedExecutionSession *this, char a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  UniqueExtendedExecutionSession *v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, UniqueExtendedExecutionSession **); // rcx
  __int64 (__fastcall **v8)(_QWORD, GUID *, UniqueExtendedExecutionSession **); // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  UniqueExtendedExecutionSession *v13; // [rsp+60h] [rbp+28h] BYREF
  char v14; // [rsp+68h] [rbp+30h] BYREF
  __int64 v15; // [rsp+70h] [rbp+38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+40h] BYREF

  v14 = a2;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v13 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(
                &UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
                (__int64 *)&v13) >= 0
      && v13 )
    {
      if ( this )
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)this + 8LL))(this);
      if ( v13 && this )
      {
        if ( v13 == this )
          goto LABEL_14;
        v16 = 0LL;
        v15 = 0LL;
        if ( (**(int (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))v13)(
               v13,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v16) >= 0 )
        {
          v3 = (**(__int64 (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))this)(
                 this,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 &v15);
          if ( v3 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          if ( v3 >= 0 && v16 == v15 )
          {
LABEL_14:
            v4 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
            UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
            if ( v4 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          }
        }
      }
      if ( this )
        (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)this + 16LL))(this);
    }
    else
    {
      v5 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, UniqueExtendedExecutionSession **))*((_QWORD *)this + 8);
  if ( v7 )
  {
    v13 = 0LL;
    v8 = *v7;
    v13 = 0LL;
    v9 = (*v8)(v7, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v13);
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v13 + 48LL))(v13);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)(unsigned int)v10);
      CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(&v14);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v9);
    }
    v11 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
