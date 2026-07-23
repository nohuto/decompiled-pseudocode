/*
 * XREFs of sub_140851D00 @ 0x140851D00
 * Callers:
 *     sub_140851C58 @ 0x140851C58 (sub_140851C58.c)
 *     sub_140A01E60 @ 0x140A01E60 (sub_140A01E60.c)
 * Callees:
 *     sub_1406DCC74 @ 0x1406DCC74 (sub_1406DCC74.c)
 */

__int64 __fastcall sub_140851D00(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ecx

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), 1LL, 0LL) )
  {
    return 0;
  }
  else
  {
    v4 = sub_1406DCC74(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a3);
    _InterlockedExchange64((volatile __int64 *)(a1 + 264), 0LL);
  }
  return v4;
}
