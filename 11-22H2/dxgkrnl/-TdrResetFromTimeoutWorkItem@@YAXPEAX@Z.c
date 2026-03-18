/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C030F6D0
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF0D0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C021E730 (DpiPowerArbiterThread.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C030EDD0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030F0D0 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030F580 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rsi
  struct _LUID *v4; // rdx

  v1 = a1[4];
  v3 = *(_QWORD *)(v1 + 32);
  TdrResetFromTimeout(v1);
  v4 = *(struct _LUID **)(v1 + 2904);
  if ( !v4 || KeGetCurrentThread() == (struct _KTHREAD *)v4 )
  {
    LOBYTE(v4) = 1;
    TdrCompleteRecoveryContext((char *)v1, v4, 1);
    WdLogSingleEntry4(3LL, v3, MEMORY[0xFFFFF78000000320], KeGetCurrentThread(), v1);
  }
  else
  {
    WdLogSingleEntry1(4LL, 2675LL);
  }
  if ( *(struct _KTHREAD **)(v1 + 2904) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((_QWORD *)v1, 0);
    operator delete(a1);
  }
}
