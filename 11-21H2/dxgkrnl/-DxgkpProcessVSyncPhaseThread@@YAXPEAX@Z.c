/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C019E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C019E878 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  struct DXGADAPTER *v6; // rcx
  struct DXGADAPTER *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+38h] [rbp-71h] BYREF
  __int64 v11; // [rsp+40h] [rbp-69h]
  char v12; // [rsp+48h] [rbp-61h]
  char v13; // [rsp+51h] [rbp-58h]
  _BYTE v14[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v15; // [rsp+60h] [rbp-49h]
  struct DXGADAPTER *v16; // [rsp+68h] [rbp-41h]
  char v17; // [rsp+70h] [rbp-39h]
  __int64 v18; // [rsp+78h] [rbp-31h]
  _BYTE v19[8]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-9h]
  struct DXGADAPTER *v21; // [rsp+A8h] [rbp-1h]
  char v22; // [rsp+B0h] [rbp+7h]
  char *v23; // [rsp+B8h] [rbp+Fh]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2209;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2209);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2209);
  v4 = *(_QWORD *)a1;
  v5 = a1[2];
  v13 = 0;
  v16 = (struct DXGADAPTER *)v4;
  v17 = 0;
  v18 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    v15 = -1LL;
  }
  v21 = (struct DXGADAPTER *)v4;
  v22 = 0;
  v23 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    v20 = -1LL;
  }
  COREACCESS::AcquireShared((COREACCESS *)v19, 0LL);
  if ( *((_DWORD *)v21 + 50) == 1 )
  {
    if ( v16 == v21 || (COREACCESS::AcquireShared((COREACCESS *)v14, 0LL), *((_DWORD *)v16 + 50) == 1) )
    {
      v13 = 1;
      DXGADAPTER::ProcessVSyncPhaseTimer((DXGADAPTER *)v4, v5);
      goto LABEL_10;
    }
    COREACCESS::Release((COREACCESS *)v14);
  }
  COREACCESS::Release((COREACCESS *)v19);
LABEL_10:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v4 + 16), (struct DXGADAPTER *)v4);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 4024) + 4 * v5), 0);
  if ( v13 )
  {
    if ( v16 != v21 )
      COREACCESS::Release((COREACCESS *)v14);
    if ( !v22 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
    v22 = 0;
    v6 = v21;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v21 + 23) )
    {
      DXGADAPTER::ReleaseCoreResource(v21, v23);
      v6 = v21;
    }
    v23 = 0LL;
    v13 = 0;
  }
  else
  {
    v6 = v21;
  }
  if ( v6 )
  {
    if ( v22 )
    {
      COREACCESS::Release((COREACCESS *)v19);
      v6 = v21;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v6 + 2), v6);
  }
  v7 = v16;
  if ( v16 )
  {
    if ( v17 )
    {
      COREACCESS::Release((COREACCESS *)v14);
      v7 = v16;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v7 + 2), v7);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v10);
  }
}
