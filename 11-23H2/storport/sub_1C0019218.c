/*
 * XREFs of sub_1C0019218 @ 0x1C0019218
 * Callers:
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 *     WorkerRoutine @ 0x1C0063A70 (WorkerRoutine.c)
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C0018568 @ 0x1C0018568 (sub_1C0018568.c)
 *     sub_1C00192A8 @ 0x1C00192A8 (sub_1C00192A8.c)
 *     sub_1C0019C38 @ 0x1C0019C38 (sub_1C0019C38.c)
 */

void __fastcall sub_1C0019218(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    sub_1C0019C38(*(_QWORD *)(a1 + 56));
    sub_1C0016130(v1);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  sub_1C00192A8(a1);
  v3 = (_QWORD **)(a1 + 120);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    sub_1C0018568((__int64)(v4 + 2));
    ExFreePoolWithTag(v4 - 2, 0x74456152u);
  }
}
