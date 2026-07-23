/*
 * XREFs of sub_14026E1F4 @ 0x14026E1F4
 * Callers:
 *     NaptrDnsRecordConvert @ 0x140267594 (NaptrDnsRecordConvert.c)
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_140589518 @ 0x140589518 (sub_140589518.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 *     sub_1405C20CC @ 0x1405C20CC (sub_1405C20CC.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 *     sub_140B2F9C4 @ 0x140B2F9C4 (sub_140B2F9C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14026E1F4(_QWORD *a1)
{
  __int64 result; // rax

  result = 4LL;
  do
  {
    a1[2] = 0LL;
    a1[1] = a1;
    *a1 = a1;
    a1 += 3;
    --result;
  }
  while ( result );
  return result;
}
