/*
 * XREFs of sub_140517BAC @ 0x140517BAC
 * Callers:
 *     IoFlushAdapterBuffers @ 0x140393E00 (IoFlushAdapterBuffers.c)
 * Callees:
 *     sub_140416F84 @ 0x140416F84 (sub_140416F84.c)
 *     sub_140504048 @ 0x140504048 (sub_140504048.c)
 *     sub_140504198 @ 0x140504198 (sub_140504198.c)
 *     sub_140504358 @ 0x140504358 (sub_140504358.c)
 *     sub_1405192A0 @ 0x1405192A0 (sub_1405192A0.c)
 */

char __fastcall sub_140517BAC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 512) == 3 )
    {
      if ( *(_BYTE *)(a3 + 64) )
      {
        if ( (unsigned int)sub_140416F84() )
          *(_DWORD *)(a3 + 16) = 0;
      }
      else
      {
        sub_140504358(a1, (__int64 *)(a3 + 24));
      }
    }
    if ( !*(_BYTE *)(a1 + 433) )
      sub_1405192A0(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
    if ( *(_BYTE *)(a1 + 432) )
    {
      if ( a3 )
        *(_QWORD *)(a3 + 56) = a3;
      if ( *(_BYTE *)(a1 + 434) )
        sub_140504198(a1, a2, a3, a4, a5, a6, 0, 0LL);
      else
        sub_140504048(a1, a2, a3, a4, a5, a6, 0, 0LL);
    }
  }
  return 1;
}
