/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013751C
 * Callers:
 *     _lambda_8e74cd273561b15a8d8b985ad84a422d_::operator() @ 0x18000C1B0 (_lambda_8e74cd273561b15a8d8b985ad84a422d_--operator().c)
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x1800773D4 (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 *     _lambda_e93b07e05eb73953e8a67c4fda015070_::operator() @ 0x180136F40 (_lambda_e93b07e05eb73953e8a67c4fda015070_--operator().c)
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x180137198 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18022B030 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)v4 == 1 )
  {
    *(_BYTE *)(a2 + 24) = 0;
    *(_DWORD *)a2 = *(_DWORD *)(v4 + 40);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v4 + 48);
    if ( *(_BYTE *)(v4 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)a2,
        *(const unsigned __int16 **)(v4 + 56));
    else
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(v4 + 56);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 40) = a1;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_QWORD *)(a2 + 64) = a2;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 32));
  }
  else
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  return a2;
}
