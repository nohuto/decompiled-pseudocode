/*
 * XREFs of sub_1403CB368 @ 0x1403CB368
 * Callers:
 *     sub_140841B4C @ 0x140841B4C (sub_140841B4C.c)
 *     sub_14084205C @ 0x14084205C (sub_14084205C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1403CB368(_WORD *a1, __int64 a2, _WORD **a3)
{
  const WCHAR *v4; // r9
  __int16 v5; // r8
  _WORD *v6; // r8
  _WORD *v7; // rdi
  const WCHAR *v8; // r11
  __int16 v9; // r9
  __int16 v10; // dx
  _WORD *v11; // r9

  if ( !a3 )
    return 0LL;
  if ( !a1 )
  {
    a1 = *a3;
    if ( !*a3 )
      return 0LL;
  }
  while ( *a1 )
  {
    v4 = &dword_1400126A8;
    v5 = 92;
    while ( v5 != *a1 )
    {
      v5 = *++v4;
      if ( !*v4 )
        goto LABEL_8;
    }
    ++a1;
  }
LABEL_8:
  v6 = a1;
  v7 = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v8 = &dword_1400126A8;
      v9 = 92;
      do
      {
        v10 = v9;
        if ( v9 == *a1 )
          break;
        v10 = *++v8;
        v9 = *v8;
      }
      while ( *v8 );
      v11 = a1 + 1;
      if ( v10 )
        break;
      ++a1;
      if ( !*v11 )
        goto LABEL_16;
    }
    *a1++ = 0;
  }
LABEL_16:
  *a3 = a1;
  if ( a1 == v7 )
    return 0LL;
  return v6;
}
