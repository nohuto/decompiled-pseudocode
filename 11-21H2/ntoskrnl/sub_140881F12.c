/*
 * XREFs of sub_140881F12 @ 0x140881F12
 * Callers:
 *     sub_1407BC580 @ 0x1407BC580 (sub_1407BC580.c)
 *     sub_140881FB8 @ 0x140881FB8 (sub_140881FB8.c)
 *     sub_14088204C @ 0x14088204C (sub_14088204C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140881F12(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx

  while ( (_QWORD *)*a2 != a2 )
  {
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    a2[1] = v5;
    *v5 = a2;
    v6 = (struct _EX_RUNDOWN_REF *)v4[2];
    *(_QWORD *)(a1 + 24) = v4[3];
    sub_14042A5E0(*(_QWORD *)(v6[3].Count + 8), a1);
    sub_1402AD030(v6 + 7);
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegion();
  return 0LL;
}
