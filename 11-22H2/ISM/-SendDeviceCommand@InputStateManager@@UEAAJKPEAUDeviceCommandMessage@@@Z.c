/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x1800DB6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001AC34 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B874 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18001B874.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B9D0 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?A_TAEBKAEAPEAUIRawInputProvider@@@Z @ 0x180060548 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 *     ??1?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18006058C (--1-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@KV.c)
 *     ?reserve@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAX_K@Z @ 0x18006071C (-reserve@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$p.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        int a2,
        struct DeviceCommandMessage *a3)
{
  __int64 v6; // rcx
  __int64 **v7; // rdi
  __int64 *i; // rbx
  unsigned __int64 appended; // rax
  __int64 v10; // rdx
  unsigned int *j; // rbx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  RTL_SRWLOCK *v16; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+78h] [rbp+28h] BYREF

  v17 = a2;
  v14 = 0LL;
  v15 = 0LL;
  wil::srwlock::lock_shared((RTL_SRWLOCK *)this + 20, &v16);
  if ( a2 )
  {
    appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v17, 4uLL);
    v10 = std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
            (_QWORD *)this + 12,
            &v13,
            &v17,
            appended)[1];
    if ( !v10 )
      v10 = *((_QWORD *)this + 13);
    if ( v10 != *((_QWORD *)this + 13) )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        (__int64 *)&v14,
        (unsigned int *)(v10 + 16),
        (__int64 *)(v10 + 24));
  }
  else
  {
    std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::reserve(
      (__int64)&v14,
      *((_QWORD *)this + 14));
    v7 = (__int64 **)*((_QWORD *)this + 13);
    for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        (__int64 *)&v14,
        (unsigned int *)i + 4,
        i + 3);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
  for ( j = (unsigned int *)v14; j != *((unsigned int **)&v14 + 1); j += 4 )
    (*(void (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(**((_QWORD **)j + 1) + 24LL))(
      *((_QWORD *)j + 1),
      *j,
      a3);
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::~vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>((__int64)&v14);
  return 0LL;
}
