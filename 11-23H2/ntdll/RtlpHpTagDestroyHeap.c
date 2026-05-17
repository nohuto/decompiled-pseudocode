/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x180063A04
 * Callers:
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x180063A6C (RtlpWalkHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180065DA4 (RtlpHpTaggableHeap.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  signed __int64 v2; // r8
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]
  __int128 v5; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, &v3, v2) < 0 )
        break;
      if ( (BYTE2(v4) & 0x11) == 0x11 )
      {
        if ( (_WORD)v5 )
          v2 = _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)(*(_QWORD *)(qword_180185DF8 + 8LL * (unsigned __int16)v5 - 8) + 32LL),
                 -*((_QWORD *)&v3 + 1));
      }
    }
  }
}
