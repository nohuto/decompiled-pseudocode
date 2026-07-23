/*
 * XREFs of sub_140456C76 @ 0x140456C76
 * Callers:
 *     sub_140456B94 @ 0x140456B94 (sub_140456B94.c)
 *     sub_140508990 @ 0x140508990 (sub_140508990.c)
 *     sub_14050FD3C @ 0x14050FD3C (sub_14050FD3C.c)
 *     sub_14050FF6C @ 0x14050FF6C (sub_14050FF6C.c)
 *     sub_14050FFFC @ 0x14050FFFC (sub_14050FFFC.c)
 *     sub_140510080 @ 0x140510080 (sub_140510080.c)
 *     sub_14051011C @ 0x14051011C (sub_14051011C.c)
 *     sub_1405101D0 @ 0x1405101D0 (sub_1405101D0.c)
 *     sub_14051040C @ 0x14051040C (sub_14051040C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140456C76(unsigned int a1)
{
  __int64 result; // rax
  int *v3; // rdx

  result = KeGetCurrentIrql();
  v3 = (int *)&KeGetPcr()->HalReserved[8];
  if ( (unsigned __int8)result < 2u )
  {
    while ( 1 )
    {
      while ( *v3 < 0 )
        _mm_pause();
      _m_prefetchw(v3);
      result = (unsigned int)_InterlockedOr(v3, a1);
      if ( (int)result >= 0 )
        break;
      _InterlockedAnd(v3, ~a1);
    }
  }
  else
  {
    _InterlockedOr(v3, a1);
  }
  return result;
}
