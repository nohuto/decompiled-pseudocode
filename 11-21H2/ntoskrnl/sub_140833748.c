/*
 * XREFs of sub_140833748 @ 0x140833748
 * Callers:
 *     sub_14083347C @ 0x14083347C (sub_14083347C.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     sub_140B15B24 @ 0x140B15B24 (sub_140B15B24.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140833748(struct _EX_RUNDOWN_REF *a1, int a2, ULONG_PTR a3, ULONG_PTR a4)
{
  memset(a1, 0, 0x40uLL);
  a1->Count = 0LL;
  a1[2].Count = (ULONG_PTR)sub_1403DC0C0;
  a1[3].Count = (ULONG_PTR)a1;
  LODWORD(a1[5].Count) = 0;
  ExInitializeRundownProtection(a1 + 4);
  HIDWORD(a1[5].Ptr) = a2;
  a1[6].Count = a3;
  a1[7].Count = a4;
}
