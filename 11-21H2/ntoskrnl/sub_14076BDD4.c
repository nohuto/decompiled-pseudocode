/*
 * XREFs of sub_14076BDD4 @ 0x14076BDD4
 * Callers:
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_14076BD4C @ 0x14076BD4C (sub_14076BD4C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14076BDD4(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      if ( (unsigned int)(*(_DWORD *)(v1 + 300) - 769) > 1 )
        return 1;
    }
  }
  return result;
}
