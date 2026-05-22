/*
 * XREFs of ?FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ @ 0x18002C400
 * Callers:
 *     ?DeliverCompletions_Callback@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x18002C28C (-DeliverCompletions_Callback@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ??$MakeAndInitialize2@VCompositionBatchCompletedEventArgs@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18002C6C4 (--$MakeAndInitialize2@VCompositionBatchCompletedEventArgs@Composition@UI@Windows@@V1234@PEAVComp.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b___ @ 0x18002C824 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b_.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionBatch::FireCompletion_Callback(
        Windows::UI::Composition::CompositionBatch *this)
{
  bool v1; // zf
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  _QWORD *Ptr; // r14
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  Microsoft::WRL2::ContextSession *v10; // rcx
  __int64 v11; // rsi
  __int64 *i; // rdi
  __int64 v13; // rdx
  volatile signed __int32 *v14; // r8
  signed __int32 j; // edx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-58h] BYREF
  RTL_SRWLOCK SRWLock; // [rsp+28h] [rbp-50h] BYREF
  RTL_SRWLOCK v20; // [rsp+30h] [rbp-48h] BYREF
  PVOID *v21; // [rsp+40h] [rbp-38h]
  Windows::UI::Composition::CompositionBatch *v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF
  char v27; // [rsp+A0h] [rbp+28h] BYREF

  v1 = (*((_BYTE *)this + 32) & 2) == 0;
  *((_BYTE *)this + 131) = 1;
  if ( !v1 )
  {
    v3 = (RTL_SRWLOCK *)((char *)this + 152);
    if ( *((_QWORD *)this + 19) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 20);
      if ( v3->Ptr )
        v4 = (__int64)(*((_QWORD *)v3->Ptr + 3) - *((_QWORD *)v3->Ptr + 2)) >> 3;
      else
        v4 = 0LL;
      if ( v3 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(v3 + 1);
      if ( v4 )
      {
        v25 = *((_QWORD *)this + 3);
        v26 = 0LL;
        v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionBatchCompletedEventArgs,Windows::UI::Composition::CompositionBatchCompletedEventArgs,Windows::UI::Composition::Compositor *>(
               &v26,
               &v25);
        if ( v5 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1EC,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
            (const char *)(unsigned int)v5,
            (int)v18);
        v18 = 0LL;
        InitializeSRWLock(&SRWLock);
        InitializeSRWLock(&v20);
        AcquireSRWLockExclusive(v3 + 1);
        Ptr = 0LL;
        if ( &v27 != (char *)v3 )
        {
          Ptr = v3->Ptr;
          v3->Ptr = 0LL;
        }
        if ( v3 != (RTL_SRWLOCK *)-8LL )
          ReleaseSRWLockExclusive(v3 + 1);
        AcquireSRWLockExclusive(&SRWLock);
        v7 = v18;
        v18 = Ptr;
        if ( v7 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
        ReleaseSRWLockExclusive(&SRWLock);
        v8 = v26;
        if ( v26 )
          v9 = v26 + 128;
        else
          v9 = 0LL;
        v22 = this;
        v21 = (PVOID *)&v18;
        v10 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this + 3);
        v23 = v9;
        Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b___(v10);
        v11 = *((_QWORD *)this + 3);
        AcquireSRWLockExclusive(&v20);
        if ( v18 )
        {
          for ( i = (__int64 *)v18[2]; i != (__int64 *)v18[3]; ++i )
          {
            v13 = *i;
            *i = 0LL;
            Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v11, v13);
          }
          AcquireSRWLockExclusive(&SRWLock);
          v14 = (volatile signed __int32 *)v18;
          if ( v18 )
          {
            v18 = 0LL;
            for ( j = *((_DWORD *)v14 + 3); j != 0x7FFFFFFF; j = *((_DWORD *)v14 + 3) )
            {
              if ( j == _InterlockedCompareExchange(v14 + 3, j - 1, j) )
                break;
            }
            if ( j == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
            v8 = v26;
          }
          ReleaseSRWLockExclusive(&SRWLock);
        }
        ReleaseSRWLockExclusive(&v20);
        if ( v18 )
        {
          RaiseFailFastException(0LL, 0LL, 0);
          v17 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
          }
        }
        if ( v8 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 16), 0xFFFFFFFF) == 1 )
          {
            LOBYTE(v16) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 64LL))(v26, v16);
          }
        }
      }
    }
  }
}
