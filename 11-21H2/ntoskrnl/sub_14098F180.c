/*
 * XREFs of sub_14098F180 @ 0x14098F180
 * Callers:
 *     <none>
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_1405CFBF0 @ 0x1405CFBF0 (sub_1405CFBF0.c)
 *     sub_1405CFC70 @ 0x1405CFC70 (sub_1405CFC70.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14098F180(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  sub_140A48330(a1);
  if ( (byte_140C23908 & 2) != 0 )
  {
    KeCancelTimer(&stru_140C238C0);
    byte_140C23908 |= 4u;
    sub_1405CFC70();
    sub_140369B48(3LL, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    sub_140256CA0(&stru_1400381F0);
    qword_140C238A0 = MEMORY[0xFFFFF78000000008];
    sub_1405CFBF0();
  }
  sub_140A47CF8(v2, v1);
  if ( *((_DWORD *)KeGetCurrentThread() + 121) )
    __fastfail(0x20u);
  return 0LL;
}
