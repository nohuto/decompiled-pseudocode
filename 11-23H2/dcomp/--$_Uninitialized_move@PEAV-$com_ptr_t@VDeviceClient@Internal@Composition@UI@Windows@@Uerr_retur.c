/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A4920
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4600 (--$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@-$vector@V-$com_ptr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A45C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_.c)
 */

__int64 *__fastcall std::_Uninitialized_move<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>(
    a3,
    a3);
  return a3;
}
