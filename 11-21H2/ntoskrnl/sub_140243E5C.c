/*
 * XREFs of sub_140243E5C @ 0x140243E5C
 * Callers:
 *     sub_140293320 @ 0x140293320 (sub_140293320.c)
 * Callees:
 *     <none>
 */

char sub_140243E5C()
{
  __int64 v0; // rcx
  char i; // r8
  unsigned int v2; // eax
  __int64 v3; // r9
  _DWORD *v4; // rdx

  v0 = qword_140D06970;
  for ( i = 1; (__int64 *)v0 != &qword_140D06970; v0 = *(_QWORD *)v0 )
  {
    v2 = *(_DWORD *)(v0 + 296);
    if ( v2 )
    {
      v3 = v2;
      v4 = (_DWORD *)(*(_QWORD *)(v0 + 312) + 56LL);
      do
      {
        if ( *(v4 - 10) != 2 && *v4 > *(_DWORD *)(v0 + 752) )
          i = 0;
        v4 += 34;
        --v3;
      }
      while ( v3 );
    }
  }
  return i;
}
