/*
 * XREFs of _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x18008F614
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run @ 0x18008F4F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800606DC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800607A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??$_Emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x18008F518 (--$_Emplace@AEAKAEAUDisplayRegionInfo@@@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@s.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18008FABC (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ??$?0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z @ 0x18008FB10 (--$-0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z.c)
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x18008FF6C (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator()(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rsi
  int v5; // eax
  _QWORD *v6; // r12
  int v7; // eax
  __int64 *v8; // rbx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rsi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  _DWORD *v15; // rdx
  int v16; // eax
  int v17; // eax
  WindowingEnvironmentConfig *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, _QWORD, __int64 *); // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  int v33; // [rsp+20h] [rbp-288h]
  __int64 *v34; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-270h] BYREF
  __int64 v36[2]; // [rsp+40h] [rbp-268h] BYREF
  __int128 v37; // [rsp+50h] [rbp-258h] BYREF
  __int64 v38; // [rsp+60h] [rbp-248h]
  HMONITOR v39; // [rsp+70h] [rbp-238h] BYREF
  __int128 v40; // [rsp+78h] [rbp-230h]
  __int64 v41; // [rsp+88h] [rbp-220h]
  int v42; // [rsp+90h] [rbp-218h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-210h] BYREF
  int v44; // [rsp+B0h] [rbp-1F8h]
  DISPLAYCONFIG_TARGET_DEVICE_NAME v45; // [rsp+C0h] [rbp-1E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  v34 = 0LL;
  v36[0] = 0LL;
  v2 = *a1;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 80) + 32LL))(*(_QWORD *)(*a1 + 80));
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL);
  v36[0] = 0LL;
  v5 = v4(v3, v36);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBB,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v5,
      v33);
  v35 = 0;
  v6 = (_QWORD *)a1[1];
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v6 + 24LL))(*v6, &v35);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v7,
      v33);
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
    v2 + 104,
    &v37,
    &v35);
  v8 = (__int64 *)v38;
  if ( *(_BYTE *)(v38 + 25) || v35 < *(_DWORD *)(v38 + 28) || v38 == *(_QWORD *)(v2 + 104) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 80) + 40LL))(*(_QWORD *)(v2 + 80));
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL);
    v34 = 0LL;
    v11 = v10(v9, (__int64 *)&v34);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC3,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v11,
        v33);
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v34 + 64))(v34, &v37);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC6,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v12,
        v33);
    hstringHeader.Reserved.Reserved1 = (PVOID)__PAIR64__(v35, v37);
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)a1[2];
    LOBYTE(v44) = *(_DWORD *)a1[3] != 0;
    v40 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
    v41 = *(_OWORD *)&_mm_unpackhi_pd(
                        *(__m128d *)&hstringHeader.Reserved.Reserved2[8],
                        *(__m128d *)&hstringHeader.Reserved.Reserved2[8]);
    v42 = v44;
  }
  else
  {
    v40 = *(_OWORD *)(v38 + 32);
    v41 = *(_QWORD *)(v38 + 48);
    v42 = *(_DWORD *)(v38 + 56);
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 80) + 40LL))(*(_QWORD *)(v2 + 80));
    v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 56LL);
    v34 = 0LL;
    v28 = v27(v26, (unsigned int)v40, (__int64 *)&v34);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCD,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v28,
        v33);
    *(_QWORD *)&v37 = v8;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v37,
      v29,
      v30,
      v31);
    v32 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
            (_QWORD *)(v2 + 104),
            v8);
    std::_Deallocate<16,0>(v32, 64LL);
  }
  v13 = *v34;
  v37 = *(_OWORD *)a1[4];
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v13 + 104))(v34, &v37);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD1,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v14,
      v33);
  v15 = (_DWORD *)a1[3];
  LOBYTE(v15) = *v15 != 0;
  v16 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v34 + 112))(v34, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v16,
      v33);
  v39 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(*(_QWORD *)*v6 + 40LL))(*v6, &v39);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v17,
      v33);
  memset_0(&v45, 0, sizeof(v45));
  if ( WindowingEnvironmentConfig::GetTargetDeviceName(v18, v39, &v45) >= 0 )
  {
    v19 = (__int64)v34;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*v34 + 168);
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v45.monitorDevicePath);
    v22 = v20(v19, *(_QWORD *)(v21 + 24), 0LL, 0LL);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v22,
        v33);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v2 + 64) + 96LL))(*(_QWORD *)(v2 + 64), v34);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDE,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v23,
      v33);
  v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36[0] + 56LL))(v36[0]);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE0,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v24,
      v33);
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Emplace<unsigned long &,DisplayRegionInfo &>(
    (_QWORD *)(v2 + 104),
    (__int64)&v37,
    (__int64)&v35);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v36);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
  return 0LL;
}
