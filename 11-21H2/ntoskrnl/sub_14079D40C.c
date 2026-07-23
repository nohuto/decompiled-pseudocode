/*
 * XREFs of sub_14079D40C @ 0x14079D40C
 * Callers:
 *     sub_14068F5DC @ 0x14068F5DC (sub_14068F5DC.c)
 *     sub_14079D364 @ 0x14079D364 (sub_14079D364.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14079D40C(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 1463) == 1 )
    return 6;
  v2 = *(_QWORD *)(a1 + 1296);
  if ( !v2 || !byte_140D3CA06 )
    return *((_BYTE *)&word_140D3CBEC + (dword_140D06AB0 & (unsigned int)-(a2 != 0)));
  v4 = *(unsigned int *)(v2 + 1044);
  if ( (unsigned int)v4 >= 0xA )
    v4 = *(unsigned int *)(v2 + 580);
  return *((_BYTE *)qword_140A37F60 + v4);
}
