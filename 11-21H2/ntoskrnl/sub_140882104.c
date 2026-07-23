/*
 * XREFs of sub_140882104 @ 0x140882104
 * Callers:
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 * Callees:
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 */

__int64 __fastcall sub_140882104(__int64 a1, int *a2, int a3)
{
  __int64 v3; // r10
  int v7; // eax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) <= *(_DWORD *)(v3 + 20) )
  {
LABEL_4:
    v7 = *(_DWORD *)(v3 + 16);
    *(_DWORD *)(v3 + 16) = v7 + a3;
  }
  else
  {
    while ( (unsigned int)sub_1407DA854() != -1073741823 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) <= *(_DWORD *)(v3 + 20) )
        goto LABEL_4;
    }
    v3 = 0LL;
    v7 = 0xFFFF;
  }
  *a2 = v7;
  return v3;
}
