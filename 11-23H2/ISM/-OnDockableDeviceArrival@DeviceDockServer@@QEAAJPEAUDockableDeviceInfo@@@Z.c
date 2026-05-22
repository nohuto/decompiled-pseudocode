/*
 * XREFs of ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18019D0E0
 * Callers:
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800E3E04 (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18019B188 (--$_Emplace@AEAKAEAV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$_.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18019B6BC (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_.c)
 *     ??0BamoDockableDevicePrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18019BB80 (--0BamoDockableDevicePrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeviceDockServer::OnDockableDeviceArrival(DeviceDockServer *this, struct DockableDeviceInfo *a2)
{
  __int64 *v4; // rsi
  const char *v5; // r9
  unsigned int v6; // r10d
  BamoDockableDevicePrincipal *v8; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rax
  void (__fastcall ***v10)(_QWORD); // rbx
  __int64 v11; // rsi
  __int64 i; // rbx
  int v13; // eax
  _BYTE v15[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  BamoDockableDevicePrincipal *v18; // [rsp+60h] [rbp+8h] BYREF
  BamoDockableDevicePrincipal *v19; // [rsp+68h] [rbp+10h]

  v4 = (__int64 *)((char *)this + 88);
  LODWORD(v18) = *(_DWORD *)a2;
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 11,
    (__int64)v15,
    (unsigned int *)&v18);
  if ( !*(_BYTE *)(v16 + 25) && v6 >= *(_DWORD *)(v16 + 32) && v16 != *v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x102,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v5);
  v18 = 0LL;
  v8 = (BamoDockableDevicePrincipal *)operator new(0x58uLL);
  v19 = v8;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v18 = BamoDockableDevicePrincipal::BamoDockableDevicePrincipal(v8, BamoServerConnection);
  v10 = (void (__fastcall ***)(_QWORD))((char *)v18 + 8);
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)v18 + 1) + 32LL))((char *)v18 + 8, (char *)a2 + 76);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), char *))(*v10)[6])(v10, (char *)a2 + 1552);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD))(*v10)[8])(v10, *((unsigned int *)a2 + 392));
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD))(*v10)[10])(v10, *((unsigned __int16 *)a2 + 786));
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD))(*v10)[12])(v10, *((unsigned __int16 *)a2 + 787));
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Emplace<unsigned long &,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy> &>(
    v4,
    (__int64)v15,
    a2,
    (void (__fastcall ****)(_QWORD))&v18);
  v11 = *((_QWORD *)this + 8);
  for ( i = *((_QWORD *)this + 7); i != v11; i += 8LL )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoDockableDevicePrincipal *))(*(_QWORD *)(*(_QWORD *)i + 8LL)
                                                                                    + 48LL))(
            *(_QWORD *)i + 8LL,
            *(unsigned int *)a2,
            v18);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        276LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v13);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v18);
  return 0LL;
}
