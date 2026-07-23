/*
 * XREFs of sub_1409734B8 @ 0x1409734B8
 * Callers:
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140972D90 @ 0x140972D90 (sub_140972D90.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_14097723C @ 0x14097723C (sub_14097723C.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_1409734B8(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD **)(a1 + 2552);
  if ( !result )
  {
    if ( a2 && (v4 = sub_1402828F0(64, 0x28uLL, 0x43505048u)) != 0LL )
    {
      v4[2] = 0LL;
      v4[1] = v4;
      *v4 = v4;
      v4[4] = v4 + 3;
      v4[3] = v4 + 3;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2552), (signed __int64)v4, 0LL);
      if ( !v5 )
        return v4;
      ExFreePoolWithTag(v4, 0);
      return (_QWORD *)v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
