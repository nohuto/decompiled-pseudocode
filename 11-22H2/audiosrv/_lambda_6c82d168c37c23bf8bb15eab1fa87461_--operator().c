/*
 * XREFs of _lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator() @ 0x1800DEE38
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_________lambda_6c82d168c37c23bf8bb15eab1fa87461___ @ 0x1800DE9D4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CAudioSt.c)
 * Callees:
 *     ??0?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z @ 0x18000A210 (--0-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800DE6EC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbx

  v4 = *a2;
  if ( *(_BYTE *)(*a2 + 136) )
    return 0;
  v5 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 != -1 && (*v5 != 1 || !*(_BYTE *)(v4 + 40)) && (*v5 || !*(_BYTE *)(v4 + 41)) )
    return 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 136LL);
  EnterCriticalSection(v6);
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v7 + 184) == *(_QWORD *)(v7 + 192) )
  {
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
      (__int64 **)(v7 + 176),
      *(__int64 **)(v7 + 184),
      a2);
  }
  else
  {
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
      *(_QWORD **)(v7 + 184),
      *a2);
    *(_QWORD *)(v7 + 184) += 8LL;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 1;
}
