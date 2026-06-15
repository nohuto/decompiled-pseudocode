/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UICPAudioHistoryReader@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1400671D8
 * Callers:
 *     _PopulateAudioHistoryForStreamInternal_::_1_::dtor$1 @ 0x1400688E7 (_PopulateAudioHistoryForStreamInternal_--_1_--dtor$1.c)
 *     _PopulateAudioHistoryForStreamInternal_::_1_::dtor$3 @ 0x1400688FF (_PopulateAudioHistoryForStreamInternal_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::details::out_param_t<wil::com_ptr_t<ICPAudioHistoryReader,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<ICPAudioHistoryReader,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    result = *a1;
    v3 = **a1;
    *result = (__int64)v1;
    if ( v3 )
      return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
