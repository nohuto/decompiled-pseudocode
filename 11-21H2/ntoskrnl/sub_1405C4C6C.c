/*
 * XREFs of sub_1405C4C6C @ 0x1405C4C6C
 * Callers:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_14022CBE0 @ 0x14022CBE0 (sub_14022CBE0.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_14028AED4 @ 0x14028AED4 (sub_14028AED4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C4C6C(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[12] ^ (a1[12] ^ a2) & 0x3FFFFFFFu;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
