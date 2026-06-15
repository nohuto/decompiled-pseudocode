/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18000F860
 * Callers:
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x1800102F0 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180010320 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z @ 0x1800F7FC0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800FA9F0 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800FAAF0 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(CSharedStreamGroupProxy *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  void *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-19h] BYREF
  char *v8; // [rsp+38h] [rbp-11h] BYREF
  __int128 v9; // [rsp+40h] [rbp-9h]
  __int128 v10; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v11[32]; // [rsp+60h] [rbp+17h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+8Ch] [rbp+43h]

  if ( *((_QWORD *)this + 46) )
  {
    v2 = (char *)this + 288;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
    v8 = v2;
    v9 = *((_OWORD *)this + 102);
    v10 = v9;
    EtwEventActivityIdControl(4LL, &v10);
    if ( *((_DWORD *)this + 70) )
    {
      if ( *((_BYTE *)this + 328) )
        goto LABEL_10;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 47) + 40LL))(
        *((_QWORD *)this + 47),
        *((_QWORD *)this + 46));
      *((_BYTE *)this + 328) = 1;
      v4 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v3,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *v4 <= 4u )
        goto LABEL_10;
      v5 = &unk_180189D2C;
    }
    else
    {
      if ( !*((_BYTE *)this + 328) )
        goto LABEL_10;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 47) + 48LL))(
        *((_QWORD *)this + 47),
        *((_QWORD *)this + 46));
      *((_BYTE *)this + 328) = 0;
      v4 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v6,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *v4 <= 4u )
        goto LABEL_10;
      v5 = &unk_180189CFF;
    }
    v7 = *((_QWORD *)this + 203);
    v12 = &v7;
    v13 = 8;
    v14 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v4, (_DWORD)v5, 0, 0, 3, (__int64)v11);
LABEL_10:
    EtwEventActivityIdControl(4LL, &v10);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  }
}
