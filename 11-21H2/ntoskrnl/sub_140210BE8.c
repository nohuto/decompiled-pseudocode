/*
 * XREFs of sub_140210BE8 @ 0x140210BE8
 * Callers:
 *     sub_140210664 @ 0x140210664 (sub_140210664.c)
 *     sub_140210988 @ 0x140210988 (sub_140210988.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 */

void __fastcall sub_140210BE8(__int64 a1)
{
  bool v2; // di
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = 0;
    if ( (unsigned int)sub_140577654(a1, 0LL) != *(_DWORD *)(a1 + 1024) )
    {
      KeAcquireSpinLockAtDpcLevel(&qword_140C2BB60);
      v3 = (_QWORD *)(a1 + 1008);
      if ( *v3 == 1LL )
      {
        v4 = (_QWORD *)qword_140C2BA28;
        v2 = qword_140C2BA20 == (_QWORD)&qword_140C2BA20;
        if ( *(__int64 **)qword_140C2BA28 != &qword_140C2BA20 )
          __fastfail(3u);
        *v3 = &qword_140C2BA20;
        v3[1] = v4;
        *v4 = v3;
        qword_140C2BA28 = (__int64)v3;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C2BB60);
      if ( v2 )
        KeInsertQueueDpc(&stru_140C2B9E0, 0LL, 0LL);
    }
  }
}
