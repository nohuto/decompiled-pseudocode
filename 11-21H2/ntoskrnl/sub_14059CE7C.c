/*
 * XREFs of sub_14059CE7C @ 0x14059CE7C
 * Callers:
 *     sub_140216C84 @ 0x140216C84 (sub_140216C84.c)
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 *     sub_1405B7340 @ 0x1405B7340 (sub_1405B7340.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14059CE7C(__int64 a1, char a2, KIRQL a3)
{
  __int64 v3; // rbx
  KIRQL v4; // di
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  if ( a3 == 17 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1344));
  v7 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v8 = *(_QWORD **)(v3 + 1576);
    if ( *v8 == v3 + 1568 )
    {
      *v7 = v3 + 1568;
      *(_QWORD *)(a1 + 16) = v8;
      *v8 = v7;
      *(_QWORD *)(v3 + 1576) = v7;
      goto LABEL_10;
    }
LABEL_7:
    __fastfail(3u);
  }
  v9 = *(_QWORD **)(v3 + 1592);
  if ( *v9 != v3 + 1584 )
    goto LABEL_7;
  *v7 = v3 + 1584;
  *(_QWORD *)(a1 + 16) = v9;
  *v9 = v7;
  *(_QWORD *)(v3 + 1592) = v7;
  if ( *(_QWORD *)(a1 + 32) != -1LL )
    ++*(_DWORD *)(v3 + 2028);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1344));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v14 = (v13 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return sub_14035AD70((volatile signed __int32 *)(v3 + 1520), 0LL, 1LL, v10, a2);
}
