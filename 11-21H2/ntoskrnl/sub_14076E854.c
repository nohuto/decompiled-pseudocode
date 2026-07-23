/*
 * XREFs of sub_14076E854 @ 0x14076E854
 * Callers:
 *     sub_14076E82C @ 0x14076E82C (sub_14076E82C.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall sub_14076E854(__int64 a1)
{
  bool v1; // zf
  _OWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8) == 0LL;
  Buffer[1] = 0LL;
  if ( v1 )
    return 0LL;
  Buffer[0] = *(_OWORD *)a1;
  return RtlLookupElementGenericTableAvl(&stru_140C44720, Buffer);
}
