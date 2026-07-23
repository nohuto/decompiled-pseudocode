/*
 * XREFs of sub_140B2F90C @ 0x140B2F90C
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

_BYTE *sub_140B2F90C()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C1D114 = 100;
  byte_140C1E1C4 = 100;
  result = &unk_140C1E1C6;
  do
  {
    *(result - 4272) = 100;
    *result = 100;
    *(result - 4293) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140C1D108 = 0;
  word_140C1E1B8 = 0;
  dword_140C1D110 = 1;
  dword_140C1E1C0 = 1;
  dword_140C1D10C = 1;
  dword_140C1E1BC = 1;
  word_140C1D104 = 24902;
  word_140C1E1B4 = 24902;
  byte_140C1D106 = 20;
  byte_140C1E1B6 = 20;
  return result;
}
