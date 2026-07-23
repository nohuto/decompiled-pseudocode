/*
 * XREFs of sub_14058A4E8 @ 0x14058A4E8
 * Callers:
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 * Callees:
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     sub_14028AF80 @ 0x14028AF80 (sub_14028AF80.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14038868C @ 0x14038868C (sub_14038868C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_14058A4E8(__int64 a1)
{
  volatile LONG *v1; // r15
  volatile signed __int32 **v3; // rdi
  unsigned __int64 v4; // rbp
  volatile signed __int32 *i; // rbx
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // ebx
  int v14; // ecx
  __int64 v15; // rdi
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  __int64 v18; // r8
  int v19; // eax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = (volatile signed __int32 **)(a1 + 1704);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v3; ; i = *(volatile signed __int32 **)i )
  {
    if ( i == (volatile signed __int32 *)v3 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      return 0;
    }
    v6 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  sub_14028AF80((__int64)(i - 2));
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v14 = *(_DWORD *)(v6 + 56);
  v12 = 1;
  if ( (v14 & 0x20) == 0 && *(_DWORD *)(v6 + 76) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
    v15 = sub_140287FB8(v6);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = *((_QWORD *)v17 + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v11 )
            sub_140418E4C((__int64)v17);
        }
      }
    }
    __writecr8(v4);
    if ( v15 )
      sub_1405C4B8C(a1, 1LL, v15);
    return 0;
  }
  if ( (v14 & 0x20) != 0 || (unsigned int)sub_14058B0C8((PVOID)v6) )
    sub_14038868C(v6, v4, 0LL);
  else
    return 0;
  return v12;
}
