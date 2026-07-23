/*
 * XREFs of sub_14021A3A0 @ 0x14021A3A0
 * Callers:
 *     FsRtlAreNamesEqual @ 0x140212760 (FsRtlAreNamesEqual.c)
 *     FsRtlIsNameInExpression @ 0x140219D90 (FsRtlIsNameInExpression.c)
 *     FsRtlIsNameInUnUpcasedExpression @ 0x140219E10 (FsRtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14021A3A0(__int64 a1, unsigned __int16 *a2)
{
  __int64 ThreadServerSilo; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  __int64 v7; // r14
  unsigned int v8; // eax
  PVOID PoolWithTag; // rax
  unsigned int v10; // r11d
  __int16 v11; // ax
  __int64 v12; // r10

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  v5 = 0;
  if ( ThreadServerSilo )
    v6 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v6 = &unk_140D32580;
  v7 = v6[154];
  v8 = *a2;
  *(_WORD *)(a1 + 2) = v8;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x67727453u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v10 = *a2 >> 1;
  while ( v5 < v10 )
  {
    v11 = sub_1403477B0(v7, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v5));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v12) = v11;
    ++v5;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
