/*
 * XREFs of StorpSetUnitAttributes @ 0x1C0013B6C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  __int64 v4; // r9
  _DWORD *Adapter; // r10
  __int64 Unit; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h]

  HIBYTE(v8) = 0;
  v3 = a3;
  if ( a3 >= 0x10 )
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
  *(_DWORD *)(Unit + 1872) = *(_DWORD *)(Unit + 1872) & 0xFFFFFFB1 | (2 * (v3 & 7 | (4 * (v3 & 8))));
  return 0LL;
}
