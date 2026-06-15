/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180029F30 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18002EEF8 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180030BB0 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800025F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?8GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18000E9F8 (--$-8GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800294FC (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_1800294FC.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x1800297A8 (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x180029900 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        CStreamClassPolicyGainsWrapper *this,
        unsigned __int16 *a2,
        struct CStreamClassPolicyGains **a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  char **v8; // r8
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 i; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r14
  HANDLE ProcessHeap; // rax
  CStreamClassPolicyGains *v18; // rax
  CStreamClassPolicyGains *v19; // rbx
  CStreamClassPolicyGains *v20; // rbx
  unsigned __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // r14
  const char *v24; // r9
  CStreamClassPolicyGains *v25; // [rsp+20h] [rbp-88h] BYREF
  char *v26[2]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v27; // [rsp+38h] [rbp-70h]
  unsigned __int64 v28; // [rsp+40h] [rbp-68h]
  char *v29[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v30 = 0LL;
  v31 = 7LL;
  LOWORD(v29[0]) = 0;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  try
  {
    std::wstring::assign(v29, a2, v7);
    v8 = v29;
    v9 = v31;
    if ( v31 >= 8 )
      v8 = (char **)v29[0];
    v10 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 2 * v30; ++i )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)v8 + i) ^ (unsigned __int64)v10);
    v12 = 2 * (v10 & *((_QWORD *)this + 6));
    v13 = *((_QWORD *)this + 3);
    v14 = *(_QWORD *)(v13 + 16 * (v10 & *((_QWORD *)this + 6)) + 8);
    v15 = *((_QWORD *)this + 1);
    if ( v14 != v15 )
    {
      v16 = *(_QWORD *)(v13 + 8 * v12);
      while ( !std::operator==<unsigned short>((char *)v29, (_QWORD *)(v14 + 16)) )
      {
        if ( v14 == v16 )
          goto LABEL_14;
        v14 = *(_QWORD *)(v14 + 8);
      }
      if ( v14 )
        goto LABEL_16;
LABEL_14:
      v15 = *((_QWORD *)this + 1);
    }
    v14 = v15;
LABEL_16:
    if ( v9 >= 8 )
      std::_Deallocate<16,0>(v29[0], 2 * v9 + 2);
    if ( v14 == *((_QWORD *)this + 1) )
    {
      ProcessHeap = GetProcessHeap();
      v18 = (CStreamClassPolicyGains *)HeapAlloc(ProcessHeap, 0, 0x1A8uLL);
      v19 = v18;
      if ( v18 )
      {
        memset_0(v18, 0, 0x1A8uLL);
        v20 = CStreamClassPolicyGains::CStreamClassPolicyGains(v19);
      }
      else
      {
        v20 = 0LL;
      }
      v25 = v20;
      v27 = 0LL;
      v28 = 7LL;
      LOWORD(v26[0]) = 0;
      v21 = -1LL;
      do
        ++v21;
      while ( a2[v21] );
      std::wstring::assign(v26, a2, v21);
      v22 = (__int64 *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Try_emplace<std::wstring,>(
                                     (__int64)this,
                                     (__int64)v29,
                                     (char *)v26)
                      + 48LL);
      if ( v22 != (__int64 *)&v25 )
      {
        v25 = 0LL;
        v23 = *v22;
        *v22 = (__int64)v20;
        if ( v23 )
        {
          `eh vector destructor iterator'(
            (char *)(v23 + 232),
            8LL,
            24LL,
            (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
          `eh vector destructor iterator'(
            (char *)(v23 + 40),
            8LL,
            24LL,
            (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
          DeleteCriticalSection((LPCRITICAL_SECTION)v23);
          operator delete((void *)v23);
        }
      }
      if ( v28 >= 8 )
        std::_Deallocate<16,0>(v26[0], 2 * v28 + 2);
      v27 = 0LL;
      v28 = 7LL;
      LOWORD(v26[0]) = 0;
      std::unique_ptr<CStreamClassPolicyGains>::~unique_ptr<CStreamClassPolicyGains>((__int64 *)&v25);
    }
    v27 = 0LL;
    v28 = 7LL;
    LOWORD(v26[0]) = 0;
    do
      ++v6;
    while ( a2[v6] );
    std::wstring::assign(v26, a2, v6);
    *a3 = *(struct CStreamClassPolicyGains **)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::_Try_emplace<std::wstring,>(
                                                            (__int64)this,
                                                            (__int64)v29,
                                                            (char *)v26)
                                             + 48LL);
    if ( v28 >= 8 )
      std::_Deallocate<16,0>(v26[0], 2 * v28 + 2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6B,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      v24);
  }
}
