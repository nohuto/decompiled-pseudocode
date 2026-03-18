/*
 * XREFs of NtGdiMaskBlt @ 0x1C008A180
 * Callers:
 *     <none>
 * Callees:
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 */

__int64 __fastcall NtGdiMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        HSURF a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  return GreMaskBlt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
