/*
 * XREFs of sub_1C001313C @ 0x1C001313C
 * Callers:
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 * Callees:
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0013220 @ 0x1C0013220 (sub_1C0013220.c)
 *     sub_1C004ADF8 @ 0x1C004ADF8 (sub_1C004ADF8.c)
 */

void __fastcall sub_1C001313C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  void *v6; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !sub_1C0008B84(a4) )
    goto LABEL_8;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1792) + 36LL), 0, 1) )
    sub_1C0008990(a4, 0, 0, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 40), &LockHandle);
  sub_1C0013220(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1792));
  if ( byte_1C0093BE8 )
  {
    if ( (*(_BYTE *)(a4 + 451) & 2) != 0 )
    {
      if ( (byte_1C0093A02 & 0x10) == 0 )
        goto LABEL_7;
      v6 = &unk_1C0088AB0;
    }
    else
    {
      if ( (byte_1C0093A02 & 0x10) == 0 )
        goto LABEL_7;
      v6 = &unk_1C0089440;
    }
    sub_1C004ADF8(
      *(_QWORD *)(a4 + 24),
      (_DWORD)v6,
      v5,
      **(_QWORD **)(a4 + 1792),
      *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
      *(_BYTE *)(a4 + 96),
      *(_BYTE *)(a4 + 97),
      *(_BYTE *)(a4 + 98),
      1);
  }
LABEL_7:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1784));
LABEL_8:
  if ( *(_DWORD *)(a4 + 3344) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 24) + 896LL) + 48LL)
                                                    + 932LL));
}
