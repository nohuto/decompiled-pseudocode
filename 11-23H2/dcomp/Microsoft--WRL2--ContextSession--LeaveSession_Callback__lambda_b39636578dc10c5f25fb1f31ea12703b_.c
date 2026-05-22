/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b___ @ 0x18002C824
 * Callers:
 *     ?FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ @ 0x18002C400 (-FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ??$DoInvoke@V_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@@?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@@Z @ 0x1800A6E08 (--$DoInvoke@V_lambda_f24eeb795b9597b4e2855ddc1eb35b10_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_b39636578dc10c5f25fb1f31ea12703b___(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 *a2)
{
  volatile signed __int32 *p_OwningThread; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 DebugInfo_high; // rdx
  __int64 result; // rax
  _QWORD v9[7]; // [rsp+40h] [rbp-38h] BYREF
  const void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF

  p_OwningThread = (volatile signed __int32 *)&this->OwningThread;
  if ( _InterlockedIncrement((volatile signed __int32 *)&this->OwningThread) == 1 )
    (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION *))&this->DebugInfo[1].EntryCount)(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((Microsoft::WRL2::ContextSession *)this);
  v5 = *a2;
  v12 = a2[2];
  v11 = a2[1];
  v9[2] = &v11;
  v9[3] = &v12;
  v9[0] = &v11;
  v9[1] = &v12;
  v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_f24eeb795b9597b4e2855ddc1eb35b10_>(
         v5,
         v9);
  if ( v6 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v6, retaddr);
  EnterCriticalSection(this + 1);
  DebugInfo_high = HIDWORD(this[2].DebugInfo);
  if ( LODWORD(this[2].DebugInfo) != (_DWORD)DebugInfo_high + this[2].LockCount )
    Microsoft::WRL2::FailFast::Unexpected("End callback counts");
  HIDWORD(this[2].DebugInfo) = DebugInfo_high - 1;
  result = (unsigned int)_InterlockedExchangeAdd(p_OwningThread, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(DebugInfo_high) = 1;
    return ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64))this->DebugInfo[1].ProcessLocksList.Flink)(
             this,
             DebugInfo_high);
  }
  return result;
}
