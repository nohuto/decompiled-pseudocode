/*
 * XREFs of ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874
 * Callers:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180009E80 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z @ 0x180009EB8 (-SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180050C58 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800ED46C (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800EDE34 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x180018B64 (-CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@7@Z @ 0x180018C70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWr.c)
 *     ?NotifyVolumeChanged@CAudioStream@@IEAAXXZ @ 0x180018D7C (-NotifyVolumeChanged@CAudioStream@@IEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@7@Z @ 0x180082160 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapS.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800822F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this, char a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 *v5; // r13
  wil::details::in1diag3 **v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // r14d
  wil::details::in1diag3 *v11; // rcx
  int v12; // r12d
  int v13; // eax
  int v14; // r14d
  _BOOL8 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  __int16 v22; // cx
  __int64 v23; // rcx
  int v24; // eax
  int v26; // eax
  int v27; // r14d
  __int64 v28; // rax
  _DWORD *v29; // rsi
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  _DWORD *v33; // rsi
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rcx
  const wchar_t *v37; // rax
  __int16 v38; // dx
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-69h]
  int v41; // [rsp+60h] [rbp-29h] BYREF
  __int64 v42; // [rsp+68h] [rbp-21h] BYREF
  __int64 v43; // [rsp+70h] [rbp-19h] BYREF
  __int64 v44; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v45[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v46; // [rsp+90h] [rbp+7h] BYREF
  __int16 v47; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  __int64 v49; // [rsp+F0h] [rbp+67h] BYREF
  char v50; // [rsp+F8h] [rbp+6Fh]
  __int64 v51; // [rsp+100h] [rbp+77h] BYREF
  int v52; // [rsp+108h] [rbp+7Fh] BYREF

  v51 = a3;
  v50 = a2;
  v4 = 0;
  v5 = (__int64 *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) || (v6 = (wil::details::in1diag3 **)((char *)this + 192), !*((_QWORD *)this + 24)) )
  {
LABEL_30:
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 67) = 0LL;
    return v4;
  }
  v7 = 0LL;
  v8 = *((_DWORD *)this + 24);
  if ( v8 )
  {
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 16) + 4 * v7) = 1065353216;
      v7 = (unsigned int)(v7 + 1);
      v8 = *((_DWORD *)this + 24);
    }
    while ( (unsigned int)v7 < v8 );
  }
  v9 = CAudioStream::CalculateAPOVolume(this, v8, *((float *const *)this + 16), (bool *)&v49, &v42);
  v10 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    v45[1] = (char *)this + 144;
    v11 = *v6;
    v12 = (unsigned __int8)v49;
    if ( *v6 )
    {
      v13 = (*(__int64 (__fastcall **)(wil::details::in1diag3 *, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v49);
      v14 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x454,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v13);
      if ( v14 == -2147417848 )
      {
        LOBYTE(v49) = 0;
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v6);
      }
      v11 = *v6;
      if ( *v6 )
      {
        if ( !v14 )
        {
          v15 = (_BYTE)v49 != 0;
          if ( v15 != ((_BYTE)v12 != 0) )
          {
            LOBYTE(v15) = v12;
            v26 = (*(__int64 (__fastcall **)(wil::details::in1diag3 *, _BOOL8, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 32LL))(
                    v11,
                    v15,
                    0LL,
                    0LL,
                    0LL);
            v27 = v26;
            v11 = retaddr;
            if ( v26 >= 0 )
            {
              if ( *((_QWORD *)this + 8) )
              {
                v28 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        retaddr,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                v29 = *(_DWORD **)(v28 + 8);
                if ( *v29 > 4u )
                {
                  if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v28 + 8), 0x400000000002LL) )
                  {
                    v52 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
                    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 64LL))(*((_QWORD *)this + 8) + 8LL);
                    v44 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
                    v41 = v12;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                      (_DWORD)v29,
                      (unsigned int)&unk_1801919AC,
                      v30,
                      v31,
                      (__int64)&v41,
                      (__int64)&v44,
                      (__int64)&v43,
                      (__int64)&v52);
                  }
                }
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x461,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                (const char *)(unsigned int)v26);
              if ( v27 == -2147417848 )
                wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v6);
            }
          }
        }
      }
    }
    if ( g_StreamVolumeChangeAsTelemetryCounter <= 0 || *((_DWORD *)this + 107) )
    {
      v32 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v11,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v33 = *(_DWORD **)(v32 + 8);
      if ( *v33 > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v32 + 8), 2LL) )
      {
        v52 = *((_DWORD *)this + 26);
        v41 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        v36 = *((_QWORD *)this + 8);
        if ( v36 )
          v37 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v36 + 8) + 64LL))(v36 + 8);
        else
          v37 = L"null";
        v45[0] = v37;
        v44 = *((_QWORD *)this + 52);
        LOBYTE(v49) = v12;
        v38 = *((_WORD *)this + 48);
        v46 = *((_QWORD *)this + 16);
        v47 = v38;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (_DWORD)v33,
          (unsigned int)&unk_1801918AD,
          v34,
          v35,
          (__int64)&v46,
          (__int64)&v49,
          (__int64)&v44,
          (__int64)v45,
          (__int64)&v41,
          (__int64)&v52);
      }
    }
    else
    {
      --g_StreamVolumeChangeAsTelemetryCounter;
      v16 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v11,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v17 = *(_DWORD **)(v16 + 8);
      if ( *v17 > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v16 + 8), 0x400000000002LL) )
      {
        v52 = *((_DWORD *)this + 26);
        v41 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        v20 = *((_QWORD *)this + 8);
        if ( v20 )
          v21 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v20 + 8) + 64LL))(v20 + 8);
        else
          v21 = L"null";
        v44 = (__int64)v21;
        v43 = *((_QWORD *)this + 52);
        LOBYTE(v49) = v12;
        v22 = *((_WORD *)this + 48);
        v46 = *((_QWORD *)this + 16);
        v47 = v22;
        v45[0] = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (_DWORD)v17,
          (unsigned int)&unk_180191922,
          v18,
          v19,
          (__int64)v45,
          (__int64)&v46,
          (__int64)&v49,
          (__int64)&v43,
          (__int64)&v44,
          (__int64)&v41,
          (__int64)&v52);
      }
    }
    v23 = *v5;
    if ( *v5 )
    {
      v49 = 0LL;
      if ( v50 )
      {
        v39 = v51;
        if ( v51 <= v42 )
          v39 = v42;
        v51 = v39;
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, int, __int64 *))(*(_QWORD *)v23 + 48LL))(
                v23,
                *((unsigned int *)this + 24),
                *((_QWORD *)this + 16),
                &v49,
                1,
                &v51);
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, int, __int64 *))(*(_QWORD *)v23 + 32LL))(
                v23,
                *((unsigned int *)this + 24),
                *((_QWORD *)this + 16),
                &v49,
                1,
                &v42);
      }
      v4 = v24;
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4B7,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v24);
      if ( v4 == -2147417848 )
      {
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v5);
        v4 = 0;
      }
    }
    CAudioStream::NotifyVolumeChanged(this);
    if ( this != (CAudioStream *)-144LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44A,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v9,
    v40);
  return v10;
}
