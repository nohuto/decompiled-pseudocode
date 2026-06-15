/*
 * XREFs of PbmSetScreenReaderState @ 0x180031AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BC80 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PbmSetScreenReaderState(void *a1, int a2, int a3)
{
  int Process; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v10; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+2Ch] [rbp-44h]
  __int64 v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  __int64 *v16; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v18; // [rsp+98h] [rbp+28h] BYREF

  if ( g_ApplicationManager )
  {
    v18 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v18);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = 568LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)(unsigned int)Process);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
      return v6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      &v10,
      (__int64 *)&v18);
    v11 = a2;
    v13[0] = (__int64)off_18004EDE0;
    v8 = v10;
    v10 = 0LL;
    v13[1] = (__int64)v8;
    v16 = v13;
    v12 = a3;
    v14 = a2;
    v15 = a3;
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v10);
    Process = QueueGenericWorkItem(v13);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = 573LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
  }
  return 0LL;
}
