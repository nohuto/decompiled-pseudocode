/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C00344B4
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 v6; // rsi
  int v7; // edi
  volatile LONG *v8; // rbx
  KIRQL v9; // al

  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v6 = Unit;
  if ( Unit )
  {
    v7 = 0x7FFFFFFF;
    v8 = (volatile LONG *)(Unit + 728);
    if ( a3 < 0x7FFFFFFF )
      v7 = a3;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 728));
    if ( v7 > *(_DWORD *)(v6 + 732) )
      v7 = *(_DWORD *)(v6 + 732);
    *(_DWORD *)(v6 + 688) = v7;
    ExReleaseSpinLockExclusive(v8, v9);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      v4,
      BYTE1(a2),
      BYTE2(a2));
  }
}
