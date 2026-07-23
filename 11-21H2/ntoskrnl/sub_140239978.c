/*
 * XREFs of sub_140239978 @ 0x140239978
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 * Callees:
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 */

void __fastcall sub_140239978(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2[3] )
    {
      sub_1402399A8(0LL, a2 + 6);
    }
    else
    {
      v2 = *a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *a2 = v2;
      a2[1] = a1;
      *(_QWORD *)(v2 + 8) = a2;
      *a1 = (__int64)a2;
    }
  }
}
