/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800A6D0C
 * Callers:
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = *(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
