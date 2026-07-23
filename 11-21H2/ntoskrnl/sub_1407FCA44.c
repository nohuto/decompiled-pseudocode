/*
 * XREFs of sub_1407FCA44 @ 0x1407FCA44
 * Callers:
 *     sub_1407F85CC @ 0x1407F85CC (sub_1407F85CC.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_140861E8C @ 0x140861E8C (sub_140861E8C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_1407FCA44(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
