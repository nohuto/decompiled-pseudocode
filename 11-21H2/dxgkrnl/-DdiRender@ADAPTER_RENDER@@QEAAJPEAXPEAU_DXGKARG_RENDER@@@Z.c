/*
 * XREFs of ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C015B1B0
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRender(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  int v3; // r14d
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD **v8; // rcx
  struct DXGGLOBAL *Global; // rax
  KIRQL CurrentIrql; // al
  __int64 v11; // r15
  struct DXGTHREAD *v12; // rdi
  struct DXGTHREAD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  KIRQL v21; // al
  int v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  char v24; // [rsp+60h] [rbp-39h]
  _BYTE v25[8]; // [rsp+68h] [rbp-31h] BYREF
  DXGPUSHLOCK *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  _BYTE v28[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v22 = -1;
  v3 = 0;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5030);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5030);
  Current = DXGPROCESS::GetCurrent();
  v8 = (struct _KTHREAD **)((char *)Current + 152);
  if ( !Current )
    v8 = 0LL;
  v26 = (DXGPUSHLOCK *)v8;
  v27 = 0;
  if ( v8 && v8[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( Current )
  {
    DXGPUSHLOCK::AcquireExclusive(v26);
    v27 = 2;
  }
  Global = DXGGLOBAL_GetGlobal();
  if ( *((_BYTE *)Global + 1721)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
         (struct DXGGLOBAL *)((char *)Global + 1716),
         *((struct DXGADAPTER **)this + 2)) )
  {
    LODWORD(v14) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL), 1u);
    CurrentIrql = KeGetCurrentIrql();
    v11 = CurrentIrql;
    v12 = 0LL;
    if ( CurrentIrql < 2u )
    {
      v13 = DXGTHREAD::GetCurrent();
      v12 = v13;
      if ( v13 )
        v3 = *((_DWORD *)v13 + 12);
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v28,
      *((struct DXGADAPTER **)this + 2));
    v14 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 728LL))(a2, a3);
    if ( v28[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v11 != KeGetCurrentIrql() )
    {
      v21 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v21);
    }
    if ( v12 )
    {
      v16 = *((int *)v12 + 12);
      if ( (_DWORD)v16 != v3 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v3, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
    v17[3] = v14;
    v17[4] = a2;
    v17[5] = a3->pDmaBuffer;
    v17[6] = a3->DmaSize;
    v17[7] = a3->pAllocationList;
    if ( (_DWORD)v14 != -1073741816
      && (_DWORD)v14 != -1073741811
      && (_DWORD)v14 != -1073741801
      && (_DWORD)v14 != -1073741795
      && (_DWORD)v14 != -1073741674
      && (_DWORD)v14 != -1073741592
      && (_DWORD)v14 != -1071775743
      && (_DWORD)v14 != -1071775232
      && (_DWORD)v14 )
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
  return (unsigned int)v14;
}
