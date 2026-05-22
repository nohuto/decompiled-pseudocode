/*
 * XREFs of ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C
 * Callers:
 *     ?OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Device@@@Z @ 0x1800A61E8 (-OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Dev.c)
 *     ?ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x1800A666C (-ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A3FB4 (--$-4U-$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800A4994 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_JUSharedDevice@Shared.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@1@AEB_J@Z @ 0x1800A4AAC (--$find@X@-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Wi.c)
 *     ??$make_unique@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U123456@$0A@@std@@YA?AV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@0@$$QEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A4B88 (--$make_unique@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U123456@$0A@@s.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::EraseSharedDevice(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this,
        struct _LUID a2,
        struct ID3D11Device *a3,
        struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice **a4)
{
  struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *v5; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 i; // rbx
  struct Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice *v12; // [rsp+50h] [rbp+30h] BYREF
  struct _LUID v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  v13 = a2;
  v5 = 0LL;
  v12 = 0LL;
  std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::find<void>(
    this,
    &v14,
    (const unsigned __int8 *)&v13);
  v8 = v14;
  if ( v14 != *((_QWORD *)this + 1) && a3 == *(struct ID3D11Device **)(v14 + 24) )
  {
    v9 = std::make_unique<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,0>(
           &v13,
           (__int64 *)(v14 + 24));
    std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::operator=<std::default_delete<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>,0>(
      (__int64 *)&v12,
      v9);
    std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v13);
    std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>>>,0>(
      this,
      &v13,
      v8);
    v5 = v12;
    v10 = *((_QWORD *)v12 + 3);
    for ( i = *((_QWORD *)v12 + 2); i != v10; i += 8LL )
      wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)i + 16LL));
  }
  v12 = 0LL;
  *a4 = v5;
  std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v12);
}
