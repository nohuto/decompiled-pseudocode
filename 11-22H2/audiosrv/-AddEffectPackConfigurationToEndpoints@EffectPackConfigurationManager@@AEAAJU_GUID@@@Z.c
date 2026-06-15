/*
 * XREFs of ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DAB4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_::_Do_call @ 0x18010E680 (std--_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_::_Do_call @ 0x18010E760 (std--_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_--_Do_call.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDF0 (--1-$shared_ptr@VEffectPack@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *i; // rdx
  __int64 v6; // rax
  std::_Ref_count_base **v7; // rax
  std::_Ref_count_base *v8; // rdx
  std::_Ref_count_base *v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  std::_Ref_count_base *v15[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v16; // [rsp+38h] [rbp-9h] BYREF
  std::_Ref_count_base *v17; // [rsp+40h] [rbp-1h]
  _QWORD v18[7]; // [rsp+48h] [rbp+7h] BYREF
  _QWORD *v19; // [rsp+80h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  *(_OWORD *)v15 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (_QWORD *)*((_QWORD *)this + 8); i != *((_QWORD **)this + 9); i += 2 )
  {
    v6 = *(_QWORD *)*i - *(_QWORD *)&a2->Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(*i + 8LL) - *(_QWORD *)a2->Data4;
    if ( !v6 )
    {
      v7 = (std::_Ref_count_base **)std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v16, i);
      v8 = *v7;
      *v7 = v15[0];
      v15[0] = v8;
      v9 = v7[1];
      v7[1] = v15[1];
      v15[1] = v9;
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      break;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !v15[0] )
  {
    v10 = -2147024809;
    v11 = 94LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v10);
    std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>((__int64)v15);
    return (unsigned int)v10;
  }
  v12 = *(_QWORD *)g_pEndpointCharacteristicsCache;
  v18[0] = off_18017C980;
  v18[1] = v15;
  v19 = v18;
  v10 = (*(__int64 (__fastcall **)(PVOID, _QWORD *))(v12 + 48))(g_pEndpointCharacteristicsCache, v18);
  if ( v19 )
  {
    v13 = v18;
    LOBYTE(v13) = v19 != v18;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 32LL))(v19, v13);
  }
  if ( v10 < 0 )
  {
    v11 = 111LL;
    goto LABEL_18;
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  return 0LL;
}
