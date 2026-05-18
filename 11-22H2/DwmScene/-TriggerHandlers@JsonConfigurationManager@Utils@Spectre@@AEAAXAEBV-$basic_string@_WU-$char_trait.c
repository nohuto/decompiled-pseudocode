/*
 * XREFs of ?TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEF80
 * Callers:
 *     ??$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC1A4 (--$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC464 (--$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 *     ??$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DCAC4 (--$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_st.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___::_ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___ @ 0x1800DE030 (ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___--_ScopeWarden__lambda_3aa3fb67584ff5ca59.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Utils::JsonConfigurationManager::TriggerHandlers(__int64 a1, const wchar_t *a2)
{
  volatile __int32 *v4; // rax
  __int64 v5; // rdx
  __int32 v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v9) = 1;
  std::_Atomic_reinterpret_as<long,long>((unsigned int *)&v9);
  v4 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(a1 + 256);
  if ( _InterlockedExchange(v4, v6) )
  {
    if ( *(_QWORD *)(v5 + 24) >= 8uLL )
      a2 = *(const wchar_t **)v5;
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsConfigurationManager,
      4,
      "A recursive call to TriggerHandlers() with property name '%ls' was ignored.",
      a2);
  }
  else
  {
    v10 = a1;
    v11 = &v10;
    std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 160));
    v7 = **(_QWORD **)(a1 + 240);
    v9 = v7;
    while ( !*(_BYTE *)(v7 + 25) )
    {
      v8 = *(_QWORD *)(v7 + 96);
      if ( !v8 )
      {
        std::_Xbad_function_call();
        break;
      }
      (*(void (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v8 + 16LL))(v8, a2);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v9);
      v7 = v9;
    }
    _Mtx_unlock((_Mtx_t)(a1 + 160));
    ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___::_ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___(&v11);
  }
}
