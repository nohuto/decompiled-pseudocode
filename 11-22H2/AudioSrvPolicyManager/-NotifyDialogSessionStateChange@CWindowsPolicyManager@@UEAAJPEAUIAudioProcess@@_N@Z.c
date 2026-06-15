/*
 * XREFs of ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18001CE00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001450 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800028B0 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z @ 0x18000BC90 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BCD0 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyDialogSessionStateChange(
        CWindowsPolicyManager *this,
        struct IAudioProcess *a2,
        unsigned __int8 a3)
{
  int v4; // ebx
  const struct _tlgProvider_t *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+48h] [rbp-9h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1h] BYREF
  char v15; // [rsp+58h] [rbp+7h]
  __int64 v16[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v17; // [rsp+70h] [rbp+1Fh]
  __int64 *v18; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v20; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( g_ApplicationManager )
  {
    v5 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)this);
    if ( *(_DWORD *)v5 > 4u )
    {
      v6 = *(_QWORD *)a2;
      LODWORD(v20) = v4;
      LODWORD(v13) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 40))(a2);
      v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        (unsigned __int8 *)dword_1800563EE,
        v7,
        v8,
        (void **)&v14,
        (__int64)&v13,
        (__int64)&v20);
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      &v20,
      (__int64)a2);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(&v14, &v20);
    v15 = v4;
    v16[0] = (__int64)off_18004E748;
    v9 = v14;
    v14 = 0LL;
    v16[1] = v9;
    v18 = v16;
    v17 = v4;
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v14);
    v10 = QueueGenericWorkItem(v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C6,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
      return v11;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
  }
  return 0LL;
}
