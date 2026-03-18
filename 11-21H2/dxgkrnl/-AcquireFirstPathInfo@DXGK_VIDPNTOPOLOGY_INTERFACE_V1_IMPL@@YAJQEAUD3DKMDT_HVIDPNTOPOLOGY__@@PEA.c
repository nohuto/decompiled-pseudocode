/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01CF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C001AFF0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // r12
  __int64 v18; // r9
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  __int128 *v23; // rax
  __int64 v24; // xmm1_8
  __int64 v25; // r8
  int v27; // ebx
  __int64 v28; // rdx
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  unsigned __int64 v31; // r15
  void *v32; // rax
  void *v33; // rdi
  void *v34; // rcx
  struct DMMVIDPNPRESENTPATH *(__fastcall *v35)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-78h] BYREF
  int v36; // [rsp+28h] [rbp-70h]
  int v37; // [rsp+30h] [rbp-68h] BYREF
  __int64 v38; // [rsp+38h] [rbp-60h]
  char v39; // [rsp+40h] [rbp-58h]
  __int128 v40; // [rsp+48h] [rbp-50h] BYREF
  __int64 v41; // [rsp+58h] [rbp-40h]
  __int128 v42; // [rsp+60h] [rbp-38h] BYREF
  __int64 v43; // [rsp+70h] [rbp-28h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 32);
  v7 = 0;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7036);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 7036);
  v10 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v10 + 24) = this;
  *(_QWORD *)(v10 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v27 = -1073741811;
LABEL_41:
    v7 = v27;
    goto LABEL_20;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v27 = -1071774976;
    goto LABEL_41;
  }
  v36 = 0;
  v35 = DMMVIDPNTOPOLOGY::GetFirstPath;
  if ( !*((_BYTE *)this + 192) )
  {
    WdLogSingleEntry1(2LL, this);
    v27 = -1071774921;
LABEL_39:
    WdLogSingleEntry2(2LL, this, v27);
    goto LABEL_41;
  }
  FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(this);
  if ( !FirstPath )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = &v35;
    v27 = 1075708747;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v35, v28) + 24) = this;
    goto LABEL_41;
  }
  v15 = operator new[](0x178uLL, 0x4E506456u, 256LL, v14);
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, this);
    v34 = 0LL;
    goto LABEL_38;
  }
  v17 = (_DWORD *)(v15 + 16);
  *(_DWORD *)v15 = 305419896;
  *(_QWORD *)(v15 + 8) = FirstPath;
  memset((void *)(v15 + 16), 0, 0x168uLL);
  operator delete(0LL);
  *(_DWORD *)(v16 + 28) = *((_DWORD *)FirstPath + 28);
  v19 = *((_DWORD *)FirstPath + 29);
  if ( (unsigned int)(v19 - 254) > 1 && v19 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)FirstPath + 12) + 96LL) + 407LL) )
    v19 = 1;
  *(_DWORD *)(v16 + 36) = v19;
  *(_DWORD *)(v16 + 24) = *((_DWORD *)FirstPath + 26);
  *v17 = *(_DWORD *)(*((_QWORD *)FirstPath + 11) + 24LL);
  *(_DWORD *)(v16 + 20) = *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL);
  *(_DWORD *)(v16 + 80) = *((_DWORD *)FirstPath + 41);
  v20 = *((_DWORD *)FirstPath + 43);
  *(_DWORD *)(v16 + 84) = v20;
  *(_DWORD *)(v16 + 348) = *((_DWORD *)FirstPath + 42);
  if ( v20 == 2 )
  {
    if ( *((_DWORD *)FirstPath + 43) != 2 )
      WdLogSingleEntry0(1LL);
    v21 = *((_DWORD *)FirstPath + 44);
  }
  else
  {
    v21 = 0;
  }
  *(_DWORD *)(v16 + 88) = v21;
  if ( v16 == -32 )
    WdLogSingleEntry0(1LL);
  *(_DWORD *)(v16 + 32) = *((_DWORD *)FirstPath + 30);
  if ( v16 == -40 )
    WdLogSingleEntry0(1LL);
  *(_DWORD *)(v16 + 40) = *((_DWORD *)FirstPath + 31);
  v22 = *((_QWORD *)FirstPath + 23);
  if ( v22 )
  {
    v29 = *(_OWORD *)(v22 + 16);
    v30 = *(_QWORD *)(v22 + 32);
    v23 = &v40;
    v40 = v29;
    v41 = v30;
  }
  else
  {
    v23 = &v42;
    v42 = *(_OWORD *)&g_DefaultGammaRamp.Type;
    v43 = 0LL;
  }
  v24 = *((_QWORD *)v23 + 2);
  *(_OWORD *)(v16 + 352) = *v23;
  *(_QWORD *)(v16 + 368) = v24;
  if ( !*(_QWORD *)(v16 + 368) )
    goto LABEL_19;
  v31 = *(_QWORD *)(v16 + 360);
  v32 = (void *)operator new[](v31, 0x4E506456u, 256LL, v18);
  v33 = v32;
  if ( !v32 )
  {
    WdLogSingleEntry1(6LL, v31);
    v34 = (void *)v16;
LABEL_38:
    operator delete(v34);
    v27 = -1073741801;
    goto LABEL_39;
  }
  memmove(v32, *(const void **)(v16 + 368), v31);
  *(_QWORD *)(v16 + 368) = v33;
LABEL_19:
  operator delete(0LL);
  *(_QWORD *)a2 = v17;
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v25, v37);
  return v7;
}
