/*
 * XREFs of ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18000D360 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180026864 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x180026DB8 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800285B0 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180028E20 (PbmReportApplicationState.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::wstring,unsigned short const * &>(_QWORD *a1, void **a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _WORD *v7; // rdx
  __int64 v8; // r8

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<std::wstring>::`vftable';
    v7 = *a2;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 7LL;
    *((_WORD *)v5 + 8) = 0;
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    std::wstring::assign(v5 + 4, v7);
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6 + 4;
  a1[1] = v6;
  return a1;
}
