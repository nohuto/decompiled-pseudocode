/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x140248574
 * Callers:
 *     MiReturnImageBase @ 0x1406FC148 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140C4F3E0;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    v2 = qword_140C4F378;
  return MiZeroCfgSystemWideBitmapWorker(
           v2 + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
