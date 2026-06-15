/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001C4D4
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001C1C4 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001C500 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::clear(_QWORD *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
