/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C02C9588
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03BC258 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rbx
  KIRQL CurrentIrql; // al
  __int64 v8; // r15
  struct DXGTHREAD *v9; // rsi
  struct DXGTHREAD *Current; // rax
  int v11; // r14d
  KIRQL v12; // al
  __int64 v13; // rcx
  __int64 PrivateDriverDataSize; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h]
  char v21; // [rsp+60h] [rbp-19h]
  _BYTE v22[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5022);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 5022);
  Global = DXGGLOBAL_GetGlobal();
  if ( *((_BYTE *)Global + 1720)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1716), this) )
  {
    LODWORD(v6) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1121);
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v11 = *((_DWORD *)Current + 12);
    else
      v11 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22, this);
    v6 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 73))(*((_QWORD *)this + 35), a2);
    if ( v22[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v12 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v12);
    }
    if ( v9 )
    {
      v13 = *((int *)v9 + 12);
      if ( (_DWORD)v13 != v11 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v11, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1121);
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize <= 4 )
      v15 = 0;
    else
      v15 = *(_DWORD *)a2->pPrivateDriverData;
    WdLogSingleEntry5(4LL, v6, *((_QWORD *)this + 35), a2->hDevice, PrivateDriverDataSize, v15);
    if ( (_DWORD)v6 == -1073741823 )
    {
      WdLogSingleEntry1(4LL, -1073741823LL);
    }
    else if ( (_DWORD)v6 != -1073741811
           && (_DWORD)v6 != -1073741801
           && (_DWORD)v6 != -1073741795
           && (_DWORD)v6 != -1073741674
           && (_DWORD)v6 )
    {
      WdLogSingleEntry1(2LL, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(this);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  return (unsigned int)v6;
}
