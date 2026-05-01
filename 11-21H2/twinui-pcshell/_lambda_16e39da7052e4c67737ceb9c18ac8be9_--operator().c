/*
 * XREFs of _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180109928
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run @ 0x180109900 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002E9AC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002EA80 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??$_Emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x180109DDC (--$_Emplace@AEAKAEAUDisplayRegionInfo@@@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@s.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18010A048 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ??$?0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z @ 0x18010A098 (--$-0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z.c)
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x18010A160 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  _DWORD *v17; // rdx
  int v18; // eax
  int v19; // eax
  WindowingEnvironmentConfig *v20; // rcx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v28; // r14
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64 *); // r15
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  int v35; // [rsp+20h] [rbp-288h]
  __int64 *v36; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-270h] BYREF
  __int64 v38[2]; // [rsp+40h] [rbp-268h] BYREF
  __int128 v39; // [rsp+50h] [rbp-258h] BYREF
  __int64 v40; // [rsp+60h] [rbp-248h]
  HMONITOR v41; // [rsp+70h] [rbp-238h] BYREF
  __int128 v42; // [rsp+78h] [rbp-230h] BYREF
  __int64 v43; // [rsp+88h] [rbp-220h]
  int v44; // [rsp+90h] [rbp-218h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-210h] BYREF
  int v46; // [rsp+B0h] [rbp-1F8h]
  DISPLAYCONFIG_TARGET_DEVICE_NAME v47; // [rsp+C0h] [rbp-1E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  v36 = 0LL;
  v38[0] = 0LL;
  v2 = *a1;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 80) + 32LL))(*(_QWORD *)(*a1 + 80));
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL);
  v38[0] = 0LL;
  v5 = v4(v3, v38);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBB,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v5,
      v35);
  v37 = 0;
  v6 = (_QWORD *)a1[1];
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v6 + 24LL))(*v6, &v37);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v7,
      v35);
  v8 = (__int64 *)(v2 + 104);
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
    v2 + 104,
    &v39,
    &v37);
  v9 = v40;
  if ( *(_BYTE *)(v40 + 25) || v37 < *(_DWORD *)(v40 + 28) )
    v9 = *v8;
  v10 = *(_QWORD *)(v2 + 80);
  if ( v9 == *v8 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL);
    v36 = 0LL;
    v13 = v12(v11, (__int64 *)&v36);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC3,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v13,
        v35);
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v36 + 64))(v36, &v39);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC6,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v14,
        v35);
    hstringHeader.Reserved.Reserved1 = (PVOID)__PAIR64__(v37, v39);
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)a1[2];
    LOBYTE(v46) = *(_DWORD *)a1[3] != 0;
    v42 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
    v43 = *(_OWORD *)&_mm_unpackhi_pd(
                        *(__m128d *)&hstringHeader.Reserved.Reserved2[8],
                        *(__m128d *)&hstringHeader.Reserved.Reserved2[8]);
    v44 = v46;
  }
  else
  {
    v42 = *(_OWORD *)(v9 + 32);
    v43 = *(_QWORD *)(v9 + 48);
    v44 = *(_DWORD *)(v9 + 56);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
    v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 56LL);
    v36 = 0LL;
    v30 = v29(v28, (unsigned int)v42, (__int64 *)&v36);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCD,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v30,
        v35);
    *(_QWORD *)&v39 = v9;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v39,
      v31,
      v32,
      v33);
    v34 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
            (__int64 **)(v2 + 104),
            v9);
    std::_Deallocate<16,0>(v34, 64LL);
  }
  v15 = *v36;
  v39 = *(_OWORD *)a1[4];
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v15 + 104))(v36, &v39);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD1,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v16,
      v35);
  v17 = (_DWORD *)a1[3];
  LOBYTE(v17) = *v17 != 0;
  v18 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v36 + 112))(v36, v17);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v18,
      v35);
  v41 = 0LL;
  v19 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(*(_QWORD *)*v6 + 40LL))(*v6, &v41);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v19,
      v35);
  memset_0(&v47, 0, sizeof(v47));
  if ( WindowingEnvironmentConfig::GetTargetDeviceName(v20, v41, &v47) >= 0 )
  {
    v21 = (__int64)v36;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*v36 + 168);
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v47.monitorDevicePath);
    v24 = v22(v21, *(_QWORD *)(v23 + 24), 0LL, 0LL);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v24,
        v35);
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v2 + 64) + 96LL))(*(_QWORD *)(v2 + 64), v36);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDE,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v25,
      v35);
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38[0] + 56LL))(v38[0]);
  if ( v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE0,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v26,
      v35);
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Emplace<unsigned long &,DisplayRegionInfo &>(
    v2 + 104,
    &v39,
    &v37,
    &v42);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v38);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v36);
  return 0LL;
}
