/*
 * XREFs of sub_1403A2A38 @ 0x1403A2A38
 * Callers:
 *     sub_1403A2610 @ 0x1403A2610 (sub_1403A2610.c)
 *     sub_1403A2750 @ 0x1403A2750 (sub_1403A2750.c)
 *     sub_1403D5C90 @ 0x1403D5C90 (sub_1403D5C90.c)
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

__int64 __fastcall sub_1403A2A38(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  __int64 result; // rax

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 124) != 22 )
    sub_1403A2E60(a1, a2);
  result = *(_DWORD *)(v2 + 16) & 0xFFFFFFAA;
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v2 + 16) & 0xFFFFF72A | (v3 == 0 ? 0x40 : 0) | (4
                                                                                   * ((32
                                                                                     * ((v3 >> (8
                                                                                              * *(_DWORD *)(v2 + 120)
                                                                                              + 7)) & 1)) | (((*((_BYTE *)qword_140037250 + (v3 & 0xF)) + *((_BYTE *)qword_140037250 + ((unsigned __int8)v3 >> 4))) & 1) == 0)));
  return result;
}
