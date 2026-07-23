/*
 * XREFs of sub_14039F200 @ 0x14039F200
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_140290FCC @ 0x140290FCC (sub_140290FCC.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

void __fastcall sub_14039F200(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KeAcquireSpinLockAtDpcLevel(&qword_140C2BB58);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C2BB50;
      v2 = qword_140C2BB48 == (_QWORD)&qword_140C2BB48;
      if ( *(__int64 **)qword_140C2BB50 != &qword_140C2BB48 )
        __fastfail(3u);
      *v1 = &qword_140C2BB48;
      v1[1] = v3;
      *v3 = v1;
      qword_140C2BB50 = (__int64)v1;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C2BB58);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C2BB08, 0LL, 0LL);
  }
}
