/*
 * XREFs of sub_14026367C @ 0x14026367C
 * Callers:
 *     sub_140263558 @ 0x140263558 (sub_140263558.c)
 *     sub_1405BFFD0 @ 0x1405BFFD0 (sub_1405BFFD0.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall sub_14026367C(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int *v3; // rdi
  unsigned int *v4; // rsi
  USHORT Count; // [rsp+38h] [rbp+10h] BYREF

  Count = 0;
  v1 = a1;
  KeQueryNodeActiveAffinity(a1, 0LL, &Count);
  if ( Count )
    return v1;
  v3 = (unsigned int *)(qword_140C506D8 + 4LL * v1 * (unsigned __int16)word_140D05000);
  v4 = &v3[(unsigned __int16)word_140D05000];
  while ( ++v3 < v4 )
  {
    v1 = *v3;
    KeQueryNodeActiveAffinity(*v3, 0LL, &Count);
    if ( Count )
      return v1;
  }
  return 0xFFFFFFFFLL;
}
