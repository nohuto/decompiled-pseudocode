/*
 * XREFs of sub_1405D837C @ 0x1405D837C
 * Callers:
 *     sub_140293CD0 @ 0x140293CD0 (sub_140293CD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405D837C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 60);
  result = a2;
  if ( v2 )
    return (a2 << 16) / v2;
  return result;
}
