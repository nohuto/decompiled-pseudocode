/*
 * XREFs of sub_18000CC20 @ 0x18000CC20
 * Callers:
 *     sub_18000A594 @ 0x18000A594 (sub_18000A594.c)
 *     sub_18000CB2C @ 0x18000CB2C (sub_18000CB2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000CC20(__int64 a1)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)a1, 0, 0);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  return a1;
}
