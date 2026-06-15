/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800138FC
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013570 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001C8FC (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F3A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800814EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180081696 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800816DE (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18008184E (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180081890 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1800DE380 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800DE450 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800DF4E4 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  PVOID pvData; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rsi
  int v18; // r8d
  int v19; // r9d
  unsigned int Count; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // kr00_8
  void *v23; // rax
  void *v24; // rcx
  int v25; // esi
  __int64 v26; // r14
  int LowerBound; // r15d
  _DWORD *v28; // rcx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // [rsp+20h] [rbp-50h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v39; // [rsp+50h] [rbp-20h]
  PROPVARIANT v40[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v43; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+48h] BYREF
  SAFEARRAY *ppsaOut; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v43, &ATL::g_strmgr);
  v2 = CAudioSessionInstanceId::ToPersistedString((char *)this + 584, &v43, 1LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v2,
      v37);
    ATL::CStringData::Release((ATL::CStringData *)(v43 - 24));
    return v3;
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    v39 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 116) + 40LL))(
           *((_QWORD *)this + 116),
           &PKEY_AudioSession_MasterVolume,
           pvar);
    v5 = v43;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFBA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v4);
    }
    else if ( !v4 && LOWORD(pvar[0]) == 4 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      *((_DWORD *)this + 194) = pvar[1];
      v10 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v9,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v10 > 4u && (unsigned __int8)tlgKeywordOn(v10, 2LL) )
      {
        LODWORD(v43) = *((_DWORD *)this + 194);
        v44 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v11,
          (unsigned int)&unk_180191494,
          v12,
          v13,
          (__int64)&v44,
          (__int64)&v43);
      }
      if ( this != (CPerStreamVolumeAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    }
    PropVariantClear(pvar);
    *(_OWORD *)v40 = 0LL;
    v41 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 116) + 40LL))(
           *((_QWORD *)this + 116),
           &PKEY_AudioSession_ChannelVolume,
           v40);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFD2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v6);
    }
    else if ( !v6 && LOWORD(v40[0]) == 8196 )
    {
      ppsaOut = 0LL;
      v14 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, (SAFEARRAY *)v40[1]);
      if ( v14 < 0 )
        ATL::AtlThrowImpl(v14);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      if ( !*((_DWORD *)this + 222)
        || *((_DWORD *)this + 222) == (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut) )
      {
        if ( *((_QWORD *)this + 112) )
          goto LABEL_35;
        Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        *((_DWORD *)this + 222) = Count;
        v22 = Count;
        v21 = 4LL * Count;
        if ( !is_mul_ok(v22, 4uLL) )
          v21 = -1LL;
        v23 = operator new[](v21, (const struct std::nothrow_t *)&std::nothrow);
        v24 = (void *)*((_QWORD *)this + 112);
        *((_QWORD *)this + 112) = v23;
        if ( v24 )
          operator delete(v24);
        pvData = (PVOID)*((_QWORD *)this + 112);
        if ( pvData )
          memset_0(pvData, 0, 4LL * *((unsigned int *)this + 222));
        if ( *((_QWORD *)this + 112) )
        {
LABEL_35:
          v25 = 0;
          if ( *((int *)this + 222) > 0 )
          {
            v26 = 0LL;
            do
            {
              if ( !ppsaOut )
                ATL::AtlThrowImpl(-2147467259);
              LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
              if ( v25 < LowerBound || v25 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                ATL::AtlThrowImpl(-2147024809);
              pvData = ppsaOut->pvData;
              *(_DWORD *)(v26 + *((_QWORD *)this + 112)) = *((_DWORD *)pvData + v25 - LowerBound);
              ++v25;
              v26 += 4LL;
            }
            while ( v25 < *((_DWORD *)this + 222) );
          }
          v28 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               pvData,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                           + 8);
          if ( *v28 > 4u && (unsigned __int8)tlgKeywordOn(v28, 2LL) )
          {
            pvar[0] = *((PROPVARIANT *)this + 112);
            LOWORD(pvar[1]) = *((_WORD *)this + 444);
            v43 = v5;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
              v29,
              (unsigned int)&unk_18019142F,
              v30,
              v31,
              (__int64)&v43,
              (__int64)pvar);
          }
        }
      }
      else
      {
        v16 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                pvData,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v17 = *(_DWORD **)(v16 + 8);
        if ( *v17 > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v16 + 8), 2LL) )
        {
          LODWORD(v43) = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
          LODWORD(v44) = *((_DWORD *)this + 222);
          v46 = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (_DWORD)v17,
            (unsigned int)&unk_180191394,
            v18,
            v19,
            (__int64)&v46,
            (__int64)&v44,
            (__int64)&v43);
        }
      }
      if ( this != (CPerStreamVolumeAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
    }
    PropVariantClear(v40);
    *(_OWORD *)pvar = 0LL;
    v39 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 116) + 40LL))(
           *((_QWORD *)this + 116),
           &PKEY_AudioSession_Mute,
           pvar);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1014,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v7);
    }
    else if ( !v7 && LOWORD(pvar[0]) == 11 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      v33 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v32,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v33 > 4u && (unsigned __int8)tlgKeywordOn(v33, 2LL) )
      {
        LOBYTE(v43) = LOWORD(pvar[1]) == 0xFFFF;
        v44 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
          v34,
          (unsigned int)&unk_180191341,
          v35,
          v36,
          (__int64)&v44,
          (__int64)&v43);
      }
      *((_DWORD *)this + 195) = LOWORD(pvar[1]) == 0xFFFF;
      if ( this != (CPerStreamVolumeAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    }
    PropVariantClear(pvar);
    ATL::CStringData::Release((ATL::CStringData *)(v5 - 24));
    return 0LL;
  }
}
