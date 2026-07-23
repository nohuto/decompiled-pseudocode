/*
 * XREFs of sub_140225440 @ 0x140225440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402254C0 @ 0x1402254C0 (sub_1402254C0.c)
 */

char sub_140225440()
{
  __int64 i; // rbx
  unsigned int j; // edi

  if ( dword_140C204A4 )
  {
    for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        if ( *(_QWORD *)(136LL * j + *(_QWORD *)(i + 312)) )
          sub_1402254C0();
      }
    }
  }
  return 1;
}
