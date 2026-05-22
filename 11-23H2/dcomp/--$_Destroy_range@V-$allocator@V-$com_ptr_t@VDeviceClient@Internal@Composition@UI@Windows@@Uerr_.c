/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A45C8
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A4920 (--$_Uninitialized_move@PEAV-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_retur.c)
 *     ??1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A51A0 (--1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800A684C (-_Change_array@-$vector@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returnc.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
