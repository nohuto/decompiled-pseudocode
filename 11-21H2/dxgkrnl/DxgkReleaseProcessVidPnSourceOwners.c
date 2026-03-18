/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1C0338270
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01635A0 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C01641F0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct _KTHREAD **Process; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-79h] BYREF
  __int64 v12; // [rsp+28h] [rbp-71h]
  char v13; // [rsp+30h] [rbp-69h]
  _BYTE v14[8]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h]
  __int64 v16; // [rsp+50h] [rbp-49h]
  int v17; // [rsp+58h] [rbp-41h]
  __int16 v18; // [rsp+5Ch] [rbp-3Dh]
  char v19; // [rsp+5Eh] [rbp-3Bh]
  _QWORD v20[10]; // [rsp+90h] [rbp-9h] BYREF

  memset(v20, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v20[1]);
  v11 = -1;
  v12 = 0LL;
  v20[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v20[3]) = 42;
  LOBYTE(v20[6]) = -1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2033);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2033);
  v16 = 0LL;
  v18 = 0;
  v15 = a1;
  v17 = 512;
  v19 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v14, 1) >= 0 )
  {
    Process = (struct _KTHREAD **)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v14);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v20);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v14);
    v6 = 0;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4) + 24) = a1;
    v6 = -1073741811;
  }
  if ( (_BYTE)v18 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  }
  return v6;
}
