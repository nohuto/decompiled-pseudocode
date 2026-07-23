/*
 * XREFs of sub_14079878C @ 0x14079878C
 * Callers:
 *     sub_14020A620 @ 0x14020A620 (sub_14020A620.c)
 *     sub_1406881CC @ 0x1406881CC (sub_1406881CC.c)
 *     sub_140689424 @ 0x140689424 (sub_140689424.c)
 *     sub_14068A5A8 @ 0x14068A5A8 (sub_14068A5A8.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall sub_14079878C(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  v1 = 0;
  v2 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    while ( 1 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( StartingRunIndex != v1 )
        ++v2;
      v1 = StartingRunIndex + NextForwardRunClear;
      if ( StartingRunIndex + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
        return v2;
    }
    ++v2;
  }
  return v2;
}
