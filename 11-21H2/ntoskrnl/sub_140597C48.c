/*
 * XREFs of sub_140597C48 @ 0x140597C48
 * Callers:
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 * Callees:
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_140286D4C @ 0x140286D4C (sub_140286D4C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 */

__int64 __fastcall sub_140597C48(_QWORD *BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  unsigned int v2; // ebx
  int v3; // r12d
  __int64 v4; // r13
  volatile LONG *v5; // r14
  KIRQL v6; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  BOOL v12; // r15d
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  __int64 v15; // r8
  int v16; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  int v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h]

  v1 = (ULONG_PTR)BugCheckParameter2;
  v2 = 0;
  v23 = *BugCheckParameter2;
  v3 = 0;
  v4 = 0LL;
  v5 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    if ( !*(_QWORD *)(v1 + 8) || (*(_DWORD *)(v1 + 52) & 0x40000000) == 0 )
      goto LABEL_16;
    if ( (int)sub_140286D4C(v1) < 2 )
      break;
    v22 = *(_DWORD *)(v1 + 44) - (*(_DWORD *)(v1 + 52) & 0x3FFFFFFF);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    v3 = sub_14096F8CC(v1, 0, 0);
    v12 = 0;
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( v3 >= 0 )
      v12 = v22 != *(_DWORD *)(v1 + 44) - (*(_DWORD *)(v1 + 52) & 0x3FFFFFFF);
    v4 += sub_140286920(v1, v1, 0);
    if ( v12 )
      goto LABEL_17;
    if ( v3 < 0 )
      goto LABEL_18;
LABEL_16:
    v1 = *(_QWORD *)(v1 + 16);
LABEL_17:
    if ( !v1 )
    {
LABEL_18:
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && v6 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = *((_QWORD *)v14 + 4375);
            v16 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v11 )
              sub_140418E4C((__int64)v14);
          }
        }
      }
      __writecr8(v6);
      if ( v4 )
      {
        LOBYTE(v2) = *(_QWORD *)(v23 + 64) != 0LL;
        sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v23 + 60) & 0x3FF)), v2, v4);
      }
      return (unsigned int)v3;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && v6 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v11 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v11 )
          sub_140418E4C((__int64)v19);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
