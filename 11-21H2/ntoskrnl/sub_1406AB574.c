/*
 * XREFs of sub_1406AB574 @ 0x1406AB574
 * Callers:
 *     sub_140233054 @ 0x140233054 (sub_140233054.c)
 *     RtlEmptyAtomTable @ 0x1409B8CC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 */

void __fastcall sub_1406AB574(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = sub_1407A1AC0(*(_QWORD *)(a1 + 16), v5);
  if ( v4 )
    sub_1407A2B78(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
