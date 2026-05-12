/*
 * XREFs of sub_1C001AEA8 @ 0x1C001AEA8
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 * Callees:
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 */

__int64 __fastcall sub_1C001AEA8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // di
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = sub_1C0008990(a1, a2, 0, 0LL);
  if ( sub_1C0008B84(a1) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1792) + 40LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1792) + 160LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  v5 = *(_QWORD *)(v2 + 4896);
  if ( v5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 4896) + 96LL));
  }
  return !v4 ? 0xC100000C : 0;
}
