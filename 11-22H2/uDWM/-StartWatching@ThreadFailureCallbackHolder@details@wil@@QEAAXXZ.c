/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180016D44
 * Callers:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180005AF0 (-EnsureWatchingCurrentThread@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflecto.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180007CF8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180016ECC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016DA4 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009E0C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this,
        __int64 a2)
{
  _QWORD *Local; // rax
  const struct wil::FailureInfo *v4; // rdx
  _BYTE v5[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    memset_0(v5, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v5, v4);
  }
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    LOBYTE(a2) = 1;
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        this,
                        a2);
    *(_QWORD *)this = Local;
    if ( Local )
    {
      *((_QWORD *)this + 2) = *Local;
      *Local = this;
      *((_DWORD *)this + 6) = GetCurrentThreadId();
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}
