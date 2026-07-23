/*
 * XREFs of sub_1405F97E0 @ 0x1405F97E0
 * Callers:
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 *     sub_1405FA010 @ 0x1405FA010 (sub_1405FA010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F97E0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*(_BYTE *)(a1 + 776) )
    v2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * a2) >> 13;
  if ( a2 != *(_DWORD *)(a1 + 16 * (v2 + 78LL)) )
    return 8;
  return v2;
}
