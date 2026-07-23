/*
 * XREFs of LZNT1FindMatchMaximum @ 0x18011B430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchMaximum(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v5; // r8d
  unsigned __int64 v6; // r11
  unsigned int v7; // ecx
  _BYTE *v8; // rdx

  v2 = *(_QWORD *)a2;
  v5 = 0;
  if ( *(_QWORD *)a2 >= (unsigned __int64)a1 )
    return 0LL;
  v6 = v2 - (_QWORD)a1;
  do
  {
    v7 = 0;
    if ( *(_DWORD *)(a2 + 16) )
    {
      v8 = a1;
      do
      {
        if ( (unsigned __int64)&a1[v7] >= *(_QWORD *)(a2 + 8) )
          break;
        if ( *v8 != v8[v6] )
          break;
        ++v7;
        ++v8;
      }
      while ( v7 < *(_DWORD *)(a2 + 16) );
    }
    if ( v7 >= v5 )
    {
      v5 = v7;
      *(_QWORD *)(a2 + 24) = v2;
    }
    ++v2;
    ++v6;
  }
  while ( v2 < (unsigned __int64)a1 );
  if ( v5 < 3 )
    return 0;
  return v5;
}
