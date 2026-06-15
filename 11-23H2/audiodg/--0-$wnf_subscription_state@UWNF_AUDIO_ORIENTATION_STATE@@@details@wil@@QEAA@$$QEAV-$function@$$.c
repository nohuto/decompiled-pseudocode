/*
 * XREFs of ??0?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@@Z @ 0x1400769EC
 * Callers:
 *     ??$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@01@@Z @ 0x140076848 (--$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>(
        _QWORD *a1,
        __int64 a2)
{
  a1[1] = 0LL;
  *a1 = &wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    a1[16] = a1 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    a1[16] = 0LL;
  }
  return a1;
}
