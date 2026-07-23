/*
 * XREFs of sub_1402F344C @ 0x1402F344C
 * Callers:
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 *     sub_140883F24 @ 0x140883F24 (sub_140883F24.c)
 *     sub_1409851A4 @ 0x1409851A4 (sub_1409851A4.c)
 *     sub_1409F8FB8 @ 0x1409F8FB8 (sub_1409F8FB8.c)
 * Callees:
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 */

char __fastcall sub_1402F344C(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  __int64 v5; // rtt

  do
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      sub_1407ED9FC(a1, a2, *a2);
    }
    v5 = *a2;
  }
  while ( v5 != _InterlockedCompareExchange64(a2, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}
