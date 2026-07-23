/*
 * XREFs of sub_1409A332C @ 0x1409A332C
 * Callers:
 *     sub_1409A33CC @ 0x1409A33CC (sub_1409A33CC.c)
 *     sub_1409A3E48 @ 0x1409A3E48 (sub_1409A3E48.c)
 *     sub_1409A4000 @ 0x1409A4000 (sub_1409A4000.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1409A8894 @ 0x1409A8894 (sub_1409A8894.c)
 */

void __fastcall sub_1409A332C(unsigned int a1)
{
  __int64 v2; // rbx

  ExAcquireResourceExclusiveLite(&stru_140C1C0A0, 1u);
  if ( qword_140C1C108 )
    sub_1402E2D20((unsigned __int64)&stru_140C1C1A0, qword_140C1C108, 0, 0, (__int64)&stru_140C1C160);
  else
    KeCancelTimer(&stru_140C1C1A0);
  if ( a1 == 4 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - qword_140C1C140) > 0x1312D00 )
      sub_1409A8894(4LL);
    qword_140C1C140 = v2;
  }
  else
  {
    sub_1409A8894(a1);
  }
  ExReleaseResourceLite(&stru_140C1C0A0);
}
