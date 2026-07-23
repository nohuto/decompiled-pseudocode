/*
 * XREFs of sub_1405E039C @ 0x1405E039C
 * Callers:
 *     sub_1402436C8 @ 0x1402436C8 (sub_1402436C8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405E039C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r8

  v2 = 0LL;
  v3 = *(_QWORD **)(a2 + 40);
  if ( v3 != (_QWORD *)(a2 + 40) )
  {
    do
    {
      v2 += _InterlockedExchange64(v3 - 1, 0LL);
      if ( !LODWORD(v3[16 * (4LL - (int)a1) - 10]) )
        v2 += _InterlockedExchange64(v3 - 2, 0LL);
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != (_QWORD *)(a2 + 40) );
    if ( v2 )
      sub_14042A5E0(a1, v2);
  }
  return v2;
}
