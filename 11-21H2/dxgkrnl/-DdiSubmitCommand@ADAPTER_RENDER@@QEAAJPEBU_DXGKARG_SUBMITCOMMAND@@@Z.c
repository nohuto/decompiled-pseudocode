/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C001B038
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C001B020 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  int v8; // esi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v23; // al
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // [rsp+60h] [rbp-29h] BYREF
  __int64 v28; // [rsp+68h] [rbp-21h]
  char v29; // [rsp+70h] [rbp-19h]
  _BYTE v30[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v27) = -1;
  v28 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v29 = 1;
    LODWORD(v27) = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5013LL);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 5013);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v30,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 520LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
         a2);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v23 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v23);
  }
  if ( v7 )
  {
    v11 = *((int *)v7 + 12);
    if ( (_DWORD)v11 != v8 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v11, v8, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v12[3] = v9;
  v12[4] = a2->hDevice;
  v12[5] = a2->DmaBufferSegmentId;
  v12[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v12[7] = DmaBufferSize;
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v14);
  v15[3] = a2->DmaBufferSubmissionStartOffset;
  v15[4] = a2->DmaBufferSubmissionEndOffset;
  v15[5] = a2->pDmaBufferPrivateData;
  v15[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v15[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v17);
  v18[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v18[4] = a2->SubmissionFenceId;
  v18[5] = a2->NodeOrdinal;
  v18[6] = a2->Flags.Value;
  if ( (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL, v9);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v25,
          v24,
          v26,
          0,
          0,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          v27,
          v28);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, (unsigned int)v27);
  return (unsigned int)v9;
}
