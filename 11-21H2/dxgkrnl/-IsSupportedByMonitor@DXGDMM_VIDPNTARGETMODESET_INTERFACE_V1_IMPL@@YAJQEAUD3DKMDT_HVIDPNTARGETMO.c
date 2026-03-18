/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8DFC (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        unsigned __int8 *a3,
        unsigned __int8 *const a4)
{
  __int64 v6; // r12
  unsigned __int8 v8; // r15
  __int64 v9; // rax
  DMMVIDPNTARGETMODE *v10; // rsi
  __int64 v11; // r10
  unsigned int v12; // eax
  int IsSupportedByMonitor; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  _D3DKMDT_MODE_PRUNING_REASON v18; // [rsp+20h] [rbp-20h] BYREF
  int v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  char v21; // [rsp+38h] [rbp-8h]
  unsigned __int8 v22; // [rsp+80h] [rbp+40h] BYREF

  v19 = -1;
  v20 = 0LL;
  v6 = (unsigned int)a2;
  v8 = 1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 6017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6017);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 6017);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_19:
    v14 = -1073741811;
    goto LABEL_11;
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, a3);
    goto LABEL_19;
  }
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v9 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( v9 )
  {
    v10 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v9 + 24, v6);
    if ( v10 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 112) + 96LL) + 84LL);
      if ( v12 < 0xF || v12 > 0x11 )
        v8 = 0;
      v18 = D3DKMDT_MPR_UNINITIALIZED;
      v22 = 0;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v10, v8, &v22, &v18);
      v14 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor < 0 )
      {
        WdLogSingleEntry2(7LL, v10, IsSupportedByMonitor);
      }
      else
      {
        v14 = 0;
        *a3 = v22;
        *(_DWORD *)a4 = v18;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v6, this);
      v14 = -1071774959;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v14 = -1071774967;
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  }
  return v14;
}
