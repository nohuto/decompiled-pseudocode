/*
 * XREFs of ?CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105A10
 * Callers:
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105D60 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 * Callees:
 *     ?GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@@Z @ 0x18000BB20 (-GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAUDIO_EFF.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXXZ @ 0x18004A8FC (-_Tidy@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x180073F40 (-_Xlength@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     ?_Buy_raw@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800DD8B8 (-_Buy_raw@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$emplace_back@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA?A_TAEBU_GUID@@@Z @ 0x1800EAF68 (--$emplace_back@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA-A_TAEBU_GUID@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::CompareEffectTogglesProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  unsigned __int64 v6; // rdx
  const void *v7; // rdx
  size_t v8; // rsi
  char *v9; // rdi
  char *v10; // rsi
  _OWORD *v11; // r14
  _OWORD *i; // rbx
  const char *v13; // r9
  __int64 result; // rax
  int EffectsFromMFXInstantiatedForDiscovery; // eax
  unsigned int v16; // ebx
  void *v17; // r9
  __int64 j; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *k; // rax
  __int64 v22; // rcx
  _QWORD *m; // rcx
  __int64 v24; // rdx
  void *v25[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int128 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+50h] [rbp-48h]
  __int128 v29; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    *(_DWORD *)a3 = 1;
    *(_OWORD *)v25 = 0LL;
    v26 = 0LL;
    v6 = (__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 4;
    if ( v6 )
    {
      if ( v6 > 0xFFFFFFFFFFFFFFFLL )
        std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Xlength();
      std::vector<_GUID>::_Buy_raw(v25, v6);
      v7 = (const void *)*((_QWORD *)this + 34);
      v8 = *((_QWORD *)this + 35) - (_QWORD)v7;
      v9 = (char *)v25[0];
      memmove_0(v25[0], v7, v8);
      v10 = &v9[v8 & 0xFFFFFFFFFFFFFFF0uLL];
      v25[1] = v10;
    }
    else
    {
      v10 = (char *)v25[1];
      v9 = (char *)v25[0];
    }
    v11 = (_OWORD *)*((_QWORD *)a2 + 1);
    for ( i = *(_OWORD **)a2; i != v11; ++i )
    {
      std::vector<_GUID>::emplace_back<_GUID const &>((__int64)v25, i);
      v10 = (char *)v25[1];
      v9 = (char *)v25[0];
    }
    if ( v9 == v10 )
    {
LABEL_11:
      std::vector<_GUID>::_Tidy((__int64)v25);
      return 0LL;
    }
    v27 = 0LL;
    v28 = 0LL;
    EffectsFromMFXInstantiatedForDiscovery = CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery(
                                               (__int64)this + 8,
                                               (__int64 *)&v27);
    v16 = EffectsFromMFXInstantiatedForDiscovery;
    if ( EffectsFromMFXInstantiatedForDiscovery >= 0 )
    {
      v17 = (void *)v27;
      while ( v9 != v10 )
      {
        v29 = *(_OWORD *)v9;
        for ( j = v27; j != *((_QWORD *)&v27 + 1); j += 24LL )
        {
          v19 = *(_QWORD *)j - v29;
          if ( *(_QWORD *)j == (_QWORD)v29 )
            v19 = *(_QWORD *)(j + 8) - *((_QWORD *)&v29 + 1);
          if ( !v19 )
            break;
        }
        if ( j != *((_QWORD *)&v27 + 1) && *(_DWORD *)(j + 16) && *(_DWORD *)(j + 20) == 1 )
        {
          v20 = (_QWORD *)*((_QWORD *)this + 35);
          for ( k = (_QWORD *)*((_QWORD *)this + 34); k != v20; k += 2 )
          {
            v22 = *k - v29;
            if ( *k == (_QWORD)v29 )
              v22 = k[1] - *((_QWORD *)&v29 + 1);
            if ( !v22 )
              break;
          }
          for ( m = *(_QWORD **)a2; m != *((_QWORD **)a2 + 1); m += 2 )
          {
            v24 = *m - v29;
            if ( *m == (_QWORD)v29 )
              v24 = m[1] - *((_QWORD *)&v29 + 1);
            if ( !v24 )
              break;
          }
          if ( (k == v20) != (m == *((_QWORD **)a2 + 1)) )
          {
            *(_DWORD *)a3 = 0;
            if ( v17 )
              std::_Deallocate<16,0>(v17, 8 * ((v28 - (__int64)v17) >> 3));
            goto LABEL_11;
          }
        }
        v9 += 16;
      }
      if ( (_QWORD)v27 )
        std::_Deallocate<16,0>((void *)v27, 8 * ((v28 - (__int64)v27) >> 3));
      goto LABEL_11;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x729,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)EffectsFromMFXInstantiatedForDiscovery);
    if ( (_QWORD)v27 )
      std::_Deallocate<16,0>((void *)v27, 8 * ((v28 - (__int64)v27) >> 3));
    std::vector<_GUID>::_Tidy((__int64)v25);
    result = v16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x73F,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v13);
  }
  return result;
}
