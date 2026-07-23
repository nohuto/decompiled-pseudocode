/*
 * XREFs of sub_140354698 @ 0x140354698
 * Callers:
 *     sub_140263260 @ 0x140263260 (sub_140263260.c)
 *     sub_1402D990C @ 0x1402D990C (sub_1402D990C.c)
 *     sub_1403545B0 @ 0x1403545B0 (sub_1403545B0.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403DDCA0 (KeQueryNodeActiveProcessorCount.c)
 *     sub_140568D20 @ 0x140568D20 (sub_140568D20.c)
 *     sub_14056D9C0 @ 0x14056D9C0 (sub_14056D9C0.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 *     sub_140B03BA8 @ 0x140B03BA8 (sub_140B03BA8.c)
 *     sub_140B2ED24 @ 0x140B2ED24 (sub_140B2ED24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140354698(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 2147483674LL;
  _BitScanForward((unsigned int *)&v4, v2);
  *(_DWORD *)(a1 + 8) = v2 & ~(1 << v4);
  result = 0LL;
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 24);
  return result;
}
