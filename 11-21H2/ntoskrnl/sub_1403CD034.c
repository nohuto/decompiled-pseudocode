/*
 * XREFs of sub_1403CD034 @ 0x1403CD034
 * Callers:
 *     sub_1405057C0 @ 0x1405057C0 (sub_1405057C0.c)
 *     sub_140845F00 @ 0x140845F00 (sub_140845F00.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403CD034(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rdi
  __int64 *i; // rax
  __int64 Pool2; // rax
  __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf

  v4 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C4E280);
  for ( i = (__int64 *)qword_140C4E250; i != &qword_140C4E250; i = (__int64 *)*i )
  {
    if ( i[2] == a1 )
    {
      if ( !i[3] )
        i[3] = a2;
      goto LABEL_6;
    }
  }
  Pool2 = ExAllocatePool2(66LL, 40LL, 1147953480LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_BYTE *)(Pool2 + 32) = a3;
    v11 = (__int64 *)qword_140C4E258;
    if ( *(__int64 **)qword_140C4E258 != &qword_140C4E250 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &qword_140C4E250;
    *(_QWORD *)(Pool2 + 8) = v11;
    *v11 = Pool2;
    qword_140C4E258 = Pool2;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_6:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4E280);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v4;
}
