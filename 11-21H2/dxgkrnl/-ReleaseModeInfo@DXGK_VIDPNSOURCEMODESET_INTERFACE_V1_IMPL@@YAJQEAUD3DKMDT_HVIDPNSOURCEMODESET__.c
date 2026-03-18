/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C018B120
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v9; // rdx
  char *v10; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rax
  char *v12; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rax
  __int64 v14; // r8
  int v16; // eax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7004);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 7004);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v16 = -1071774960;
LABEL_23:
    v3 = v16;
    goto LABEL_15;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, this);
    v16 = -1071774968;
    goto LABEL_23;
  }
  v9 = a2 - 4;
  if ( *((_DWORD *)a2 - 4) != 305419896 )
  {
    WdLogSingleEntry1(2LL, v9);
    v3 = -1071774960;
    goto LABEL_15;
  }
  v10 = (char *)*((_QWORD *)v9 + 1);
  if ( v10 )
  {
    v11 = this[6];
    if ( v11 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(this + 6) || (v12 = (char *)v11 - 8) == 0LL )
    {
LABEL_20:
      WdLogSingleEntry2(2LL, v9, this);
      v3 = -1071774928;
      goto LABEL_15;
    }
    while ( v12 != v10 )
    {
      v13 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 1);
      if ( v13 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(this + 6) )
      {
        v12 = (char *)v13 - 8;
        if ( v12 )
          continue;
      }
      goto LABEL_20;
    }
  }
  operator delete(a2 - 4);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v14, v17);
  return v3;
}
