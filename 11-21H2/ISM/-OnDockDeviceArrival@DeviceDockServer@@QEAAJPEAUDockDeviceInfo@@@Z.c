/*
 * XREFs of ?OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017D6C8
 * Callers:
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801BA9C4 (-Initialize@DockProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017BE1C (--$_Emplace@AEAKAEAV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$_.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18017C348 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_.c)
 *     ??0BamoDockDevicePrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18017C870 (--0BamoDockDevicePrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeviceDockServer::OnDockDeviceArrival(DeviceDockServer *this, struct DockDeviceInfo *a2)
{
  __int64 *v4; // rdi
  const char *v5; // r9
  unsigned int v6; // r10d
  BamoDockDevicePrincipal *v8; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rax
  void (__fastcall ***v10)(_QWORD); // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 i; // rbx
  int v14; // eax
  _BYTE v16[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  BamoDockDevicePrincipal *v19; // [rsp+60h] [rbp+8h] BYREF
  BamoDockDevicePrincipal *v20; // [rsp+68h] [rbp+10h]

  v4 = (__int64 *)((char *)this + 104);
  LODWORD(v19) = *(_DWORD *)a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 13,
    (__int64)v16,
    (unsigned int *)&v19);
  if ( !*(_BYTE *)(v17 + 25) && v6 >= *(_DWORD *)(v17 + 32) && v17 != *v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      88LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v5);
  v19 = 0LL;
  v8 = (BamoDockDevicePrincipal *)operator new(0x58uLL);
  v20 = v8;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v19 = BamoDockDevicePrincipal::BamoDockDevicePrincipal(v8, BamoServerConnection);
  v10 = (void (__fastcall ***)(_QWORD))((char *)v19 + 8);
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)v19 + 1) + 32LL))((char *)v19 + 8, (char *)a2 + 1548);
  LOBYTE(v11) = *((_BYTE *)a2 + 1663);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), __int64))(*v10)[6])(v10, v11);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), char *))(*v10)[8])(v10, (char *)a2 + 1668);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Emplace<unsigned long &,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy> &>(
    v4,
    (__int64)v16,
    a2,
    (void (__fastcall ****)(_QWORD))&v19);
  v12 = *((_QWORD *)this + 8);
  for ( i = *((_QWORD *)this + 7); i != v12; i += 8LL )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoDockDevicePrincipal *))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 24LL))(
            *(_QWORD *)i + 8LL,
            *(unsigned int *)a2,
            v19);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        104LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v14);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v19);
  return 0LL;
}
