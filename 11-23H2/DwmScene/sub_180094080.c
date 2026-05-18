/*
 * XREFs of sub_180094080 @ 0x180094080
 * Callers:
 *     sub_180094260 @ 0x180094260 (sub_180094260.c)
 * Callees:
 *     sub_180094540 @ 0x180094540 (sub_180094540.c)
 *     sub_180094888 @ 0x180094888 (sub_180094888.c)
 */

__int64 __fastcall sub_180094080(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8,
        void *Src,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = sub_180094888(Src, a12, a6, a7);
  sub_180094540(a1, (_DWORD)Src, v15, a11, a12);
  return sub_180094540(v15, a10, a3, v12, a5 - a12);
}
