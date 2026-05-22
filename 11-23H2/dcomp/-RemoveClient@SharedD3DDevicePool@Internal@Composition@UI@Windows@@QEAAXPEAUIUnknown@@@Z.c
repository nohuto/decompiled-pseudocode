/*
 * XREFs of ?RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z @ 0x1800A6508
 * Callers:
 *     ??1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ @ 0x1800A275C (--1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@1@AEB_J@Z @ 0x1800A4AAC (--$find@X@-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Wi.c)
 *     ??1?$out_param_t@V?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800A4F58 (--1-$out_param_t@V-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows.c)
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5588 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::RemoveClient(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this,
        struct IUnknown *a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v5; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+38h] [rbp-8h]
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  struct IUnknownVtbl *lpVtbl; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v8 = 0LL;
  if ( a2 )
  {
    wil::srwlock::lock_exclusive((char *)this + 64, v4);
    if ( a2[2].lpVtbl )
    {
      lpVtbl = a2[3].lpVtbl;
      std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::find<void>(
        this,
        &v10,
        (const unsigned __int8 *)&lpVtbl);
      v6 = 0LL;
      v5 = &v8;
      v7 = 1;
      Windows::UI::Composition::Internal::SharedD3DDevicePool::RemoveSharedDeviceClient(this, v10, a2, &v6);
      wil::details::out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>::~out_param_t<std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>(&v5);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v4);
  }
  std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v8);
}
