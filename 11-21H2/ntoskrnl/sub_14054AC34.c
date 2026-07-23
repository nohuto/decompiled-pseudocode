/*
 * XREFs of sub_14054AC34 @ 0x14054AC34
 * Callers:
 *     sub_14093B5F8 @ 0x14093B5F8 (sub_14093B5F8.c)
 * Callees:
 *     sub_14054D5E4 @ 0x14054D5E4 (sub_14054D5E4.c)
 *     sub_14054F814 @ 0x14054F814 (sub_14054F814.c)
 */

__int64 __fastcall sub_14054AC34(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  int v10; // r8d

  v10 = dword_140C0CBEC;
  if ( byte_140D06888 )
    return sub_14054F814(a1, a2, a3, dword_140C0CBEC, a5, a6, (__int64)a7, (__int64)a8, a9);
  *a7 = 0LL;
  *a8 = 0LL;
  return sub_14054D5E4(a1, a2, v10, a5, a6, a9);
}
