/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001360C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800321D8 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mm.c)
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HHPEAUIDuckingController@@PEAH@Z @ 0x1800324AC (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV-$shared_ptr@VDuckin.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x180038808 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F20 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000DFA0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA?AV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@0@XZ @ 0x180031F24 (--$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA-AV-$unique_ptr@VCStreamClassPolicyGains.c)
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x1800320B4 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800321A8 (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        CStreamClassPolicyGainsWrapper *this,
        unsigned __int16 *a2,
        struct CStreamClassPolicyGains **a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 i; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  const char *v22; // r9
  char v23[8]; // [rsp+20h] [rbp-78h] BYREF
  void *v24[2]; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-60h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h]
  void *v27[2]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]
  unsigned __int64 v29; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v24[0] = 0LL;
  v25 = 0LL;
  v26 = 7LL;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  try
  {
    if ( v7 > 7 )
    {
      std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        v24,
        v7,
        (__int64)a3,
        a2);
    }
    else
    {
      v25 = v7;
      v8 = 2 * v7;
      memmove_0(v24, a2, 2 * v7);
      *(_WORD *)((char *)v24 + v8) = 0;
    }
    v9 = (__int64)v24;
    if ( v26 >= 8 )
      v9 = (__int64)v24[0];
    v10 = 0xCBF29CE484222325uLL;
    v11 = 2 * v25;
    for ( i = 0LL; i < v11; ++i )
      v10 = 0x100000001B3LL * (*(unsigned __int8 *)(i + v9) ^ (unsigned __int64)v10);
    v13 = *((_QWORD *)this + 3);
    v14 = *(_QWORD **)(v13 + 16 * (v10 & *((_QWORD *)this + 6)) + 8);
    if ( v14 != *((_QWORD **)this + 1) )
    {
      v11 = *(_QWORD *)(v13 + 16 * (v10 & *((_QWORD *)this + 6)));
      while ( 1 )
      {
        v15 = (unsigned __int16 *)(v14 + 2);
        if ( v14[5] >= 8uLL )
          v15 = *(unsigned __int16 **)v15;
        v10 = (__int64)v24;
        if ( v26 >= 8 )
          v10 = (__int64)v24[0];
        if ( v25 == v14[4] )
        {
          v16 = v25;
          if ( !v25 )
            goto LABEL_26;
          v10 -= (__int64)v15;
          while ( 1 )
          {
            v9 = *v15;
            if ( *(unsigned __int16 *)((char *)v15 + v10) < (unsigned __int16)v9
              || *(unsigned __int16 *)((char *)v15 + v10) > (unsigned __int16)v9 )
            {
              break;
            }
            if ( v16 == 1 )
              goto LABEL_26;
            --v16;
            ++v15;
          }
        }
        if ( v14 == (_QWORD *)v11 )
          break;
        v14 = (_QWORD *)v14[1];
      }
    }
    v14 = 0LL;
LABEL_26:
    if ( !v14 )
      v14 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v26 >= 8 )
      std::_Deallocate<16,0>(v24[0], 2 * v26 + 2);
    if ( v14 == *((_QWORD **)this + 1) )
    {
      v17 = (__int64 *)std::make_unique<CStreamClassPolicyGains,,0>(v23, v10, v9, v11);
      std::wstring::wstring(v27, a2, v18);
      v19 = (__int64 *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Try_emplace<std::wstring,>(
                                     (float *)this,
                                     (__int64)v24,
                                     v27)
                      + 48LL);
      if ( v19 != v17 )
      {
        v20 = *v17;
        *v17 = 0LL;
        v21 = *v19;
        *v19 = v20;
        if ( v21 )
          std::default_delete<CStreamClassPolicyGains>::operator()();
      }
      std::wstring::~wstring(v27);
      std::unique_ptr<CStreamClassPolicyGains>::~unique_ptr<CStreamClassPolicyGains>(v23);
    }
    v27[0] = 0LL;
    v28 = 0LL;
    v29 = 7LL;
    do
      ++v6;
    while ( a2[v6] );
    if ( v6 > 7 )
    {
      std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v27, v6, v9, a2);
    }
    else
    {
      v28 = v6;
      memmove_0(v27, a2, 2 * v6);
      *((_WORD *)v27 + v6) = 0;
    }
    *a3 = *(struct CStreamClassPolicyGains **)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Try_emplace<std::wstring,>(
                                                            (float *)this,
                                                            (__int64)v24,
                                                            v27)
                                             + 48LL);
    if ( v29 >= 8 )
      std::_Deallocate<16,0>(v27[0], 2 * v29 + 2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      v22);
  }
}
