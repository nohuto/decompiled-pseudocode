/*
 * XREFs of sub_140281A3C @ 0x140281A3C
 * Callers:
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     sub_1406CF50C @ 0x1406CF50C (sub_1406CF50C.c)
 *     sub_1406F77DC @ 0x1406F77DC (sub_1406F77DC.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140281A3C(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( result )
    result += 72LL;
  return result;
}
