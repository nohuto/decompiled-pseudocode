/*
 * XREFs of sub_140681FE4 @ 0x140681FE4
 * Callers:
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_1409B07D4 @ 0x1409B07D4 (sub_1409B07D4.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall sub_140681FE4(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)(a1 + 32);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 32));
  ExWaitForRundownProtectionRelease(v1);
  ExRundownCompleted(v1);
  *(_QWORD *)(a1 + 16) = -1LL;
}
