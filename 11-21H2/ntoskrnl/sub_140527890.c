/*
 * XREFs of sub_140527890 @ 0x140527890
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char sub_140527890()
{
  char v0; // di
  unsigned int i; // ebx
  unsigned __int64 v2; // rdx
  int v3; // eax

  v0 = 0;
  for ( i = 0; i < dword_140C4A11C; ++i )
  {
    v2 = qword_140C4A128 + ((unsigned __int64)i << 6);
    v3 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
    if ( (_WORD)v3 )
    {
      if ( (_BYTE)v3 )
        *(_BYTE *)(*(_QWORD *)(v2 + 8) + 8LL) = 0;
      v0 = 1;
      sub_14042A5E0(i, v2);
    }
  }
  return v0;
}
