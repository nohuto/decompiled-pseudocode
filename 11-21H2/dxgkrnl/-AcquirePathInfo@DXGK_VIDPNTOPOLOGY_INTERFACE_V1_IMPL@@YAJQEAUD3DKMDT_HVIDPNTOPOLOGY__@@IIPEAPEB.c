/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6400
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000C610 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C000CADC (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0189510 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 Container; // rax
  __int64 v16; // r10
  struct DMMVIDPNTARGET *v17; // rax
  struct DMMVIDPNSOURCE *v18; // r11
  int v19; // eax
  unsigned int v20; // r15d
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  char v28; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v29)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  _BYTE *v31; // [rsp+60h] [rbp-A0h]
  _BYTE *v32; // [rsp+80h] [rbp-80h]
  _BYTE v33[80]; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+E0h] [rbp-20h]

  v26 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7035);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7035);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v11 = v7;
  v10[3] = v7;
  v10[4] = v5;
  v10[5] = this;
  v10[6] = a4;
  if ( !a4 )
  {
    WdLogSingleEntry4(2LL, 0LL, v7, v5, this);
    v12 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  v13 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v14 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, this);
    v12 = -1071774976;
    goto LABEL_24;
  }
  v25 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v13 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    WdLogSingleEntry1(2LL, v7);
    v12 = -1071774972;
    goto LABEL_24;
  }
  v17 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v16 + 312), v5);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, v5);
    v12 = -1071774971;
    goto LABEL_24;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v33,
    v18,
    v17,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v34 != 2 )
    WdLogSingleEntry0(1LL);
  v30 = 0;
  v29 = DMMVIDPNTOPOLOGY::FindByValue;
  v32 = v33;
  v31 = v33;
  v19 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v14,
          (__int64)&v29,
          &v25,
          1);
  v20 = v19;
  v12 = -1071774937;
  if ( v19 == -1071774937 )
  {
    WdLogSingleEntry3(3LL, v11, v5, v14);
    if ( v25 )
      WdLogSingleEntry0(1LL);
    goto LABEL_20;
  }
  if ( v19 < 0 )
  {
    WdLogSingleEntry4(2LL, v11, v5, v14, v19);
    v12 = v20;
LABEL_20:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v33);
    goto LABEL_24;
  }
  v21 = v25;
  if ( !v25 )
    WdLogSingleEntry0(1LL);
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v33);
  *a4 = v21;
  v12 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v26);
  }
  return v12;
}
