/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0315ED4
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C03171E0 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkQueryDmmInterface @ 0x1C01BEC10 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0316668 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // r14d
  struct DXGADAPTER *v7; // rdi
  struct DXGADAPTER *v8; // rbx
  unsigned int updated; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 CurrentProcess; // rax
  const wchar_t *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _DPI_INFORMATION *v28; // [rsp+30h] [rbp-D0h]
  Win81 *v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  char v32; // [rsp+68h] [rbp-98h]
  _BYTE v33[144]; // [rsp+70h] [rbp-90h] BYREF

  v30 = -1;
  v31 = 0LL;
  v6 = a3;
  v7 = this;
  v8 = (struct DXGADAPTER *)(unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2172);
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v7, 0LL);
    v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
    v15 = v10;
    if ( v10 >= 0 )
    {
      v29 = 0LL;
      v24 = DxgkQueryDmmInterface(v7, v11, &v29);
      LODWORD(v15) = v24;
      if ( v24 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v29, v7, (void *const)(unsigned int)v8, v6, a4, a5, v28);
        goto LABEL_13;
      }
      v16 = v24;
      WdLogSingleEntry3(2LL, v24, v7, v8);
      v23 = (__int64)v7;
      v18 = L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x";
      v7 = v8;
    }
    else
    {
      v16 = v10;
      CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
      WdLogSingleEntry3(2LL, v15, CurrentProcess, v7);
      v18 = L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x";
      v23 = PsGetCurrentProcess(v20, v19, v21, v22);
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v16, v23, (__int64)v7, 0LL, 0LL);
    updated = v15;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    goto LABEL_14;
  }
  updated = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Caller specified an invalid adapter handle, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 )
  {
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v30);
  }
  return updated;
}
