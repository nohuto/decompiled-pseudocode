/*
 * XREFs of sub_14022F150 @ 0x14022F150
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14039F05C @ 0x14039F05C (sub_14039F05C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022F150(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v6; // rcx
  char *v7; // rax
  __int64 result; // rax
  int v9; // ebx
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // rdx
  int v13; // eax
  struct _KPRCB *v14; // r9
  __int64 v15; // r8
  bool v16; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C15B28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    *(_DWORD *)(v10 + 20) |= v3;
  }
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    LOBYTE(v3) = 1;
    v9 = sub_14022F2FC((unsigned int)dword_140C095D0, v3, &unk_140C15A60);
    sub_14022F244();
    **(_DWORD **)a2 = v9;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C15B28);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = *((_QWORD *)CurrentPrcb + 4375);
      v13 = *(_DWORD *)(v12 + 20);
      *(_DWORD *)(v12 + 20) = v13;
      if ( !v13 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  __writecr8(0xFuLL);
  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
    *(_DWORD *)(a2 + 24) = sub_14039F05C(*v6);
  v7 = *(char **)(a2 + 16);
  if ( v7 )
    byte_140D0501A = *v7;
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v15 = *((_QWORD *)v14 + 4375);
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C(v14);
      }
    }
  }
  __writecr8(v4);
  return result;
}
