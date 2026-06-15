/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x180014510
 * Callers:
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18004B8B0 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18004BD60 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@PEBG@Z @ 0x180105530 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@.c)
 *     ?OnConnectedToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180108960 (-OnConnectedToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180108E00 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnStreamStarted@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x1801094A0 (-OnStreamStarted@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnStreamStopped@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180109510 (-OnStreamStopped@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x18010A200 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x18010A370 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(CSharedStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  int v5; // ecx
  void *v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  void *v11; // rdx
  __int64 v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-21h]
  __int128 v15; // [rsp+40h] [rbp-19h]
  __int128 v16; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp+7h] BYREF
  struct _RTL_CRITICAL_SECTION **v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]

  if ( !g_UseNewStreamManagementCodePath )
  {
    if ( !*((_QWORD *)this + 56) )
      return;
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 368);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
    v14 = v2;
    v15 = *((_OWORD *)this + 107);
    v16 = v15;
    EtwEventActivityIdControl(4LL, &v16);
    if ( *((_DWORD *)this + 91) )
    {
      if ( *((_BYTE *)this + 408) )
        goto LABEL_27;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 57) + 40LL))(
        *((_QWORD *)this + 57),
        *((_QWORD *)this + 56));
      *((_BYTE *)this + 408) = 1;
      v10 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v9,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v10 <= 4u )
        goto LABEL_27;
      v11 = &unk_180193599;
    }
    else
    {
      if ( !*((_BYTE *)this + 408) )
        goto LABEL_27;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 57) + 48LL))(
        *((_QWORD *)this + 57),
        *((_QWORD *)this + 56));
      *((_BYTE *)this + 408) = 0;
      v10 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v12,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v10 <= 4u )
        goto LABEL_27;
      v11 = &unk_18019356C;
    }
    v13 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 213);
    v18 = &v13;
    v19 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v10, (_DWORD)v11, 0, 0, 3, (__int64)v17);
LABEL_27:
    EtwEventActivityIdControl(4LL, &v16);
    goto LABEL_28;
  }
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1744);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 1744));
  v13 = v2;
  if ( *((_QWORD *)this + 217) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
    v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 368);
    v15 = *((_OWORD *)this + 107);
    v16 = v15;
    EtwEventActivityIdControl(4LL, &v16);
    if ( *((_DWORD *)this + 91) )
    {
      if ( !*((_BYTE *)this + 408) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 217) + 40LL))(*((_QWORD *)this + 217));
        *((_BYTE *)this + 408) = 1;
        v4 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            v3,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *v4 > 4u )
        {
          if ( (unsigned __int8)tlgKeywordOn(v4, 512LL) )
          {
            v6 = &unk_1801935F3;
LABEL_13:
            v13 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 213);
            v18 = &v13;
            v19 = 8LL;
            tlgWriteTransfer_EtwEventWriteTransfer(v5, (_DWORD)v6, 0, 0, 3, (__int64)v17);
          }
        }
      }
    }
    else if ( *((_BYTE *)this + 408) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 217) + 48LL))(*((_QWORD *)this + 217));
      *((_BYTE *)this + 408) = 0;
      v8 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v7,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *v8 > 4u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v8, 512LL) )
        {
          v6 = &unk_1801935C6;
          goto LABEL_13;
        }
      }
    }
    EtwEventActivityIdControl(4LL, &v16);
    if ( this != (CSharedStreamGroupProxy *)-368LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  }
LABEL_28:
  if ( v2 )
    LeaveCriticalSection(v2);
}
