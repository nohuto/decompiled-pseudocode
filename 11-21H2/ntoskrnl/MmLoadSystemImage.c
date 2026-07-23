/*
 * XREFs of MmLoadSystemImage @ 0x14075FC00
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1405529D0 (IoLoadCrashDumpDriver.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1409528A8 @ 0x1409528A8 (sub_1409528A8.c)
 * Callees:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return sub_14075FC44(a1, a2, a3, 0, a4, a5, a6);
}
