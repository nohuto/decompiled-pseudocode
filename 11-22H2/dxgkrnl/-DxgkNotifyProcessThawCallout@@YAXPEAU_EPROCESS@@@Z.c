/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C016A940
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00150D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C016AA90 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C038B560 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessDxgProcess; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGGLOBAL *Global; // rax
  int v9; // [rsp+20h] [rbp-19h] BYREF
  __int64 v10; // [rsp+28h] [rbp-11h]
  char v11; // [rsp+30h] [rbp-9h]
  _BYTE v12[16]; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp+Fh] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+1Fh] BYREF

  v9 = -1;
  v10 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 2096);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v5 = (unsigned int *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x800) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( v5[126] )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessThaw(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 214), v5[126]);
    }
    DXGPROCESS::NotifyProcessThaw((DXGPROCESS *)v5);
    KeUnstackDetachProcess(&ApcState);
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v9);
  }
}
