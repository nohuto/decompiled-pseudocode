/*
 * XREFs of sub_140601980 @ 0x140601980
 * Callers:
 *     sub_140A9B2E4 @ 0x140A9B2E4 (sub_140A9B2E4.c)
 *     sub_140AA4854 @ 0x140AA4854 (sub_140AA4854.c)
 * Callees:
 *     sub_140A7C400 @ 0x140A7C400 (sub_140A7C400.c)
 */

__int64 __fastcall sub_140601980(
        void *a1,
        __int64 a2,
        __int64 a3,
        void (__cdecl *FreeRoutine)(_RTL_AVL_TABLE *, PVOID))
{
  return sub_140A7C400(a1, FreeRoutine);
}
