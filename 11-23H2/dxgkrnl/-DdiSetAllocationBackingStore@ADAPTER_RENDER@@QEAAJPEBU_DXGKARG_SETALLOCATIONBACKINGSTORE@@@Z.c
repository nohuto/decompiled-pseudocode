/*
 * XREFs of ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C02CABEC
 * Callers:
 *     ?ADAPTER_RENDER_DdiSetAllocationBackingStore@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C0048DD0 (-ADAPTER_RENDER_DdiSetAllocationBackingStore@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETALLOCATIONB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0009784 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A858 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B2C0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetAllocationBackingStore(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  int (__fastcall *v6)(_QWORD, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *); // rdi
  __int64 v7; // rdi
  KIRQL CurrentIrql; // al
  __int64 v9; // r15
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *Current; // rax
  int v12; // r14d
  KIRQL v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+58h] [rbp-21h]
  char v20; // [rsp+60h] [rbp-19h]
  _BYTE v21[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5157);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 5157);
  v5 = *((_QWORD *)this + 2);
  v6 = *(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *))(v5 + 1456);
  if ( v6 )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    CurrentIrql = KeGetCurrentIrql();
    v9 = CurrentIrql;
    v10 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v10 = Current) != 0LL) )
      v12 = *((_DWORD *)Current + 12);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v21,
      *((struct DXGADAPTER **)this + 2));
    v7 = v6(*(_QWORD *)(*((_QWORD *)this + 2) + 280LL), a2);
    if ( v21[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v9 != KeGetCurrentIrql() )
    {
      v13 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v13);
    }
    if ( v10 )
    {
      v14 = *((int *)v10 + 12);
      if ( (_DWORD)v14 != v12 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v12, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
    if ( (_DWORD)v7 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  else
  {
    LODWORD(v7) = -1073741637;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v18);
  }
  return (unsigned int)v7;
}
