/*
 * XREFs of sub_140749448 @ 0x140749448
 * Callers:
 *     sub_140749294 @ 0x140749294 (sub_140749294.c)
 * Callees:
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 */

__int64 __fastcall sub_140749448(__int64 *a1, _DWORD *a2)
{
  __int64 *i; // rbx
  __int64 *v5; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx

  for ( i = a1; ; i = v5 )
  {
    if ( *a2 )
    {
      if ( (*((_DWORD *)i + 99) & 0x2000) != 0 )
      {
        v7 = *((unsigned int *)i + 101);
        if ( (unsigned int)v7 <= 0x24 )
        {
          v8 = 0x1200001000LL;
          if ( _bittest64(&v8, v7) )
            sub_140764FE4(i);
        }
      }
    }
    if ( (*((_DWORD *)i + 99) & 0x6000) == 0 && *((_DWORD *)i + 75) == 773 )
      *(_QWORD *)&a2[2 * a2[1]++ + 2] = i[4];
    v5 = (__int64 *)i[1];
    if ( !v5 )
      break;
LABEL_9:
    ;
  }
  while ( i != a1 )
  {
    v5 = (__int64 *)*i;
    if ( *i )
      goto LABEL_9;
    if ( i[2] )
      i = (__int64 *)i[2];
  }
  return 0LL;
}
