/*
 * XREFs of sub_1402EB398 @ 0x1402EB398
 * Callers:
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 * Callees:
 *     sub_1402EB3F8 @ 0x1402EB3F8 (sub_1402EB3F8.c)
 */

__int64 __fastcall sub_1402EB398(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // eax
  _DWORD *v4; // r10

  if ( (dword_140D06880 & 0x8000) != 0 && (*(_BYTE *)(a1 + 4) & 8) != 0 && (a2 & 2) != 0 )
  {
    v2 = 1LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 && (_DWORD)a2 )
  {
    v2 = 0LL;
LABEL_5:
    v3 = sub_1402EB3F8(a1, a2, v2);
    *v4 = v3;
    return 1LL;
  }
  return 0LL;
}
