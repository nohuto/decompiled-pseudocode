/*
 * XREFs of sub_14029B270 @ 0x14029B270
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_1402DA4C0 @ 0x1402DA4C0 (sub_1402DA4C0.c)
 * Callees:
 *     sub_14029B7B0 @ 0x14029B7B0 (sub_14029B7B0.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 */

__int64 __fastcall sub_14029B270(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !byte_140C22260 )
  {
    *(_BYTE *)(a1 + 32) = 1;
    result = __rdtsc();
    v3 = result;
    *(_QWORD *)(a1 + 33400) += result - *(_QWORD *)(a1 + 33152);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
      result = sub_14029B7B0(a1);
    *(_QWORD *)(a1 + 33152) = v3;
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
      result = sub_140571770(v4, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
  }
  return result;
}
