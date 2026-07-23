/*
 * XREFs of sub_1406602DC @ 0x1406602DC
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_140660534 @ 0x140660534 (sub_140660534.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140765B84 @ 0x140765B84 (sub_140765B84.c)
 */

__int64 __fastcall sub_1406602DC(__int64 a1)
{
  _DWORD *v2; // rbx
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // eax

  v2 = (_DWORD *)sub_140765B84();
  v3 = 0;
  v4 = v2[75];
  if ( ((v4 - 771) & 0xFFFFFFEE) == 0 && v4 != 787 )
  {
    v5 = v2[99];
    if ( (v5 & 0x6000) != 0 && !(unsigned int)sub_140660534(v2, (unsigned int)v2[101]) )
    {
      sub_140764FE4(v6);
      v5 = v2[99];
    }
    v7 = *(_DWORD *)(a1 + 144);
    if ( (v5 & 0x6000) != 0 )
    {
      if ( (v7 & 2) == 0 )
        return (unsigned int)-1073741811;
    }
    else if ( (v7 & 2) != 0 )
    {
      sub_140765114(v2, *(unsigned int *)(a1 + 16), 0LL);
    }
    else
    {
      sub_14066044C(v2);
    }
  }
  return v3;
}
