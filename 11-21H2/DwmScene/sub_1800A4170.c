/*
 * XREFs of sub_1800A4170 @ 0x1800A4170
 * Callers:
 *     sub_1800A4350 @ 0x1800A4350 (sub_1800A4350.c)
 * Callees:
 *     sub_1800A4630 @ 0x1800A4630 (sub_1800A4630.c)
 *     sub_1800A4984 @ 0x1800A4984 (sub_1800A4984.c)
 */

__int64 __fastcall sub_1800A4170(
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
  v15 = sub_1800A4984(Src, a12, a6, a7);
  sub_1800A4630(a1, (_DWORD)Src, v15, a11, a12);
  return sub_1800A4630(v15, a10, a3, v12, a5 - a12);
}
