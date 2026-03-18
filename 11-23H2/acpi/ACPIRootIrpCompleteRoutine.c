/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1C0001410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR BugCheckParameter3, __int64 a2, struct _KEVENT *a3)
{
  KIRQL v6; // al
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // r8
  void *v10; // r10
  unsigned int v11; // ecx
  unsigned int v12; // edx

  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v7 && *(_DWORD *)(v7 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v9 = &unk_1C00622D0;
    v10 = &unk_1C00622D0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(void **)(v7 + 608);
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = *(void **)(v7 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
      if ( v11 >= 0x1A )
        v11 = 26;
      v12 = v11;
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qsLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        5,
        11,
        (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
        a2,
        (__int64)(&ACPIDispatchPnpTableNames)[v11],
        *(_DWORD *)(a2 + 48),
        v7,
        (__int64)v9,
        (__int64)v10);
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
