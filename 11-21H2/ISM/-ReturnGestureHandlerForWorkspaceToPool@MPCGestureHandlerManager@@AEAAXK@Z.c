/*
 * XREFs of ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800928B8
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180091F3C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180091710 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180091978 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180091A18 (--$_Try_emplace@AEBK$$V@-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180093028 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandlerManager::ReturnGestureHandlerForWorkspaceToPool(
        MPCGestureHandlerManager *this,
        unsigned int a2)
{
  __int64 *v3; // rbx
  const char *v4; // r9
  unsigned int v5; // r10d
  const char *v7; // r9
  __int64 *v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (__int64 *)((char *)this + 8);
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 1,
    (__int64)v11,
    &v14);
  if ( *(_BYTE *)(v12 + 25) || v5 < *(_DWORD *)(v12 + 32) || v12 == *v3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      203LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v4);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
                                             v3,
                                             (__int64)v11,
                                             &v14)
                              + 40LL)
                  + 168LL) & 0xFFFFFF7F) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      205LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v7);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
                                       v3,
                                       (__int64)v11,
                                       &v14)
                        + 40LL)
            + 912LL) = 0;
  v8 = (__int64 *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
                                v3,
                                (__int64)v11,
                                &v14)
                 + 40LL);
  v9 = (__int64 *)*((_QWORD *)this + 6);
  if ( v9 == *((__int64 **)this + 7) )
  {
    std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
      (__int64 *)this + 5,
      (__int64)v9,
      v8);
  }
  else
  {
    v10 = *v8;
    *v9 = *v8;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)this + 6) += 8LL;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
    v3,
    &v14);
}
