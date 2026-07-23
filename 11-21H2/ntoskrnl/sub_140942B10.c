/*
 * XREFs of sub_140942B10 @ 0x140942B10
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_1407750C0 @ 0x1407750C0 (sub_1407750C0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140942B10(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 778 && (v1 == 778 || v1 > 781 && v1 <= 783);
}
