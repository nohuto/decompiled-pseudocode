/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800485E0
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180023FE0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180055AE0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_7b4c628ff9a505cdbb759a92231d607e__void_::_Do_call @ 0x180071150 (std--_Func_impl_no_alloc__lambda_7b4c628ff9a505cdbb759a92231d607e__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001C8FC (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F3A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180081696 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1800DE380 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800DE450 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800E2838 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  SAFEARRAY *v7; // rdi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  SAFEARRAY *v12; // rbx
  __int64 v13; // rcx
  SAFEARRAY *v14; // rax
  HRESULT v15; // eax
  int v16; // r12d
  _DWORD *v17; // rcx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rcx
  bool v23; // zf
  _DWORD *v24; // rcx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  int v29; // eax
  unsigned int v30; // r12d
  int v31; // eax
  __int64 v32; // [rsp+30h] [rbp-39h] BYREF
  __int16 v33; // [rsp+38h] [rbp-31h]
  __int128 v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+50h] [rbp-19h]
  __int128 v36; // [rsp+58h] [rbp-11h] BYREF
  __int64 v37; // [rsp+68h] [rbp-1h]
  __int16 v38; // [rsp+70h] [rbp+7h] BYREF
  SAFEARRAY *v39; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  SAFEARRAY *v41; // [rsp+D0h] [rbp+67h] BYREF
  SAFEARRAY *v42; // [rsp+D8h] [rbp+6Fh] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+E0h] [rbp+77h] BYREF

  if ( !*((_QWORD *)this + 116) || !*((_BYTE *)this + 920) || !_InterlockedExchange((volatile __int32 *)this + 244, 0) )
    return 0LL;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v41, (__int64)&ATL::g_strmgr);
  v3 = CAudioSessionInstanceId::ToPersistedString((__int64 *)this + 73, (__int64)&v41, 1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v36 = 0LL;
    v37 = 0LL;
    LOWORD(v36) = 4;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    DWORD2(v36) = *((_DWORD *)this + 194);
    if ( this != (CPerStreamVolumeAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v5,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    v7 = v41;
    if ( *v6 > 4u && tlgKeywordOn((__int64)v6, 2LL) )
    {
      LODWORD(v41) = DWORD2(v36);
      v42 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_1801912E8,
        v9,
        v10,
        (__int64)&v42,
        (__int64)&v41);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
            *((_QWORD *)this + 116),
            &PKEY_AudioSession_MasterVolume,
            &v36);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x104C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v11);
    v12 = 0LL;
    v42 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    if ( !*((_DWORD *)this + 222) )
      goto LABEL_18;
    rgsabound.cElements = *((_DWORD *)this + 222);
    rgsabound.lLbound = 0;
    v14 = SafeArrayCreate(4u, 1u, &rgsabound);
    v12 = v14;
    v42 = v14;
    if ( v14 )
    {
      v15 = SafeArrayLock(v14);
      if ( v15 >= 0 )
      {
        v30 = 0;
        if ( *((_DWORD *)this + 222) )
        {
          while ( 1 )
          {
            LODWORD(v41) = *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v30);
            v31 = ATL::CComSafeArray<float,4>::SetAt(&v42, v30, &v41);
            if ( v31 < 0 )
              break;
            if ( ++v30 >= *((_DWORD *)this + 222) )
              goto LABEL_18;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x105F,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v31);
          v16 = 0;
          goto LABEL_19;
        }
LABEL_18:
        v16 = *((_DWORD *)this + 222);
LABEL_19:
        v17 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v13,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *v17 > 4u && tlgKeywordOn((__int64)v17, 2LL) )
        {
          v32 = *((_QWORD *)this + 112);
          v33 = *((_WORD *)this + 444);
          v41 = v7;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
            v18,
            (unsigned int)&unk_180191280,
            v19,
            v20,
            (__int64)&v41,
            (__int64)&v32);
        }
        if ( this != (CPerStreamVolumeAudioSession *)-736LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
        if ( v16 )
        {
          v38 = 8196;
          v39 = v12;
          v21 = (*(__int64 (__fastcall **)(_QWORD, void *, __int16 *))(**((_QWORD **)this + 116) + 48LL))(
                  *((_QWORD *)this + 116),
                  &PKEY_AudioSession_ChannelVolume,
                  &v38);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1076,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v21);
        }
        ATL::CComSafeArray<float,4>::Destroy(&v42);
        v34 = 0LL;
        v35 = 0LL;
        LOWORD(v34) = 11;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
        v23 = *((_DWORD *)this + 195) == 0;
        WORD4(v34) = -1;
        if ( v23 )
          WORD4(v34) = 0;
        if ( this != (CPerStreamVolumeAudioSession *)-736LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
        v24 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v22,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *v24 > 4u && tlgKeywordOn((__int64)v24, 2LL) )
        {
          LOBYTE(v41) = WORD4(v34) == 0xFFFF;
          v42 = v7;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
            v25,
            (unsigned int)&unk_18019122A,
            v26,
            v27,
            (__int64)&v42,
            (__int64)&v41);
        }
        v28 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
                *((_QWORD *)this + 116),
                &PKEY_AudioSession_Mute,
                &v34);
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x108D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v28);
        v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 116) + 56LL))(*((_QWORD *)this + 116));
        if ( v29 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1090,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v29);
        ATL::CStringData::Release((ATL::CStringData *)&v7[-1].cLocks);
        return 0LL;
      }
    }
    else
    {
      v15 = -2147024882;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x105B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1037,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v3);
  ATL::CStringData::Release((ATL::CStringData *)&v41[-1].cLocks);
  return v4;
}
