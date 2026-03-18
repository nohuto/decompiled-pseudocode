/*
 * XREFs of ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x1C034570C
 * Callers:
 *     ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0345698 (-RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppqqqqqqPR7_EtwWriteTransfer @ 0x1C005A258 (McTemplateK0ppqqqqqqPR7_EtwWriteTransfer.c)
 *     ?CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ @ 0x1C03098D8 (-CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@TrackedWorkloadMonitor@@QEAAXXZ @ 0x1C03458D8 (-ReportState@TrackedWorkloadMonitor@@QEAAXXZ.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0345B20 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::ReportState(DXGTRACKEDWORKLOAD *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edi
  int v7; // edi
  unsigned int v8; // edi
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rdx
  DXGGLOBAL *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v14[8]; // [rsp+60h] [rbp-238h] BYREF
  DXGPUSHLOCK *v15; // [rsp+68h] [rbp-230h]
  int v16; // [rsp+70h] [rbp-228h]
  _BYTE v17[512]; // [rsp+80h] [rbp-218h] BYREF

  memset(v17, 0, sizeof(v17));
  v6 = a2 - 444;
  if ( !v6 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_17;
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v17, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventCreateTrackedWorkload;
    goto LABEL_16;
  }
  v7 = v6 - 37;
  if ( !v7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_17;
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v17, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventReportTrackedWorkload;
    goto LABEL_16;
  }
  if ( v7 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v17, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventDestroyTrackedWorkload;
LABEL_16:
    McTemplateK0ppqqqqqqPR7_EtwWriteTransfer(
      v4,
      v9,
      v5,
      this,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 20),
      *((_DWORD *)this + 286),
      *((_DWORD *)this + 287),
      *((_DWORD *)this + 288),
      *((_DWORD *)this + 26),
      v8,
      v17);
  }
LABEL_17:
  if ( (qword_1C012F870 & 0x10000000) != 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v15);
    v16 = 2;
    TrackedWorkloadMonitor::ReportState((DXGTRACKEDWORKLOAD *)((char *)this + 328));
    DXGTRACKEDWORKLOAD::ReportStats(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  }
  DXGGLOBAL_GetGlobal();
  DXGGLOBAL::CreatePerfDataWorkerThreadIfNeeded(v11, v10, v12, v13);
}
