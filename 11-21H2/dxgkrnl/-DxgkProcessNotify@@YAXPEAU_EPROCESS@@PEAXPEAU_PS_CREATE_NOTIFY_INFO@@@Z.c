/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C000E490
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  DXGFASTMUTEX *v18; // [rsp+68h] [rbp+17h] BYREF
  char v19; // [rsp+70h] [rbp+1Fh]
  unsigned int v20; // [rsp+78h] [rbp+27h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh]
  char v22; // [rsp+88h] [rbp+37h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerEnter, CreateInfo, 3LL);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 3);
  if ( !CreateInfo )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2373LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v10,
            v9,
            v11,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2373LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    v19 = 0;
    v18 = (DXGFASTMUTEX *)((char *)DXGGLOBAL::m_pGlobal + 368);
    if ( DXGGLOBAL::m_pGlobal == (PVOID)-368LL )
    {
      WdLogSingleEntry1(1LL, 573LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v13,
            v12,
            v14,
            0,
            2,
            -1,
            (__int64)L"m_pMutex != NULL",
            573LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((struct _KTHREAD **)v18 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 580LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v15,
            v17,
            0,
            2,
            -1,
            (__int64)L"!m_pMutex->IsOwner()",
            580LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    DXGFASTMUTEX::Acquire(v18);
    v19 = 1;
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(Process);
    v8 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      *((_DWORD *)ProcessDxgProcess + 106) |= 0x800u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      if ( !v19 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v18, 0LL, 0LL);
      v19 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
      DXGPROCESS::DestroyDxgProcess(v8);
      if ( v19 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v18, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v18);
      v19 = 1;
      DXGPROCESS::ReleaseReference(v8);
    }
    if ( v19 )
    {
      v19 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v20);
  }
}
