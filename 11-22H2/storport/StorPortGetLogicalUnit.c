/*
 * XREFs of StorPortGetLogicalUnit @ 0x1C0024C30
 * Callers:
 *     RaidAdapterWmiDeferredRoutine @ 0x1C0065210 (RaidAdapterWmiDeferredRoutine.c)
 *     StorPortGetLogicalUnitVrfy @ 0x1C00B1290 (StorPortGetLogicalUnitVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

_DWORD *__fastcall StorPortGetLogicalUnit(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *result; // rax
  char v3; // r9
  char v4; // r10
  char v5; // r11
  __int64 Unit; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = 0LL;
  HIBYTE(v7) = 0;
  result = RaidpPortGetAdapter(a1);
  if ( result )
  {
    LOBYTE(v7) = v5;
    BYTE1(v7) = v4;
    BYTE2(v7) = v3;
    Unit = RaidAdapterFindUnit((__int64)result, v7);
    if ( Unit )
      return *(_DWORD **)(Unit + 16);
    return (_DWORD *)v1;
  }
  return result;
}
