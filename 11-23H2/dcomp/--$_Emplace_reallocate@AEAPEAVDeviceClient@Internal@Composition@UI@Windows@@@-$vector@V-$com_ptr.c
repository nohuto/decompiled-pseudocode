/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4600
 * Callers:
 *     ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04 (-CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LU.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ @ 0x18009932C (-_Xlength@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800A4920 (--$_Uninitialized_move@PEAV-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_retur.c)
 *     ??$construct@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVDeviceClient@Internal@Composition@UI@Windows@@@Z @ 0x1800A4960 (--$construct@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800A684C (-_Change_array@-$vector@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returnc.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>::_Emplace_reallocate<Windows::UI::Composition::Internal::DeviceClient * &>(
        const char *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<IUnknown *>::_Xlength(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + 8 * v5;
  std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>,Windows::UI::Composition::Internal::DeviceClient * &>(
    v15,
    v14,
    a3);
  v16 = *((_QWORD *)a1 + 1);
  v17 = v13;
  v18 = *(_QWORD *)a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>(
      v18,
      a2,
      v13);
    v16 = *((_QWORD *)a1 + 1);
    v17 = v14 + 8;
    v18 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>>(
    v18,
    v16,
    v17);
  std::vector<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>::_Change_array(
    a1,
    v13,
    v9,
    v3);
  return v14;
}
