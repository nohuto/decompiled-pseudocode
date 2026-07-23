/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402F4410
 * Callers:
 *     sub_14023A7D0 @ 0x14023A7D0 (sub_14023A7D0.c)
 *     sub_14023B5A0 @ 0x14023B5A0 (sub_14023B5A0.c)
 *     sub_14023F108 @ 0x14023F108 (sub_14023F108.c)
 *     sub_14024AC78 @ 0x14024AC78 (sub_14024AC78.c)
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402DA81C @ 0x1402DA81C (sub_1402DA81C.c)
 *     sub_1402EA7E4 @ 0x1402EA7E4 (sub_1402EA7E4.c)
 *     sub_1402F36BC @ 0x1402F36BC (sub_1402F36BC.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402F411C @ 0x1402F411C (sub_1402F411C.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     sub_1409E101C @ 0x1409E101C (sub_1409E101C.c)
 *     sub_140A68BE8 @ 0x140A68BE8 (sub_140A68BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = dword_140D0E5E0[a2];
  result = *a1;
  v4 = v2 >> 6;
  if ( (unsigned int)result > v2 >> 6 )
  {
    result = *(_QWORD *)&a1[4 * v4 + 4] & ~(1LL << (v2 & 0x3F));
    *(_QWORD *)&a1[4 * v4 + 4] = result;
  }
  return result;
}
