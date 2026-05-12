/*
 * XREFs of sub_1C001AF48 @ 0x1C001AF48
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 */

__int64 __fastcall sub_1C001AF48(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  char v5; // di
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v5 = sub_1C0008A7C(a1, a2, a3, 0LL);
  if ( sub_1C0008B84(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1792) + 40LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1792) + 152LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  v6 = *(_QWORD *)(v3 + 4896);
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v3 + 4896) + 88LL));
  }
  return v5 == 0 ? 0xC100000C : 0;
}
