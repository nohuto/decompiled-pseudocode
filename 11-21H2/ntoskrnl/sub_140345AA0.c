/*
 * XREFs of sub_140345AA0 @ 0x140345AA0
 * Callers:
 *     sub_14023B2A0 @ 0x14023B2A0 (sub_14023B2A0.c)
 *     sub_1402481DC @ 0x1402481DC (sub_1402481DC.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_14029B8BC @ 0x14029B8BC (sub_14029B8BC.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_14035B090 @ 0x14035B090 (sub_14035B090.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 * Callees:
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 */

unsigned __int64 __fastcall sub_140345AA0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  bool v11; // zf

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 33152);
  v8 = *(unsigned int *)(a2 + 80);
  v9 = v7 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v9;
  v10 = v8 + ((v7 * *(unsigned int *)(a1 + 33208)) >> 16);
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  *(_QWORD *)(a1 + 33152) = v6;
  v11 = (*(_BYTE *)(a2 + 2) & 0xBE) == 0;
  *(_DWORD *)(a2 + 80) = v10;
  if ( !v11 )
    sub_1402B9680(a1, a2, v7, 0LL);
  if ( a3 )
    *a3 = v6;
  sub_140345B70(a1, a2, 0LL);
  return v9;
}
