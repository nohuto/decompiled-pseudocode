/*
 * XREFs of PbmCastingAppStateChanged @ 0x180031490
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001450 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800028B0 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BCD0 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(void *a1, int a2)
{
  int v4; // ebx
  int Process; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp-9h] BYREF
  int v13; // [rsp+48h] [rbp-1h]
  __int64 v14[2]; // [rsp+50h] [rbp+7h] BYREF
  int v15; // [rsp+60h] [rbp+17h]
  __int64 *v16; // [rsp+88h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v18; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+77h] BYREF
  struct CProcess *v20; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 > 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v4 = 0;
  if ( g_ApplicationManager )
  {
    v20 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v20);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = 524LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)(unsigned int)Process);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
      return v6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      &v12,
      (__int64 *)&v20);
    v13 = a2;
    v14[0] = (__int64)off_18004FE10;
    v14[1] = v12;
    v16 = v14;
    v12 = 0LL;
    v15 = a2;
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v12);
    Process = QueueGenericWorkItem(v14);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = 529LL;
      goto LABEL_8;
    }
    v9 = AudioSrvPolicyManagerTelemetryProvider::Provider(v8);
    if ( *(_DWORD *)v9 > 4u )
    {
      LOBYTE(v4) = a2 == 0;
      LODWORD(v18) = v4;
      LODWORD(v19) = *((_DWORD *)v20 + 40);
      v12 = *((_QWORD *)v20 + 22);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_1800569B7,
        v10,
        v11,
        (void **)&v12,
        (__int64)&v19,
        (__int64)&v18);
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
  }
  return 0LL;
}
