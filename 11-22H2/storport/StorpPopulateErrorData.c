/*
 * XREFs of StorpPopulateErrorData @ 0x1C00500B4
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

void *__fastcall StorpPopulateErrorData(
        __int128 *a1,
        char a2,
        const void **a3,
        __int64 a4,
        __int16 a5,
        __int16 a6,
        _BYTE *Src,
        _BYTE *a8,
        size_t Size,
        void *a10)
{
  size_t v13; // r8
  unsigned __int64 v14; // rax
  size_t v15; // r8
  unsigned __int64 v16; // rax
  size_t v17; // r8
  void *result; // rax
  unsigned int v19; // eax

  memset_0(&unk_1C0092CC5, 0, 0x44FuLL);
  WheaErrorData = 0x54524F50524F5453LL;
  word_1C0092CB8 = 1;
  word_1C0092CBC = Size;
  word_1C0092CC0 = 1;
  word_1C0092CBA = Size + 98;
  v13 = 32LL;
  word_1C0092CBE = a6;
  word_1C0092CC2 = a5;
  byte_1C0092CC4 = a2;
  xmmword_1C0092CC8 = *a1;
  if ( *(_WORD *)a3 <= 0x20u )
    v13 = *(unsigned __int16 *)a3;
  memmove(&unk_1C0092CD8, a3[1], v13);
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  v15 = 8LL;
  if ( v14 <= 8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
  }
  memmove(&unk_1C0092CF8, Src, v15);
  v16 = -1LL;
  do
    ++v16;
  while ( a8[v16] );
  v17 = 16LL;
  if ( v16 <= 0x10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
  }
  result = memmove(&unk_1C0092D01, a8, v17);
  if ( a10 )
  {
    v19 = 1024;
    if ( (unsigned int)Size <= 0x400 )
      v19 = Size;
    return memmove(&unk_1C0092D12, a10, v19);
  }
  return result;
}
