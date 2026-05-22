/*
 * XREFs of ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18019CB80
 * Callers:
 *     ?OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801D8E20 (-OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800957B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18019B274 (--$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Uta.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18019B6BC (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_.c)
 *     ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x18019B70C (--$_Find_lower_bound@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@.c)
 *     ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x18019B77C (--$_Lower_bound_duplicate@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$.c)
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x18019B7B4 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UDockInputInfo@@U-$less@UDo.c)
 *     ?ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z @ 0x18019E4AC (-ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x18019F5FC (-erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIdentity@@@std@@V.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801BCD64 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801BCDF4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801BD04C (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801BD190 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeviceDockServer::OnDockInput(DeviceDockServer *this, struct DockInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rax
  char v9; // cl
  wil::details::in1diag3 *v10; // r9
  void (__fastcall ***v11)(_QWORD, __int64, __int64, wil::details::in1diag3 *); // rbx
  void (__fastcall ***v12)(_QWORD, _QWORD, _QWORD, _QWORD); // rbx
  _OWORD *v13; // rsi
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rcx
  _DWORD *v17; // r10
  char *v18; // rcx
  bool v19; // al
  struct DisplayOcclusionContextProvider *v20; // rax
  struct DisplayOcclusionContextProvider *v21; // rbx
  int v22; // eax
  unsigned int v23; // esi
  struct DisplayOcclusionContextProvider *v24; // rax
  struct DisplayOcclusionContextProvider *v25; // rbx
  int v26; // eax
  size_t *v27; // rax
  HRESULT v28; // eax
  struct DisplayOcclusionContextProvider *Instance; // rax
  struct DisplayOcclusionContextProvider *v30; // rbx
  int v31; // eax
  __int128 v33; // xmm7
  __int128 v34; // xmm8
  __int128 v35; // xmm9
  __int128 v36; // xmm10
  __int128 v37; // xmm11
  __int64 v38; // xmm6_8
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 i; // rbx
  int v43; // eax
  int v44; // eax
  int v45[2]; // [rsp+28h] [rbp-E0h] BYREF
  struct DisplayOcclusionContextProvider *v46; // [rsp+30h] [rbp-D8h]
  void (__fastcall ***v47)(_QWORD, _QWORD, _QWORD, wil::details::in1diag3 *); // [rsp+38h] [rbp-D0h] BYREF
  struct DisplayOcclusionContextProvider *v48; // [rsp+40h] [rbp-C8h]
  _BYTE v49[16]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v50[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h]
  _BYTE v52[16]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v53; // [rsp+80h] [rbp-88h]
  _BYTE v54[24]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v55[2]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 v56[60]; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  InputTraceLogging::DeviceDock::ServerReceiveInput(a2);
  v45[0] = *((_DWORD *)a2 + 1);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 13,
    (__int64)v50,
    (unsigned int *)v45);
  v8 = v51;
  if ( *(_BYTE *)(v51 + 25) || v7 < *(_DWORD *)(v51 + 32) )
  {
    v8 = *v6;
  }
  else if ( v51 != *v6 )
  {
    v9 = 0;
    goto LABEL_7;
  }
  v9 = 1;
LABEL_7:
  v10 = retaddr;
  if ( v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x98,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      (const char *)retaddr);
  v11 = *(void (__fastcall ****)(_QWORD, __int64, __int64, wil::details::in1diag3 *))(v8 + 40);
  v47 = v11;
  if ( v11 )
    (**v11)(v11, v4, v5, retaddr);
  v12 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))(v11 + 1);
  if ( ((unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, wil::details::in1diag3 *))(*v12)[5])(v12, v4, v5, v10) )
  {
    v13 = (_OWORD *)((char *)a2 + 68);
    v14 = *((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17);
    v15 = *((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18);
    std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
      (__int64 *)this + 17,
      (__int64)v52,
      (int *)a2 + 8);
    if ( !std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
            v16,
            v53,
            (__int64)a2 + 32)
      || (v18 = (char *)this + 136, v17 == *((_DWORD **)this + 17)) )
    {
      if ( *((_BYTE *)a2 + 64) && v14 > 0 && v15 > 0 )
      {
        memset_0(v54, 0, 0xB0uLL);
        v55[0] = *v13;
        v55[1] = *(_OWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD)))(*v12)[7])(v12);
        v27 = (size_t *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD)))(*v12)[3])(v12);
        v28 = StringCchCopyW(v56, 0x39uLL, v27);
        if ( v28 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xB3,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
            (const char *)(unsigned int)v28,
            v45[0]);
        std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Emplace<DockInputIdentity const &,tagRECT &>(
          (__int64 *)this + 17,
          (__int64)v49,
          (__int64)a2 + 32,
          v55);
        Instance = DisplayOcclusionContextProvider::GetInstance();
        v30 = Instance;
        v46 = Instance;
        if ( Instance )
        {
          _InterlockedIncrement((volatile signed __int32 *)Instance + 4);
          v30 = v46;
        }
        v31 = DisplayOcclusionContextProvider::OnOcclusionRectAdded(
                v30,
                (struct DockInputInfo *)((char *)a2 + 32),
                (const struct DisplayOcclusionRect *)v54);
        v23 = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
            (const char *)(unsigned int)v31);
          if ( v30 )
            RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v30 + 8));
          goto LABEL_55;
        }
        if ( v30 )
          RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v30 + 8));
      }
    }
    else
    {
      v19 = v17[14] != *(_DWORD *)v13
         || v17[15] != *((_DWORD *)a2 + 18)
         || v17[16] != *((_DWORD *)a2 + 19)
         || v17[17] != *((_DWORD *)a2 + 20);
      if ( !*((_BYTE *)a2 + 64) )
        goto LABEL_36;
      if ( v14 > 0 && v15 > 0 && v19 )
      {
        *(_OWORD *)(v17 + 14) = *v13;
        v20 = DisplayOcclusionContextProvider::GetInstance();
        v21 = v20;
        v46 = v20;
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v20 + 4);
          v21 = v46;
        }
        v22 = DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
                v21,
                (struct DockInputInfo *)((char *)a2 + 32),
                (const struct tagRECT *)((char *)a2 + 68));
        v23 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
            (const char *)(unsigned int)v22);
          if ( v21 )
            RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v21 + 8));
LABEL_55:
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v47);
          return v23;
        }
        if ( v21 )
          RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v21 + 8));
        v18 = (char *)this + 136;
      }
      if ( !*((_BYTE *)a2 + 64) || !v14 || !v15 )
      {
LABEL_36:
        std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::erase(
          v18,
          (char *)a2 + 32);
        v24 = DisplayOcclusionContextProvider::GetInstance();
        v25 = v24;
        v48 = v24;
        if ( v24 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v24 + 4);
          v25 = v48;
        }
        v26 = DisplayOcclusionContextProvider::OnOcclusionRectRemoved(v25, (struct DockInputInfo *)((char *)a2 + 32));
        v23 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
            (const char *)(unsigned int)v26);
          if ( v25 )
            RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v25 + 8));
          goto LABEL_55;
        }
        if ( v25 )
          RefCountedObject::Release((struct DisplayOcclusionContextProvider *)((char *)v25 + 8));
      }
    }
  }
  v33 = *(_OWORD *)a2;
  v34 = *((_OWORD *)a2 + 1);
  v35 = *((_OWORD *)a2 + 2);
  v36 = *((_OWORD *)a2 + 3);
  v37 = *((_OWORD *)a2 + 4);
  v38 = *((_QWORD *)a2 + 10);
  v39 = *(_QWORD *)std::map<DockInputIdentity,DockInputInfo>::_Try_emplace<DockInputIdentity const &,>(
                     (__int64 *)this + 15,
                     (__int64)v49,
                     (unsigned int *)a2 + 8);
  *(_OWORD *)(v39 + 56) = v33;
  *(_OWORD *)(v39 + 72) = v34;
  *(_OWORD *)(v39 + 88) = v35;
  *(_OWORD *)(v39 + 104) = v36;
  *(_OWORD *)(v39 + 120) = v37;
  *(_QWORD *)(v39 + 136) = v38;
  v40 = *((_QWORD *)this + 10);
  if ( v40 )
  {
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DockInputInfo *))(*(_QWORD *)(v40 + 8) + 40LL))(
            v40 + 8,
            *((unsigned int *)a2 + 1),
            a2);
    if ( v44 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        242LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v44);
  }
  else
  {
    v41 = *((_QWORD *)this + 8);
    for ( i = *((_QWORD *)this + 7); i != v41; i += 8LL )
    {
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DockInputInfo *))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 40LL))(
              *(_QWORD *)i + 8LL,
              *((unsigned int *)a2 + 1),
              a2);
      if ( v43 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          248LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
          (const char *)(unsigned int)v43);
    }
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v47);
  return 0LL;
}
