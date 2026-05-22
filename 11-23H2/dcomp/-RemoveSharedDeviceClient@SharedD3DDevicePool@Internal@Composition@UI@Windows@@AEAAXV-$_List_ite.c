/*
 * XREFs of ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0
 * Callers:
 *     ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04 (-CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LU.c)
 *     ?RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z @ 0x1800A6508 (-RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A3FB4 (--$-4U-$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800A4994 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_JUSharedDevice@Shared.c)
 *     ??$make_unique@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U123456@$0A@@std@@YA?AV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@0@$$QEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A4B88 (--$make_unique@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U123456@$0A@@s.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 *     ?erase@?$vector@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800A6D0C (-erase@-$vector@V-$com_ptr_t@VDeviceClient@Internal@Composition@UI@Windows@@Uerr_returncode_poli.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::RemoveSharedDeviceClient(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rdi
  _QWORD *i; // r8
  __int64 *v10; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)(a3 + 16));
  for ( i = (_QWORD *)a2[5]; i != (_QWORD *)a2[6] && a3 != *i; ++i )
    ;
  std::vector<wil::com_ptr_t<Windows::UI::Composition::Internal::DeviceClient,wil::err_returncode_policy>>::erase(
    a2 + 5,
    &v13);
  if ( a2[5] == a2[6] )
  {
    v10 = std::make_unique<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,0>(
            &v13,
            a2 + 3);
    std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::operator=<std::default_delete<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,0>(
      &v12,
      v10);
    std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v13);
    std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>>>,0>(
      a1,
      &v13,
      (__int64)a2);
    v5 = v12;
  }
  v12 = 0LL;
  *a4 = v5;
  return std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v12);
}
