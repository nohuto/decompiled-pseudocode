/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140B99900
 * Callers:
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140C69940, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140C65850, (__int64)(v2 << 25) >> 16, 0x80000000LL, 7) )
  {
    MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
