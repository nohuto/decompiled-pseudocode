/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802606A4
 * Callers:
 *     ?InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264704 (-InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180260F00 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802750D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::ensure_data(&v6);
  tip2::details::shared_data<0,0,0>::start(*v2 + 8LL, &v5);
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  v3 = v6;
  *((_QWORD *)a1 + 6) = v6;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 272));
  wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>(&v6);
  return a1;
}
