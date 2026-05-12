/*
 * XREFs of StorpSetUnitAttributes @ 0x1C0047248
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r9
  _DWORD *Adapter; // r10
  __int64 Unit; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h]

  HIBYTE(v8) = 0;
  if ( a3 >= 8 )
    return 3238002694LL;
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  if ( !v4 )
    return 3238002694LL;
  if ( *(_WORD *)v4 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v4 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v8) = *(_WORD *)(v4 + 8);
  BYTE2(v8) = *(_BYTE *)(v4 + 10);
  Unit = RaidAdapterFindUnit((__int64)Adapter, v8);
  if ( !Unit )
    return 3238002694LL;
  *(_DWORD *)(Unit + 1824) ^= (*(_DWORD *)(Unit + 1824) ^ (2 * a3)) & 0xE;
  return 0LL;
}
