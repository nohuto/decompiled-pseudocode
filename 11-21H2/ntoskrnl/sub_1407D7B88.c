/*
 * XREFs of sub_1407D7B88 @ 0x1407D7B88
 * Callers:
 *     sub_1407D7AE0 @ 0x1407D7AE0 (sub_1407D7AE0.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1407D7B88(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  void *v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rcx

  memset(a1, 0, 0xF8uLL);
  a1[26] = a2;
  a1[4] = a3;
  v8 = (void *)*((_QWORD *)KeGetCurrentThread() + 23);
  a1[27] = v8;
  ObfReferenceObject(v8);
  v9 = sub_1402CD7F0(a1[27]);
  v10 = (struct _EX_RUNDOWN_REF *)a1[4];
  a1[28] = v9;
  ExInitializeRundownProtection(v10);
  *((_DWORD *)a1 + 59) = sub_14033D720((__int64)KeGetCurrentThread());
  *a1 = 0LL;
  a1[2] = sub_1407DC0D0;
  a1[3] = a1;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 5);
  a1[22] = 0LL;
  a1[24] = sub_140989000;
  a1[25] = a1 + 5;
  KeInitializeTimerEx((PKTIMER)(a1 + 6), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a1 + 14), (PKDEFERRED_ROUTINE)sub_1405C6530, a1 + 5);
}
