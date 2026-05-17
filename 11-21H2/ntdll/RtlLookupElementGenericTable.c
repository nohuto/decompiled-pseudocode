/*
 * XREFs of RtlLookupElementGenericTable @ 0x18006A440
 * Callers:
 *     <none>
 * Callees:
 *     RtlLookupElementGenericTableFull @ 0x18006A470 (RtlLookupElementGenericTableFull.c)
 */

__int64 __fastcall RtlLookupElementGenericTable(__int64 a1, __int64 a2)
{
  char v3; // [rsp+40h] [rbp+18h] BYREF
  char v4; // [rsp+48h] [rbp+20h] BYREF

  return RtlLookupElementGenericTableFull(a1, a2, &v4, &v3);
}
