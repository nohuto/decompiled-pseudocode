/*
 * XREFs of _lambda_ab1b644c27156c762685df6288a886df_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x180070C14
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180024E70 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000AF74 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x18000B48C (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

char __fastcall lambda_ab1b644c27156c762685df6288a886df_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
        __int64 **a1,
        __int64 *a2)
{
  unsigned int v4; // eax
  __int64 *v5; // rbx

  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 248LL))(*a2) )
    return 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, v4);
  }
  v5 = *a1;
  if ( v5[1] == v5[2] )
  {
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
      v5,
      v5[1],
      a2);
  }
  else
  {
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
      (_QWORD *)v5[1],
      *a2);
    v5[1] += 8LL;
  }
  return 1;
}
