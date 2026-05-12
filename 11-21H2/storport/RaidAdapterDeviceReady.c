/*
 * XREFs of RaidAdapterDeviceReady @ 0x1C0034588
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 */

void __fastcall RaidAdapterDeviceReady(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi
  volatile LONG *v5; // rbx
  KIRQL v6; // al

  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    v5 = (volatile LONG *)(Unit + 728);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 728));
    *(_DWORD *)(v4 + 688) = 0;
    ExReleaseSpinLockExclusive(v5, v6);
    RaidRestartIoQueue(v4, 0);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      v2,
      BYTE1(a2),
      BYTE2(a2));
  }
}
