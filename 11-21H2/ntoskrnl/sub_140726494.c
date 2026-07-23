/*
 * XREFs of sub_140726494 @ 0x140726494
 * Callers:
 *     sub_140678B98 @ 0x140678B98 (sub_140678B98.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_140725858 @ 0x140725858 (sub_140725858.c)
 *     sub_140726394 @ 0x140726394 (sub_140726394.c)
 *     sub_1407D454C @ 0x1407D454C (sub_1407D454C.c)
 * Callees:
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 */

__int64 __fastcall sub_140726494(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 1384);
  if ( !a2 || (int)sub_1402AC010(*(_QWORD *)(a1 + 1384), 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)sub_1402AC010(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      sub_1403493B0((char *)v5, 0LL, 1, a2);
  }
  return 0LL;
}
