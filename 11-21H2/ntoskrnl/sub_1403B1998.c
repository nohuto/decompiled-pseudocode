/*
 * XREFs of sub_1403B1998 @ 0x1403B1998
 * Callers:
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403B6A70 (PoFxCompleteDevicePowerNotRequired.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 *     sub_1405CCCFC @ 0x1405CCCFC (sub_1405CCCFC.c)
 * Callees:
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_1403B19D4 @ 0x1403B19D4 (sub_1403B19D4.c)
 */

__int64 __fastcall sub_1403B1998(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( (_DWORD)result == 1 )
  {
    if ( a3 )
      sub_140355350(a3);
    return sub_1403B19D4(a1, a2);
  }
  return result;
}
