/*
 * XREFs of ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800EBD94
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800EB69C (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA?A_TAEBU_GUID@@@Z @ 0x1800EAF68 (--$emplace_back@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA-A_TAEBU_GUID@.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800EE80C (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::GetDiscoveredEffects(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  bool *v5; // rax
  bool *v6; // rbx
  void *v7; // rsi
  wil *v8; // rax
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  unsigned int i; // edi
  unsigned __int64 *v15; // [rsp+28h] [rbp-50h]
  _WNF_STATE_NAME v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 384) )
  {
    LOBYTE(v16.Data[0]) = 0;
    v4 = 16LL * *(unsigned int *)(a1 + 344);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 344), 0x10uLL) )
      v4 = -1LL;
    v5 = (bool *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
    try
    {
      v6 = v5;
      v17[1] = (unsigned __int64)v5;
      v17[0] = 0LL;
      v7 = (void *)(16LL * *(unsigned int *)(a1 + 344));
      v8 = (wil *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 376) + 40LL))(
                    *(_QWORD *)(a1 + 376),
                    v18);
      v9 = wil::wnf_query_nothrow(
             v8,
             &v16,
             v6,
             v7,
             (unsigned __int64)v17,
             v15,
             *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v16);
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( LOBYTE(v16.Data[0]) )
        {
          v13 = v17[0] >> 4;
          for ( i = 0; i < (unsigned int)v13; ++i )
            std::vector<_GUID>::emplace_back<_GUID const &>(a2, &v6[16 * i]);
          if ( v6 )
            operator delete(v6);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x75F,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)0x80004005LL);
          if ( v6 )
            operator delete(v6);
          result = 2147500037LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x75E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v9);
        if ( v6 )
          operator delete(v6);
        result = v11;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x769,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                             v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x759,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
