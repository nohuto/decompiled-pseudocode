/*
 * XREFs of StorpPopulateLogData @ 0x1C004C728
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 * Callees:
 *     memmove @ 0x1C0024080 (memmove.c)
 */

__int64 __fastcall StorpPopulateLogData(
        _OWORD *a1,
        char a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        size_t Size,
        void *Src,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // eax

  result = a5;
  *(_QWORD *)(a8 + 8) = 0LL;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_QWORD *)(a8 + 24) = 0LL;
  *(_DWORD *)(a8 + 32) = 0;
  *(_BYTE *)(a8 + 1) = a2;
  *(_BYTE *)a8 = 1;
  *(_WORD *)(a8 + 2) = a5;
  *(_WORD *)(a8 + 4) = 1;
  *(_WORD *)(a8 + 6) = a4;
  *(_OWORD *)(a8 + 8) = *a1;
  if ( Src )
  {
    v9 = 8;
    if ( (unsigned int)Size <= 8 )
      v9 = Size;
    return (__int64)memmove((void *)(a8 + 24), Src, v9);
  }
  return result;
}
