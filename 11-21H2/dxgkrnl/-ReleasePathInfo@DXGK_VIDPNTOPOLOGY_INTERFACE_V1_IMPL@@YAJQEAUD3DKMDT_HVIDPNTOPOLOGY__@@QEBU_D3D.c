/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C018B230
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v9; // rbx
  char *v10; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v11; // rax
  char *v12; // r8
  __int64 v13; // r8
  int v15; // eax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v16; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 7039);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v15 = -1071774951;
LABEL_23:
    v3 = v15;
    goto LABEL_12;
  }
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v15 = -1071774976;
    goto LABEL_23;
  }
  v9 = a2 - 4;
  if ( *(_DWORD *)v9 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v9);
    v3 = -1071774951;
    goto LABEL_12;
  }
  v10 = (char *)*((_QWORD *)v9 + 1);
  if ( v10 )
  {
    v11 = this[3];
    if ( v11 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3)
      || (v12 = (char *)v11 - 8, v11 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)8) )
    {
LABEL_20:
      WdLogSingleEntry2(2LL, v9, this);
      v3 = -1071774928;
      goto LABEL_12;
    }
    while ( v12 != v10 )
    {
      v16 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 1);
      v12 = (char *)v16 - 8;
      if ( v16 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
        v12 = 0LL;
      if ( !v12 )
        goto LABEL_20;
    }
  }
  operator delete[](*((void **)v9 + 46));
  operator delete(v9);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v13, v17);
  return v3;
}
