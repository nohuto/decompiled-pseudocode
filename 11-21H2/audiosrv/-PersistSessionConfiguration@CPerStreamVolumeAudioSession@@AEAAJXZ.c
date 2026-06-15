/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000FDF4
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18000FDD0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001F7D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_fdb92b12402549453a208951f74be6cd__void_::_Do_call @ 0x1800DB450 (std--_Func_impl_no_alloc__lambda_fdb92b12402549453a208951f74be6cd__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001DB80 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1800D50A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800D5170 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800D6DB0 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800DA9A8 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  unsigned int v2; // r12d
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  SAFEARRAY *v10; // rdi
  int v11; // eax
  SAFEARRAY *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  SAFEARRAY *v15; // rax
  HRESULT v16; // eax
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-59h]
  __int64 v30; // [rsp+30h] [rbp-49h] BYREF
  __int16 v31; // [rsp+38h] [rbp-41h]
  __int128 v32; // [rsp+40h] [rbp-39h] BYREF
  __int64 v33; // [rsp+50h] [rbp-29h]
  __int128 v34; // [rsp+58h] [rbp-21h] BYREF
  __int64 v35; // [rsp+68h] [rbp-11h]
  __int16 v36; // [rsp+70h] [rbp-9h] BYREF
  SAFEARRAY *v37; // [rsp+78h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  SAFEARRAY *v39; // [rsp+E0h] [rbp+67h] BYREF
  SAFEARRAY *v40; // [rsp+E8h] [rbp+6Fh] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+F0h] [rbp+77h] BYREF
  char *v42; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 116) || !*((_BYTE *)this + 920) || !_InterlockedExchange((volatile __int32 *)this + 244, 0) )
    return 0LL;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v39, &ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToPersistedString((char *)this + 584, &v39, 1LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v34 = 0LL;
    v35 = 0LL;
    LOWORD(v34) = 4;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v40 = (SAFEARRAY *)((char *)this + 736);
    DWORD2(v34) = *((_DWORD *)this + 194);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v40);
    v7 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v6,
                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                   + 8);
    v10 = v39;
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
    {
      LODWORD(v39) = DWORD2(v34);
      v40 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned int)&unk_180188835,
        v8,
        v9,
        (__int64)&v40,
        (__int64)&v39);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
            *((_QWORD *)this + 116),
            &PKEY_AudioSession_MasterVolume,
            &v34);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x104E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v11,
        v29);
    v12 = 0LL;
    v40 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v42 = (char *)this + 736;
    v14 = *((_DWORD *)this + 222);
    if ( v14 )
    {
      rgsabound.cElements = *((_DWORD *)this + 222);
      rgsabound.lLbound = 0;
      v15 = SafeArrayCreate(4u, 1u, &rgsabound);
      v12 = v15;
      v40 = v15;
      if ( v15 )
      {
        v16 = SafeArrayLock(v15);
        if ( v16 >= 0 )
        {
          v14 = *((_DWORD *)this + 222);
          if ( v14 )
          {
            while ( 1 )
            {
              LODWORD(v39) = *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v2);
              v28 = ATL::CComSafeArray<float,4>::SetAt(&v40, v2, &v39);
              if ( v28 < 0 )
                break;
              ++v2;
              v14 = *((_DWORD *)this + 222);
              if ( v2 >= v14 )
                goto LABEL_19;
            }
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1061,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v28,
              v29);
            v14 = 0;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v16 = -2147024882;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x105D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v16,
        v29);
      v14 = *((_DWORD *)this + 222);
    }
LABEL_19:
    v17 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v13,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v17 > 4u
      && (*(_BYTE *)(v17 + 16) & 2) != 0
      && (*(_QWORD *)(v17 + 24) & 2LL) == *(_QWORD *)(v17 + 24) )
    {
      v30 = *((_QWORD *)this + 112);
      v31 = *((_WORD *)this + 444);
      v39 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
        v17,
        (unsigned int)&unk_1801887CD,
        v18,
        v19,
        (__int64)&v39,
        (__int64)&v30);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v42);
    if ( v14 )
    {
      v36 = 8196;
      v37 = v12;
      v20 = (*(__int64 (__fastcall **)(_QWORD, void *, __int16 *))(**((_QWORD **)this + 116) + 48LL))(
              *((_QWORD *)this + 116),
              &PKEY_AudioSession_ChannelVolume,
              &v36);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1078,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v20,
          v29);
    }
    ATL::CComSafeArray<float,4>::Destroy(&v40);
    v32 = 0LL;
    v33 = 0LL;
    LOWORD(v32) = 11;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v39 = (SAFEARRAY *)((char *)this + 736);
    v21 = *((_DWORD *)this + 195) == 0;
    WORD4(v32) = -1;
    if ( v21 )
      WORD4(v32) = 0;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v39);
    v23 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v22,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v23 > 4u
      && (*(_BYTE *)(v23 + 16) & 2) != 0
      && (*(_QWORD *)(v23 + 24) & 2LL) == *(_QWORD *)(v23 + 24) )
    {
      LOBYTE(v39) = WORD4(v32) == 0xFFFF;
      v40 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v23,
        (unsigned int)&unk_180188777,
        v24,
        v25,
        (__int64)&v40,
        (__int64)&v39);
    }
    v26 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
            *((_QWORD *)this + 116),
            &PKEY_AudioSession_Mute,
            &v32);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x108F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v26,
        v29);
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 116) + 56LL))(*((_QWORD *)this + 116));
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1092,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v27,
        v29);
    ATL::CStringData::Release((ATL::CStringData *)&v10[-1].cLocks);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1039,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v4,
    v29);
  ATL::CStringData::Release((ATL::CStringData *)&v39[-1].cLocks);
  return v5;
}
