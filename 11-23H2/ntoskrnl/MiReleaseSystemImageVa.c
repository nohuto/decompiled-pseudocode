/*
 * XREFs of MiReleaseSystemImageVa @ 0x140B9A7DC
 * Callers:
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 */

void __fastcall MiReleaseSystemImageVa(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiReleasePrivilegedPtes();
  MiReleaseDriverPtes(0, v3, a2);
}
