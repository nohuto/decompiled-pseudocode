/*
 * XREFs of sub_1800A4260 @ 0x1800A4260
 * Callers:
 *     sub_1800A44C0 @ 0x1800A44C0 (sub_1800A44C0.c)
 * Callees:
 *     sub_1800A46AC @ 0x1800A46AC (sub_1800A46AC.c)
 *     sub_1800A4984 @ 0x1800A4984 (sub_1800A4984.c)
 */

__int64 __fastcall sub_1800A4260(
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
  sub_1800A46AC(a1, (_DWORD)Src, v15, a11, a12);
  return sub_1800A46AC(v15, a10, a3, v12, a5 - a12);
}
