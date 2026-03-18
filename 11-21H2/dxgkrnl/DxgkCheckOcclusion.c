/*
 * XREFs of DxgkCheckOcclusion @ 0x1C01C3920
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C01C3AFC (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  DXGGLOBAL *Global; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // sf
  bool v21; // sf
  int v22; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+58h] [rbp-60h]
  char v24; // [rsp+60h] [rbp-58h]
  _BYTE v25[24]; // [rsp+68h] [rbp-50h] BYREF
  struct tagRECT v26; // [rsp+80h] [rbp-38h] BYREF

  v3 = (__int64 *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2038);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2038);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v9 = *v3;
    if ( v9 )
    {
      v10 = *((_QWORD *)Current + 11);
      if ( (*(unsigned int (**)(void))(v10 + 208))() )
      {
        v13 = -1071775738;
        v26 = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v25, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v25, 1u);
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v10 + 360))(v9, &v26) == 1 )
        {
          Global = DXGGLOBAL_GetGlobal();
          if ( DXGGLOBAL::IsWindowVisible(Global, &v26) )
            v13 = 0;
        }
        else
        {
          WdLogSingleEntry1(2LL, 343LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
            343LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v25);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( !v24 )
          return v13;
        v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      }
      else
      {
        v13 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = -1071775738LL;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( !v24 )
          return v13;
        LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      }
      if ( v21 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v22);
      return v13;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_21:
      if ( v20 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_21;
    }
  }
  return 3221225485LL;
}
