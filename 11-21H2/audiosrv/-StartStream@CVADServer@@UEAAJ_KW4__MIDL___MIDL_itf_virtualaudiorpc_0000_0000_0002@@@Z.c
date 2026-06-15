/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x1800238C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800ED02C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  unsigned int v11; // r14d
  int v12; // eax
  std::_Ref_count_base *v13; // rax
  std::_Ref_count_base *v14; // rdx
  std::_Ref_count_base *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v20; // r8d
  int v21; // r9d
  int v22; // [rsp+20h] [rbp-50h]
  int v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  WINBOOL fPending; // [rsp+90h] [rbp+20h] BYREF
  int v30; // [rsp+A8h] [rbp+38h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v22);
    goto LABEL_40;
  }
  v7 = *(_QWORD *)(a1 + 168);
  if ( !v7 )
  {
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v22);
    goto LABEL_40;
  }
  v8 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v8 + 496) )
  {
    v10 = -2005139336;
    goto LABEL_40;
  }
  if ( a2 != *(_QWORD *)(v8 + 48) )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v23);
    goto LABEL_40;
  }
  if ( a3 )
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8000FFFFLL,
      v22);
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 264LL))(v7, v8, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9,
      v22);
    goto LABEL_40;
  }
  v11 = 0;
  if ( !*(_BYTE *)(a1 + 188) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 224LL))(
            *(_QWORD *)(a1 + 168),
            *(_QWORD *)(a1 + 192));
    v10 = v12;
    if ( v12 >= 0 )
    {
      *(_BYTE *)(a1 + 188) = 1;
      *(_BYTE *)(a1 + 200) = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 456));
      if ( !*(_QWORD *)(a1 + 496) )
      {
        CPowerReferenceManager::AcquirePowerReferenceForStream((__int64)g_powerReferenceManager, v27, a1);
        v13 = v27[0];
        v14 = v27[1];
        *(_OWORD *)v27 = 0LL;
        *(_QWORD *)(a1 + 496) = v13;
        v15 = *(std::_Ref_count_base **)(a1 + 504);
        *(_QWORD *)(a1 + 504) = v14;
        if ( v15 )
        {
          std::_Ref_count_base::_Decref(v15);
          if ( v27[1] )
            std::_Ref_count_base::_Decref(v27[1]);
        }
      }
      if ( a1 != -456 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 456));
      v16 = (__int64 *)(*(_QWORD *)(a1 + 192) + 8LL);
      v17 = *v16;
      v24 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v17 + 24))(v16, &v24) >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          v27[0] = (std::_Ref_count_base *)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          LODWORD(v27[1]) = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v27);
        }
        v18 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v18 > 4u
          && (*(_DWORD *)(v18 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v18 + 24) & 0x200LL) == *(_QWORD *)(v18 + 24) )
        {
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) + 64LL))(*(_QWORD *)(a1 + 168) + 8LL);
          v27[0] = (std::_Ref_count_base *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
                                                                              + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v18,
            (unsigned int)&unk_1801896C6,
            v20,
            v21,
            (__int64)v27,
            (__int64)&v26,
            (__int64)&v30);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24);
        IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
      }
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_22;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12,
      v22);
LABEL_40:
    v11 = v10;
    goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids);
  }
LABEL_22:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v11;
}
