/*
 * XREFs of sub_18008BBA8 @ 0x18008BBA8
 * Callers:
 *     sub_18008BAC8 @ 0x18008BAC8 (sub_18008BAC8.c)
 * Callees:
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 */

__int64 __fastcall sub_18008BBA8(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v5; // rdi
  int v6; // eax

  if ( a1 != a2 )
  {
    v5 = a1 + 9;
    do
    {
      sub_1800134DC((void **)a3, (void **)(v5 - 9));
      *(_DWORD *)(a3 + 32) = *(v5 - 1);
      v6 = *v5;
      v5 += 12;
      *(_DWORD *)(a3 + 36) = v6;
      *(_BYTE *)(a3 + 40) = *((_BYTE *)v5 - 44);
      *(_DWORD *)(a3 + 44) = *(v5 - 10);
      a3 += 48LL;
    }
    while ( v5 - 9 != a2 );
  }
  return a3;
}
