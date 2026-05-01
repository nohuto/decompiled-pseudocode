/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x180099604
 * Callers:
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetStringTableItemFromStringRef @ 0x1800996F0 (SdbpGetStringTableItemFromStringRef.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (unsigned int)SdbpGetStringTableItemFromStringRef(a1, a2, &v3, &v4) && v3 && v4 )
    return SdbpGetMappedTagData(v4, v3);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetMappedStringFromTable",
    890,
    (unsigned int)"SdbpGetStringTableItemFromStringRef failed to get tagid for string ref");
  return 0LL;
}
