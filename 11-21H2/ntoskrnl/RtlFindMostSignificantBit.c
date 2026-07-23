/*
 * XREFs of RtlFindMostSignificantBit @ 0x14023BD00
 * Callers:
 *     sub_1406FB478 @ 0x1406FB478 (sub_1406FB478.c)
 *     sub_14096B508 @ 0x14096B508 (sub_14096B508.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
