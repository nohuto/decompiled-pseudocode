/*
 * XREFs of sub_140668C60 @ 0x140668C60
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_1406B9464 @ 0x1406B9464 (sub_1406B9464.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall sub_140668C60(_QWORD *P, void **a2)
{
  char *v2; // rsi
  void *v4; // rdi

  v2 = (char *)P[1];
  v4 = *a2;
  sub_14066960C(a2);
  ExFreePoolWithTag(P, 0);
  ObfDereferenceObjectWithTag(v4, 0x6944624Fu);
  if ( ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*(v2 - 24) ^ ((unsigned __int16)((_WORD)v2 - 48) >> 8))) == *((_BYTE *)qword_140C24FB8 + 40) )
    return sub_1406B9464(v2);
  else
    return ObfDereferenceObjectWithTag(v2, 0x6944624Fu);
}
