/*
 * XREFs of sub_180056C80 @ 0x180056C80
 * Callers:
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 */

_QWORD *__fastcall sub_180056C80(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    a1[1] = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 12));
    if ( sub_180011A3C(a1[1]) )
    {
      v5 = a1[1];
      *a1 = *v4;
      sub_180010530(v5);
    }
  }
  return a1;
}
