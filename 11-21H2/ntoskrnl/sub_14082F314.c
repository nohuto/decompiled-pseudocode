/*
 * XREFs of sub_14082F314 @ 0x14082F314
 * Callers:
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 * Callees:
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 */

__int64 __fastcall sub_14082F314(__int64 a1, __int64 a2, __m128i *a3, _DWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  unsigned __int16 v10; // si
  int v12; // eax

  v8 = sub_140718B68(a3);
  *a4 = -1;
  v9 = v8;
  v10 = 0;
  if ( !*(_WORD *)(a2 + 2) )
    return 3221225524LL;
  while ( 1 )
  {
    if ( v9 != *(_DWORD *)(a2 + 8LL * v10 + 8) )
      goto LABEL_3;
    v12 = sub_1407C4460(a1, a3, 0LL, *(unsigned int *)(a2 + 8LL * v10 + 4));
    if ( v12 == 2 )
      return 3221225626LL;
    if ( !v12 )
    {
      *a4 = *(_DWORD *)(a2 + 8LL * v10 + 4);
      return 0LL;
    }
LABEL_3:
    if ( ++v10 >= *(_WORD *)(a2 + 2) )
      return 3221225524LL;
  }
}
