/*
 * XREFs of sub_140537A78 @ 0x140537A78
 * Callers:
 *     sub_14052E940 @ 0x14052E940 (sub_14052E940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140537A78(__int64 a1, int a2)
{
  _DWORD *v2; // r11
  __int64 v3; // r8
  int v4; // r9d
  __int64 v5; // rax

  v2 = *(_DWORD **)(a1 + 352);
  v3 = 0LL;
  v4 = 0;
  if ( *v2 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)&v2[4 * v4 + 4];
      if ( **(_DWORD **)v5 == 1 && *(unsigned __int16 *)(*(_QWORD *)v5 + 12LL) == a2 )
        break;
      if ( (unsigned int)++v4 >= *v2 )
        return v3;
    }
    return (__int64)&v2[4 * v4 + 2];
  }
  return v3;
}
