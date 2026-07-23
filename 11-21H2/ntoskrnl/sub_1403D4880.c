/*
 * XREFs of sub_1403D4880 @ 0x1403D4880
 * Callers:
 *     <none>
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 */

__int64 __fastcall sub_1403D4880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax

  v6 = 0;
  if ( a6 == 1 )
  {
    if ( *a5 )
    {
      v8 = sub_140213A40(0LL, 1346584902, 0, 0);
      if ( v8 )
      {
        if ( (*a5 & *(unsigned __int16 *)(v8 + 109)) == *a5 )
          return 2;
      }
    }
  }
  return v6;
}
