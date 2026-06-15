/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354
 * Callers:
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180002CE0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180009060 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x1800091E0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18000A1F0 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x18000A440 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18000DA70 (-TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18000F9EC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18000FB40 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800125F0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x1800380EC (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x180033564 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 *     ??$emplace_after@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@V?$_Flist_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@@Z @ 0x1800336F0 (--$emplace_after@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndI.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2@Z @ 0x1800338C0 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDes.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2$$QEAW4EndpointApplicability@@@Z @ 0x180033944 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA-A.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x1800339D0 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY02$$CBG$$QEAM$$QEAH2@Z @ 0x180033A54 (--$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY04$$CBG$$QEAM$$QEAH2@Z @ 0x180033AD8 (--$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x1800340AC (--1-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@std@@@std@@.c)
 *     ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x180034124 (--1-$unique_ptr@VCDriverListener@@U-$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180034144 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z @ 0x180034DA8 (--R-$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180035040 (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180038258 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180039DCC (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x18003C554 (--0CDriverListener@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180046C04 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TsSessionCreate(DWORD SessionId, struct TSSession **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rax
  struct TSSession *v9; // rbx
  struct _RTL_CRITICAL_SECTION **v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // rdx
  int refreshed; // eax
  __int64 v13; // rdx
  unsigned int v14; // edi
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // rax
  _QWORD *v23; // rdi
  __int64 *v24; // rax
  _QWORD *v25; // rdi
  __int64 *v26; // rax
  _QWORD *v27; // rdi
  __int64 *v28; // rax
  _QWORD *v29; // rdi
  __int64 *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rcx
  struct TSSession *v35; // rcx
  __int64 v36; // rcx
  const struct _tlgProvider_t *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  DuckingDescriptorAndId *v40; // [rsp+30h] [rbp-58h] BYREF
  struct TSSession *v41; // [rsp+38h] [rbp-50h] BYREF
  DuckingDescriptorAndId *v42; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v43[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  DWORD v45; // [rsp+90h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+98h] [rbp+10h] BYREF
  int v47; // [rsp+A0h] [rbp+18h] BYREF
  int v48; // [rsp+A8h] [rbp+20h] BYREF

  v45 = SessionId;
  *a2 = 0LL;
  v41 = 0LL;
  try
  {
    v4 = TSSession::Create(SessionId, &v41);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BA,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v41);
      return v5;
    }
    if ( SessionId )
    {
      v9 = v41;
    }
    else
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
      v46 = v8;
      if ( v8 )
        v8 = (struct _RTL_CRITICAL_SECTION *)CDriverListener::CDriverListener((CDriverListener *)v8);
      v46 = v8;
      v9 = v41;
      v10 = (struct _RTL_CRITICAL_SECTION **)((char *)v41 + 1080);
      if ( (struct _RTL_CRITICAL_SECTION **)((char *)v41 + 1080) != &v46 )
      {
        v46 = 0LL;
        v11 = *v10;
        *v10 = v8;
        if ( v11 )
          std::default_delete<CDriverListener>::operator()((__int64)&v46, v11);
      }
      std::unique_ptr<CDriverListener>::~unique_ptr<CDriverListener>(&v46);
      if ( !*v10 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C0,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v41);
        return 2147942414LL;
      }
    }
    *((_DWORD *)v9 + 1) = GetTsAudioProtocol(SessionId);
    *((_DWORD *)v9 + 2) = ++dword_180063844;
    refreshed = TsSessionRefreshSessionInformation(v9);
    v14 = refreshed;
    if ( refreshed >= 0 )
    {
      v15 = (_QWORD *)((char *)v9 + 1064);
      LODWORD(v46) = 1;
      v47 = 400000;
      v48 = -1042284544;
      v16 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[5],float,int,int,0>(
              (__int64 *)&v40,
              v13,
              (__int64)&v48,
              &v47,
              &v46);
      v17 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         &v42,
                         v15,
                         v16);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v40);
      LODWORD(v46) = 0;
      v47 = 400000;
      v48 = -1047527424;
      v19 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[3],float,int,int,0>(
              (__int64 *)&v40,
              v18,
              (__int64)&v48,
              &v47,
              &v46);
      v20 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         &v42,
                         v17,
                         v19);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v40);
      LODWORD(v46) = -8388608;
      v47 = 0;
      v48 = 400000;
      v22 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float &,int,int,0>(
              (__int64 *)&v40,
              v21,
              (__int64)&v46,
              &v48,
              &v47);
      v23 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         &v42,
                         v20,
                         v22);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v40);
      v47 = 0;
      v48 = 400000;
      LODWORD(v40) = -1042284544;
      v24 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v42,
              (__int64)L"3",
              (__int64)&v40,
              &v48,
              &v47);
      v25 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         v43,
                         v23,
                         v24);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v42);
      v47 = 0;
      v48 = 400000;
      *(float *)&v40 = FLOAT_N6_0;
      v26 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v42,
              (__int64)L"1",
              (__int64)&v40,
              &v48,
              &v47);
      v27 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         v43,
                         v25,
                         v26);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v42);
      v47 = 0;
      v48 = 400000;
      LODWORD(v40) = -1047527424;
      v28 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v42,
              (__int64)L"2",
              (__int64)&v40,
              &v48,
              &v47);
      v29 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         v43,
                         v27,
                         v28);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v42);
      v47 = 1;
      v48 = 400000;
      LODWORD(v40) = -1042284544;
      v30 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v42,
              (__int64)L"5",
              (__int64)&v40,
              &v48,
              &v47);
      v31 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v15,
                         v43,
                         v29,
                         v30);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v42);
      v47 = 1;
      v48 = 0;
      LODWORD(v40) = 400000;
      v33 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float &,int,int,enum EndpointApplicability,0>(
              (__int64 *)&v42,
              v32,
              (__int64)&v46,
              (int *)&v40,
              &v48,
              (unsigned int *)&v47);
      std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
        (__int64)v15,
        &v46,
        v31,
        v33);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v42);
      EnterCriticalSection(&stru_1800636C8);
      v46 = &stru_1800636C8;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        v34,
        (__int64)v43,
        (unsigned __int8 *)&v45,
        (__int64 *)&v41);
      v35 = *(struct TSSession **)(v43[0] + 24LL);
      *a2 = v35;
      TsSessionConsiderForPrimaryConsoleAudioSession(v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v46);
      v37 = AudioSrvPolicyManagerTelemetryProvider::Provider(v36);
      if ( *(_DWORD *)v37 > 4u )
      {
        LODWORD(v46) = v45;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v37,
          byte_180056D9E,
          v38,
          v39,
          (__int64)&v46);
      }
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v41);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)refreshed);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v41);
      result = v14;
    }
  }
  catch ( ... )
  {
    LODWORD(v46) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3F8,
                     (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                     v6);
    return (unsigned int)v46;
  }
  return result;
}
