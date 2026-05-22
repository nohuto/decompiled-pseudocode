/*
 * XREFs of ??$construct@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4960
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4600 (--$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@-$vector@V-$com_ptr.c)
 *     ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04 (-CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>,Windows::UI::Composition::Internal::DeviceClient * &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a3;
  *a2 = *a3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
