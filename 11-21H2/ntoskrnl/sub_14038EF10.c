/*
 * XREFs of sub_14038EF10 @ 0x14038EF10
 * Callers:
 *     sub_14038EB20 @ 0x14038EB20 (sub_14038EB20.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 */

void __fastcall sub_14038EF10(__int64 a1)
{
  __int64 v1; // rbx
  BOOL v2; // edi
  ULONG_PTR v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r10

  v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
  v2 = 0;
  if ( sub_1402C1520(v1) )
  {
    v2 = v3 == v1;
    v4 = sub_1402E4D28(v3, 4);
    *(_QWORD *)(v5 + 16) = v4;
  }
  else
  {
    *(_QWORD *)(48 * v1 - 0x220000000000LL) = v3 | *(_QWORD *)(48 * v1 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  }
  if ( sub_1402C1520(v3) )
    sub_14033C3E0(v6, v1);
  else
    sub_140313CA0(v6, v1, 0);
  if ( v2 )
    sub_1402E4BF0(v1);
}
