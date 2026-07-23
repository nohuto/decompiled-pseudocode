/*
 * XREFs of IopLoadCrashdmpImage @ 0x140864CE0
 * Callers:
 *     <none>
 * Callees:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall IopLoadCrashdmpImage(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, PVOID *a6)
{
  return MmLoadSystemImageEx(a1, a2, a3, 0LL, a4 | 0x20u, a5, a6);
}
