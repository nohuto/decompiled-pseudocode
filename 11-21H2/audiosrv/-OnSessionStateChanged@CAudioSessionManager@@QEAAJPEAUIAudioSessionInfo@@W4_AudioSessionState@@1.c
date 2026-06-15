/*
 * XREFs of ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800202B0
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18001F8F0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E03F4 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F6E0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180020AB8 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800CB2DC (WPP_SF_Sd.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800D6154 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     WPP_SF_SS @ 0x1800DDE2C (WPP_SF_SS.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE898 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x1800DEFAC (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSessionManager::OnSessionStateChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  CEndpointStoreCache *v12; // rcx
  _QWORD *v13; // rbx
  volatile signed __int32 *v14; // rsi
  __int64 v15; // rdi
  ATL::CStringData *v16; // rcx
  unsigned int v17; // edi
  unsigned __int16 i; // ax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // r15
  __int64 v24; // rax
  void **v25; // rcx
  _QWORD *v26; // rax
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  volatile signed __int32 *v30; // rdx
  volatile signed __int32 *v31; // rdx
  volatile signed __int32 *v32; // rdx
  volatile signed __int32 *v33; // rdx
  volatile signed __int32 *v34; // rdx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  __int64 v43; // r15
  unsigned int v44; // ebx
  unsigned int v45; // esi
  unsigned int v46; // edi
  unsigned int *v47; // rax
  unsigned int *v48; // r14
  _WORD *v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r9
  __int64 v52; // r8
  __int16 v53; // ax
  char *v54; // r8
  char *v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r10
  signed __int64 v58; // r8
  __int16 v59; // ax
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v62; // rdx
  int v63; // [rsp+20h] [rbp-158h]
  int v64; // [rsp+20h] [rbp-158h]
  _QWORD *v65; // [rsp+30h] [rbp-148h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-140h] BYREF
  volatile signed __int32 *v67; // [rsp+40h] [rbp-138h] BYREF
  __int64 *v68; // [rsp+48h] [rbp-130h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-128h] BYREF
  __int64 *v70; // [rsp+58h] [rbp-120h] BYREF
  char *v71; // [rsp+60h] [rbp-118h] BYREF
  void (__fastcall **v72[3])(_QWORD, LPCRITICAL_SECTION *); // [rsp+68h] [rbp-110h] BYREF
  union _RTL_RUN_ONCE *v73; // [rsp+80h] [rbp-F8h] BYREF
  int v74; // [rsp+88h] [rbp-F0h]
  __int64 v75; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-D8h]
  __int128 v78; // [rsp+A8h] [rbp-D0h]
  __int64 v79; // [rsp+B8h] [rbp-C0h]
  int v80; // [rsp+C0h] [rbp-B8h]
  __int64 v81; // [rsp+C8h] [rbp-B0h]
  int v82; // [rsp+D0h] [rbp-A8h]
  __int64 v83; // [rsp+D8h] [rbp-A0h]
  _BYTE v84[72]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v85; // [rsp+128h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v68 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct IAudioSessionInfo *, GUID *, __int64 *))a2)(
         a2,
         &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
         (__int64 *)&v68);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v7,
      v63);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v8,
      v64);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v68);
    return v8;
  }
  else
  {
    v65 = 0LL;
    v9 = *v68;
    v65 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD **))(v9 + 24))(v68, &v65);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x234,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v10,
        v63);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v65);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v68);
      return v11;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          19,
          (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
          0,
          a4);
        v12 = WPP_GLOBAL_Control;
      }
      if ( a3 == AudioSessionStateExpired )
      {
        if ( v12 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)v12 + 2), 20LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, a4);
        }
        CAudioSessionInstanceId::CAudioSessionInstanceId(
          (CAudioSessionInstanceId *)v84,
          (const struct CAudioSessionInstanceId *)(v65 + 73));
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        v71 = (char *)this + 8;
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            21,
            (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
            0,
            v85);
        }
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
          (char *)this + 48,
          v72,
          v84,
          &v65);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v71);
        CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v84);
        v12 = WPP_GLOBAL_Control;
      }
      if ( a4 == 1 )
      {
        v43 = (__int64)v65;
        if ( v12 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)v12 + 2), 29LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, 0LL);
        }
        v44 = 2 * *(_DWORD *)(*(_QWORD *)(v43 + 656) - 16LL) + 2;
        v45 = 2 * *((_DWORD *)this + 64) + 2;
        v46 = v45 + 2 * *(_DWORD *)(*(_QWORD *)(v43 + 656) - 16LL) + 74;
        v47 = (unsigned int *)operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
        v48 = v47;
        if ( v47 )
        {
          *v47 = v46;
          v47[1] = 64;
          v47[6] = v44;
          v47[12] = v45;
          v47[13] = v44 + 72;
          v49 = v47 + 18;
          v50 = (unsigned __int64)v44 >> 1;
          if ( v50 )
          {
            v51 = 2147483646 - v50;
            v52 = *(_QWORD *)(v43 + 656) - (_QWORD)v49;
            while ( v50 + v51 )
            {
              v53 = *(_WORD *)((char *)v49 + v52);
              if ( !v53 )
                break;
              *v49++ = v53;
              if ( !--v50 )
              {
                --v49;
                break;
              }
            }
            *v49 = 0;
          }
          v54 = (char *)this + 240;
          if ( *((_QWORD *)this + 33) >= 8uLL )
            v54 = *(char **)v54;
          v55 = (char *)v48 + v48[13];
          v56 = (unsigned __int64)v45 >> 1;
          if ( v56 )
          {
            v57 = 2147483646 - v56;
            v58 = v54 - v55;
            while ( v56 + v57 )
            {
              v59 = *(_WORD *)&v55[v58];
              if ( !v59 )
                break;
              *(_WORD *)v55 = v59;
              v55 += 2;
              if ( !--v56 )
              {
                v55 -= 2;
                break;
              }
            }
            *(_WORD *)v55 = 0;
          }
          v72[0] = (void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))&CAudioSessionManagerNotification::`vftable';
          v72[1] = (void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))v48;
          v72[2] = (void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))v43;
          CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 176), v72);
        }
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v48);
      }
      else if ( a4 == 2 )
      {
        if ( v12 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)v12 + 2), 22LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, 0LL);
        }
        v13 = v65;
        v75 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v65[73] - 24LL) + 24;
        v70 = &v76;
        v76 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13[74] - 24LL) + 24;
        v77 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13[75] - 24LL) + 24;
        v78 = *((_OWORD *)v13 + 38);
        v79 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13[78] - 24LL) + 24;
        v80 = *((_DWORD *)v13 + 158);
        v81 = v13[80];
        v82 = *((_DWORD *)v13 + 162);
        v83 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13[82] - 24LL) + 24;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23,
            (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
            0,
            v83);
        }
        v67 = (volatile signed __int32 *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr)
                                        + 24);
        if ( (int)CAudioSessionInstanceId::ToString((__int64)&v75, (void **)&v67) < 0 )
        {
          v62 = v67 - 6;
          if ( _InterlockedExchangeAdd(v67 - 2, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v62 + 8LL))(*(_QWORD *)v62);
          v17 = 0;
        }
        else
        {
          v14 = v67;
          v15 = *((int *)v67 - 4);
          if ( ((1 - *((_DWORD *)v67 - 2)) | (*((_DWORD *)v67 - 3) - (int)v15)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v67, v15);
            v14 = v67;
          }
          _o__wcsupr_s(v14, (int)v15 + 1);
          if ( (int)v15 < 0 || (v16 = (ATL::CStringData *)(v14 - 6), (int)v15 > *((_DWORD *)v14 - 3)) )
            ATL::AtlThrowImpl(-2147024809);
          *((_DWORD *)v16 + 2) = v15;
          *((_WORD *)v14 + v15) = 0;
          if ( !v14 )
            ATL::AtlThrowImpl(-2147467259);
          v17 = 0;
          for ( i = *(_WORD *)v14; *(_WORD *)v14; i = *(_WORD *)v14 )
          {
            v17 = i + 33 * v17;
            v14 = (volatile signed __int32 *)((char *)v14 + 2);
          }
          ATL::CStringData::Release(v16);
        }
        v19 = v17;
        v20 = 2 * (*((_QWORD *)this + 12) & v17);
        v21 = *((_QWORD *)this + 9);
        v22 = *(_QWORD **)(v21 + 16 * (*((_QWORD *)this + 12) & v17) + 8);
        if ( v22 == *((_QWORD **)this + 7) )
          goto LABEL_130;
        v23 = *(_QWORD **)(v21 + 8 * v20);
        while ( 1 )
        {
          if ( !(unsigned int)_o__wcsicmp(v75, v22[2])
            && v82 == *((_DWORD *)v22 + 20)
            && (v82 || (_DWORD)v81 == *((_DWORD *)v22 + 18))
            && v80 == *((_DWORD *)v22 + 16)
            && (v80 || !(unsigned int)_o__wcsicmp(v76, v22[3])) )
          {
            v24 = v78 - v22[5];
            if ( (_QWORD)v78 == v22[5] )
              v24 = *((_QWORD *)&v78 + 1) - v22[6];
            if ( !v24 )
              break;
          }
          if ( v22 == v23 )
            goto LABEL_130;
          v22 = (_QWORD *)v22[1];
        }
        if ( !v22 )
        {
LABEL_130:
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, v83);
          }
        }
        else
        {
          v25 = (void **)(16 * (*((_QWORD *)this + 12) & v19) + *((_QWORD *)this + 9));
          v26 = *v25;
          if ( v25[1] == v22 )
          {
            if ( v26 == v22 )
            {
              v27 = (void *)*((_QWORD *)this + 7);
              *v25 = v27;
            }
            else
            {
              v27 = (void *)v22[1];
            }
            v25[1] = v27;
          }
          else if ( v26 == v22 )
          {
            *v25 = (void *)*v22;
          }
          v28 = *v22;
          --*((_QWORD *)this + 8);
          *(_QWORD *)v22[1] = v28;
          *(_QWORD *)(v28 + 8) = v22[1];
          v29 = v22[12];
          if ( v29 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          v30 = (volatile signed __int32 *)(v22[11] - 24LL);
          if ( _InterlockedExchangeAdd(v30 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 8LL))(*(_QWORD *)v30);
          v31 = (volatile signed __int32 *)(v22[7] - 24LL);
          if ( _InterlockedExchangeAdd(v31 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v31 + 8LL))(*(_QWORD *)v31);
          v32 = (volatile signed __int32 *)(v22[4] - 24LL);
          if ( _InterlockedExchangeAdd(v32 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 8LL))(*(_QWORD *)v32);
          v33 = (volatile signed __int32 *)(v22[3] - 24LL);
          if ( _InterlockedExchangeAdd(v33 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v33 + 8LL))(*(_QWORD *)v33);
          v34 = (volatile signed __int32 *)(v22[2] - 24LL);
          if ( _InterlockedExchangeAdd(v34 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 8LL))(*(_QWORD *)v34);
          operator delete(v22, 0x68uLL);
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids);
          }
          (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v65 + 160LL))(v65, g_PolicyEventsHandler);
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            v73 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
            Context = &qword_1801C2788;
            qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
            qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            v74 = 0;
            wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v73);
          }
          v37 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v37 > 4u
            && (*(_DWORD *)(v37 + 16) & 0x200LL) != 0
            && (*(_QWORD *)(v37 + 24) & 0x200LL) == *(_QWORD *)(v37 + 24) )
          {
            v70 = (__int64 *)v65[82];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              v37,
              (unsigned int)&unk_180188C83,
              v35,
              v36,
              (__int64)&v70);
          }
        }
        if ( this != (CAudioSessionManager *)-8LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        v38 = (_QWORD *)(v83 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v83 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 8LL))(*v38);
        v39 = (_QWORD *)(v79 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v79 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 8LL))(*v39);
        v40 = (_QWORD *)(v77 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v77 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
        v41 = (_QWORD *)(v76 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v41 + 8LL))(*v41);
        v42 = (_QWORD *)(v75 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v75 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v42 + 8LL))(*v42);
      }
      if ( v65 )
        (*(void (__fastcall **)(_QWORD *))(*v65 + 16LL))(v65);
      if ( v68 )
        (*(void (__fastcall **)(__int64 *))(*v68 + 16))(v68);
      return 0LL;
    }
  }
}
