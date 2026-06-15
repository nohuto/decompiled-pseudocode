/*
 * XREFs of ?ForEachEffectPackConfiguration@EffectPackConfigurationManager@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z@std@@@Z @ 0x180046018
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPackConfigurationManager::ForEachEffectPackConfiguration(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  while ( v5 != v6 )
  {
    v8 = *(_QWORD *)(a2 + 56);
    if ( !v8 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x1800B3EC4LL);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v5);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v9);
    v5 += 16LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
