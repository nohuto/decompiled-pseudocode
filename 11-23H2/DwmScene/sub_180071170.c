/*
 * XREFs of sub_180071170 @ 0x180071170
 * Callers:
 *     sub_180072560 @ 0x180072560 (sub_180072560.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_180071A9C @ 0x180071A9C (sub_180071A9C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180071170(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _QWORD *v5; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(_QWORD **)(a2 + 8);
  for ( i = *(_QWORD **)a2; i != v3; i += 2 )
  {
    if ( *(_BYTE *)(*i + 136LL) && !*(_DWORD *)(*i + 176LL) )
    {
      v5 = (_QWORD *)a1[1];
      if ( v5 == (_QWORD *)a1[2] )
      {
        sub_180071228(a1, a1[1], i);
      }
      else
      {
        sub_18001246C(v5, i);
        a1[1] += 16LL;
      }
    }
  }
  sub_180071A9C(*a1, a1[1], (__int64)(a1[1] - *a1) >> 4, sub_180097F10, 1);
  return a1;
}
