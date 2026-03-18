/*
 * XREFs of DxgkWaitForVerticalBlankEvent @ 0x1C0176F60
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  char v12; // [rsp+60h] [rbp-18h]
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v3 = a1;
  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2026);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2026);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v9 = *(_QWORD *)v3;
  v4 = *(_DWORD *)(v3 + 8);
  v13 = -800000LL;
  v5 = DxgkWaitForVerticalBlankEventInternal(v9, HIDWORD(v9), v4, 0, 0LL, (__int64)&v13, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v10);
  }
  return v5;
}
