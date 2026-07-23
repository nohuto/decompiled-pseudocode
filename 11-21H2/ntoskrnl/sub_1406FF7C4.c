/*
 * XREFs of sub_1406FF7C4 @ 0x1406FF7C4
 * Callers:
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 */

_QWORD *__fastcall sub_1406FF7C4(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  sub_1406FFEFC(a1, CurrentThread);
  if ( a2 )
    v6 = (_QWORD *)a2[154];
  else
    v6 = *(_QWORD **)(a1 + 1248);
  while ( v6 != (_QWORD *)(a1 + 1248) )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 154)) )
    {
      v5 = v6 - 154;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  sub_1406FFE90(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
