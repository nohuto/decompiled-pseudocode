/*
 * XREFs of sub_14029F580 @ 0x14029F580
 * Callers:
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_14022CA54 @ 0x14022CA54 (sub_14022CA54.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     sub_14059D69C @ 0x14059D69C (sub_14059D69C.c)
 *     sub_1405A1AE8 @ 0x1405A1AE8 (sub_1405A1AE8.c)
 *     sub_140661EF0 @ 0x140661EF0 (sub_140661EF0.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_140927128 @ 0x140927128 (sub_140927128.c)
 * Callees:
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 */

char __fastcall sub_14029F580(__int64 *a1, __int64 a2, __int64 a3)
{
  char result; // al

  *(_BYTE *)a1 |= 2u;
  if ( *a1 < 0 )
    sub_14034EE30(a1, a2, a3);
  *((_BYTE *)a1 + 17) = 1;
  result = *(_BYTE *)a1 & 0xFD;
  *(_BYTE *)a1 = result;
  return result;
}
