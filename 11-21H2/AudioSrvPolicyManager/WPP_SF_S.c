/*
 * XREFs of WPP_SF_S @ 0x180013550
 * Callers:
 *     _lambda_83a58deb585061dd6d0ac9f5480fe44e_::operator() @ 0x18000FCE0 (_lambda_83a58deb585061dd6d0ac9f5480fe44e_--operator().c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800110C8 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18001131C (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18001153C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180011700 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_65648773c4b5838a8b5f669638121cdb__long_IAudioSessionInfo___::_Do_call @ 0x180012E30 (std--_Func_impl_no_alloc__lambda_65648773c4b5838a8b5f669638121cdb__long_IAudioSessionInfo___--_D.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015AF0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180016144 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180016270 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180017C80 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18001C440 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call @ 0x18001D460 (std--_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call @ 0x18001D6B0 (std--_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_--_Do_call.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800204A0 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x1800205A4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_S(TRACEHANDLE a1, USHORT a2, const GUID *a3, const wchar_t *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, a3, a2, a4, v5, 0LL);
}
