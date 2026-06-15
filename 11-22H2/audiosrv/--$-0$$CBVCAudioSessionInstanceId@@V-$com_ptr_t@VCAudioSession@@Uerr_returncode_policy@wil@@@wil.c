/*
 * XREFs of ??$?0$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@$0A@@?$pair@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800E6E44
 * Callers:
 *     std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_badcd54a9567467c8cd0af6fdc9e1627___ @ 0x1800E71E8 (std--find_if_std--_List_const_iterator_std--_List_val_std--_List_simple_types_std--pair_CAudioSe.c)
 *     std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_c88a87a408b415d98ab081b1d6082a95___ @ 0x1800E7294 (std--find_if_std--_List_const_iterator_std--_List_val_std--_List_simple_types_std--_ea_1800E7294.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x1800193E0 (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     ??0?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioSession@@@Z @ 0x1800227B0 (--0-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioSession@@@Z.c)
 */

CAudioSessionInstanceId *__fastcall std::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
        CAudioSessionInstanceId *a1,
        __int64 *a2)
{
  CAudioSessionInstanceId::CAudioSessionInstanceId(a1, (const struct CAudioSessionInstanceId *)a2);
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::com_ptr_t<CAudioSession,wil::err_returncode_policy>(
    (_QWORD *)a1 + 10,
    a2[10]);
  return a1;
}
