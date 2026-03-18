/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C0217250
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0013294 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0020028 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNTARGETMODESET *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 Container; // rsi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  int v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]
  char v26; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v27; // [rsp+80h] [rbp+30h] BYREF

  v24 = -1;
  v3 = (char)a2;
  v25 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( v5 )
  {
    v10 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6, v7, v8);
    v15 = v10;
    if ( v10 < 0 )
    {
      v23 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v23 + 24) = this;
      *(_QWORD *)(v23 + 32) = v15;
    }
    else
    {
      v16 = *((_QWORD *)v9 + 14);
      if ( !v16 )
        WdLogSingleEntry0(1LL);
      if ( !*(_QWORD *)(v16 + 40) )
        WdLogSingleEntry0(1LL);
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL);
      v18 = *(_QWORD *)(Container + 48);
      v27.VidPnSourceId = -1;
      v27.VidPnTargetId = *(_DWORD *)(v16 + 24);
      v19 = VIDPN_MGR::FormalizeVidPnChange(
              v18,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              6LL,
              v3,
              &v27);
      LODWORD(v15) = v19;
      if ( v19 < 0 )
        WdLogSingleEntry3(2LL, *(unsigned int *)(v16 + 24), Container, v19);
      else
        LODWORD(v15) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v15) = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v24);
  }
  return (unsigned int)v15;
}
