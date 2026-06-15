/*
 * XREFs of ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18001D120
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001450 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z @ 0x18000BC40 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BC80 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyVoipCallStateChange(
        CWindowsPolicyManager *this,
        struct IAudioProcess *a2,
        unsigned __int8 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+48h] [rbp-9h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp-1h] BYREF
  __int64 v16; // [rsp+58h] [rbp+7h] BYREF
  char v17; // [rsp+60h] [rbp+Fh]
  __int64 v18[2]; // [rsp+68h] [rbp+17h] BYREF
  char v19; // [rsp+78h] [rbp+27h]
  __int64 *v20; // [rsp+A0h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( g_ApplicationManager )
  {
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      &v15,
      (__int64)a2);
    v6 = AudioSrvPolicyManagerTelemetryProvider::Provider(v5);
    if ( *(_DWORD *)v6 > 4u )
    {
      v7 = *(_QWORD *)a2;
      LODWORD(v22) = v4;
      LODWORD(v14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v7 + 40))(a2);
      v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        (unsigned __int8 *)dword_18005534D,
        v8,
        v9,
        (void **)&v16,
        (__int64)&v14,
        (__int64)&v22);
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      &v16,
      (__int64 *)&v15);
    v17 = v4;
    v18[0] = (__int64)off_18004D778;
    v10 = v16;
    v16 = 0LL;
    v18[1] = v10;
    v20 = v18;
    v19 = v4;
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v16);
    v11 = QueueGenericWorkItem(v18);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B0,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v15);
      return v12;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v15);
  }
  return 0LL;
}
