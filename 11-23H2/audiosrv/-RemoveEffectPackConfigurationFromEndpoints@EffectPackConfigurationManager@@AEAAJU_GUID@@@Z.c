/*
 * XREFs of ?RemoveEffectPackConfigurationFromEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010E25C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_::_Do_call @ 0x18010E6C0 (std--_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPackConfigurationManager::RemoveEffectPackConfigurationFromEndpoints(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_QWORD *)g_pEndpointCharacteristicsCache;
  v6[0] = off_18017C950;
  v6[1] = a2;
  v7 = v6;
  v3 = (*(__int64 (__fastcall **)(PVOID, _QWORD *))(v2 + 48))(g_pEndpointCharacteristicsCache, v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
