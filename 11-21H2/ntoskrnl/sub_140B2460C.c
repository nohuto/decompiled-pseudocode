/*
 * XREFs of sub_140B2460C @ 0x140B2460C
 * Callers:
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140B2460C(__int16 a1, __int16 a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v5; // rcx
  _WORD *i; // rax
  unsigned int v8; // edx
  int v9; // edx

  if ( !byte_140C54C24 )
    KeBugCheckEx(
      0x5Cu,
      0x8000uLL,
      (ULONG_PTR)"HalpGetChipHacks",
      (ULONG_PTR)"minkernel\\hals\\lib\\errata\\chiphacks.c",
      0x127uLL);
  v5 = 0LL;
  if ( !dword_140C54C20 )
    return 3221226021LL;
  for ( i = (_WORD *)qword_140C54C28; *i != a1 || i[1] != a2; i += 4 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= dword_140C54C20 )
      return 3221226021LL;
  }
  v8 = *(_DWORD *)(qword_140C54C28 + 8 * v5 + 4);
  if ( a3 && HIBYTE(v8) && a3 >= HIBYTE(v8) )
    v8 >>= 12;
  v9 = v8 & 0xFFF;
  *a4 = v9;
  if ( (dword_140C4C200 & 2) != 0 )
    *a4 = v9 & 0xFFFFFFFE;
  return 0LL;
}
