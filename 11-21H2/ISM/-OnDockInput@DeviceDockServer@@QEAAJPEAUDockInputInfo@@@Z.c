/*
 * XREFs of ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017D9DC
 * Callers:
 *     ?OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BAB00 (-OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18007E5EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18017BF08 (--$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Uta.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18017C348 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_.c)
 *     ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x18017C398 (--$_Find_lower_bound@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@.c)
 *     ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x18017C408 (--$_Lower_bound_duplicate@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$.c)
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x18017C440 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UDockInputInfo@@U-$less@UDo.c)
 *     ?ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z @ 0x18017F298 (-ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x180180418 (-erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIdentity@@@std@@V.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x18019EA44 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x18019EAD4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x18019ED2C (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18019EE70 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeviceDockServer::OnDockInput(DeviceDockServer *this, struct DockInputInfo *a2)
{
  const char *v4; // r9
  __int64 *v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rbx
  void (__fastcall ***v8)(_QWORD); // rbx
  void (__fastcall ***v9)(_QWORD); // rbx
  _OWORD *v10; // rdi
  int v11; // r15d
  int v12; // r12d
  __int64 *v13; // r13
  __int64 v14; // rcx
  _DWORD *v15; // r10
  size_t *v16; // rax
  HRESULT v17; // eax
  struct DisplayOcclusionContextProvider *Instance; // rax
  struct DisplayOcclusionContextProvider *v19; // rbx
  int v20; // eax
  unsigned int v21; // edi
  bool v22; // cl
  bool v23; // zf
  bool v24; // zf
  struct DisplayOcclusionContextProvider *v25; // rax
  struct DisplayOcclusionContextProvider *v26; // rbx
  int v27; // eax
  struct DisplayOcclusionContextProvider *v28; // rax
  struct DisplayOcclusionContextProvider *v29; // rbx
  int v30; // eax
  __int128 v31; // xmm7
  __int128 v32; // xmm8
  __int128 v33; // xmm9
  __int128 v34; // xmm10
  __int128 v35; // xmm11
  __int64 v36; // xmm6_8
  DeviceDockServer *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 i; // rbx
  int v42; // eax
  int v43; // eax
  int v45[2]; // [rsp+28h] [rbp-E0h] BYREF
  struct DisplayOcclusionContextProvider *v46; // [rsp+30h] [rbp-D8h]
  struct DisplayOcclusionContextProvider *v47; // [rsp+38h] [rbp-D0h]
  DeviceDockServer *v48; // [rsp+40h] [rbp-C8h]
  void (__fastcall ***v49)(_QWORD); // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v50[16]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v51[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h]
  _BYTE v53[16]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h]
  _BYTE v55[24]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v56[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int16 v57[60]; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v48 = this;
  InputTraceLogging::DeviceDock::ServerReceiveInput(a2);
  v45[0] = *((_DWORD *)a2 + 1);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 13,
    (__int64)v51,
    (unsigned int *)v45);
  v7 = v52;
  if ( *(_BYTE *)(v52 + 25) || v6 < *(_DWORD *)(v52 + 32) )
    v7 = *v5;
  if ( v7 == *v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      152LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v4);
  v8 = *(void (__fastcall ****)(_QWORD))(v7 + 40);
  v49 = v8;
  if ( v8 )
    (**v8)(v8);
  v9 = v8 + 1;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD))(*v9)[5])(v9) )
    goto LABEL_57;
  v10 = (_OWORD *)((char *)a2 + 68);
  v11 = *((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17);
  v12 = *((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18);
  v13 = (__int64 *)((char *)this + 136);
  std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
    v13,
    (__int64)v53,
    (int *)a2 + 8);
  if ( !std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
          v14,
          v54,
          (__int64)a2 + 32) )
    v15 = (_DWORD *)*v13;
  if ( v15 == (_DWORD *)*v13 )
  {
    if ( *((_BYTE *)a2 + 64) && v11 > 0 && v12 > 0 )
    {
      memset_0(v55, 0, 0xB0uLL);
      v56[0] = *v10;
      v56[1] = *(_OWORD *)((__int64 (__fastcall *)(_QWORD))(*v9)[7])(v9);
      v16 = (size_t *)((__int64 (__fastcall *)(_QWORD))(*v9)[3])(v9);
      v17 = StringCchCopyW(v57, 0x39uLL, v16);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB3,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
          (const char *)(unsigned int)v17,
          v45[0]);
      std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Emplace<DockInputIdentity const &,tagRECT &>(
        v13,
        (__int64)v50,
        (__int64)a2 + 32,
        v56);
      Instance = DisplayOcclusionContextProvider::GetInstance();
      v19 = Instance;
      v46 = Instance;
      if ( Instance )
      {
        _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
        v19 = v46;
      }
      v20 = DisplayOcclusionContextProvider::OnOcclusionRectAdded(
              v19,
              (struct DockInputInfo *)((char *)a2 + 32),
              (const struct DisplayOcclusionRect *)v55);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBB,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
          (const char *)(unsigned int)v20);
        if ( v19 )
          RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v19 + 8));
        goto LABEL_67;
      }
      if ( v19 )
        RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v19 + 8));
    }
    goto LABEL_57;
  }
  v22 = v15[14] != *(_DWORD *)v10
     || v15[15] != *((_DWORD *)a2 + 18)
     || v15[16] != *((_DWORD *)a2 + 19)
     || v15[17] != *((_DWORD *)a2 + 20);
  if ( *((_BYTE *)a2 + 64) )
  {
    v23 = v11 == 0;
    if ( v11 <= 0 )
    {
LABEL_46:
      if ( v23 )
        goto LABEL_49;
      v24 = v12 == 0;
LABEL_48:
      if ( v24 )
        goto LABEL_49;
LABEL_57:
      v31 = *(_OWORD *)a2;
      v32 = *((_OWORD *)a2 + 1);
      v33 = *((_OWORD *)a2 + 2);
      v34 = *((_OWORD *)a2 + 3);
      v35 = *((_OWORD *)a2 + 4);
      v36 = *((_QWORD *)a2 + 10);
      v37 = v48;
      v38 = *(_QWORD *)std::map<DockInputIdentity,DockInputInfo>::_Try_emplace<DockInputIdentity const &,>(
                         (__int64 *)v48 + 15,
                         (__int64)v50,
                         (unsigned int *)a2 + 8);
      *(_OWORD *)(v38 + 56) = v31;
      *(_OWORD *)(v38 + 72) = v32;
      *(_OWORD *)(v38 + 88) = v33;
      *(_OWORD *)(v38 + 104) = v34;
      *(_OWORD *)(v38 + 120) = v35;
      *(_QWORD *)(v38 + 136) = v36;
      v39 = *((_QWORD *)v37 + 10);
      if ( v39 )
      {
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DockInputInfo *))(*(_QWORD *)(v39 + 8) + 40LL))(
                v39 + 8,
                *((unsigned int *)a2 + 1),
                a2);
        if ( v43 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            242LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
            (const char *)(unsigned int)v43);
      }
      else
      {
        v40 = *((_QWORD *)v37 + 8);
        for ( i = *((_QWORD *)v37 + 7); i != v40; i += 8LL )
        {
          v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DockInputInfo *))(*(_QWORD *)(*(_QWORD *)i + 8LL)
                                                                                   + 40LL))(
                  *(_QWORD *)i + 8LL,
                  *((unsigned int *)a2 + 1),
                  a2);
          if ( v42 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              248LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
              (const char *)(unsigned int)v42);
        }
      }
      v21 = 0;
      goto LABEL_67;
    }
    v24 = v12 == 0;
    if ( v12 <= 0 )
      goto LABEL_48;
    if ( !v22 )
      goto LABEL_57;
    *(_OWORD *)(v15 + 14) = *v10;
    v25 = DisplayOcclusionContextProvider::GetInstance();
    v26 = v25;
    v46 = v25;
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v25 + 4);
      v26 = v46;
    }
    v27 = DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
            v26,
            (struct DockInputInfo *)((char *)a2 + 32),
            (const struct tagRECT *)((char *)a2 + 68));
    v21 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v27);
      if ( v26 )
        RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v26 + 8));
      goto LABEL_67;
    }
    if ( v26 )
      RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v26 + 8));
    if ( *((_BYTE *)a2 + 64) )
    {
      v23 = v11 == 0;
      goto LABEL_46;
    }
  }
LABEL_49:
  std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::erase(
    v13,
    (char *)a2 + 32);
  v28 = DisplayOcclusionContextProvider::GetInstance();
  v29 = v28;
  v47 = v28;
  if ( v28 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v28 + 4);
    v29 = v47;
  }
  v30 = DisplayOcclusionContextProvider::OnOcclusionRectRemoved(v29, (struct DockInputInfo *)((char *)a2 + 32));
  v21 = v30;
  if ( v30 >= 0 )
  {
    if ( v29 )
      RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v29 + 8));
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE7,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
    (const char *)(unsigned int)v30);
  if ( v29 )
    RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v29 + 8));
LABEL_67:
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v49);
  return v21;
}
