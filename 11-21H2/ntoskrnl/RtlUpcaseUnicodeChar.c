/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1407CD620
 * Callers:
 *     sub_14021984C @ 0x14021984C (sub_14021984C.c)
 *     towupper @ 0x1403E3180 (towupper.c)
 *     sub_140659150 @ 0x140659150 (sub_140659150.c)
 *     sub_140675300 @ 0x140675300 (sub_140675300.c)
 *     sub_1406915F0 @ 0x1406915F0 (sub_1406915F0.c)
 *     sub_14069175C @ 0x14069175C (sub_14069175C.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // r8
  __int64 v4; // r9

  v1 = sub_140347DB0();
  if ( (unsigned int)v2 < 0x61 )
    return v2;
  if ( (unsigned int)v2 <= 0x7A )
    return v2 - 32;
  v4 = v1[154];
  if ( !v4 || (unsigned __int16)v2 < 0xC0u )
    return v2;
  return v2
       + *(_WORD *)(v4
                  + 2
                  * ((v2 & 0xF)
                   + *(unsigned __int16 *)(v4
                                         + 2LL
                                         * (((unsigned __int8)v2 >> 4)
                                          + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v2 >> 8))))));
}
