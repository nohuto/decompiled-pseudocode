/*
 * XREFs of sub_1403437A0 @ 0x1403437A0
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     IoSetIoAttributionIrp @ 0x140557CE0 (IoSetIoAttributionIrp.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     sub_14020B7D4 @ 0x14020B7D4 (sub_14020B7D4.c)
 *     sub_14020C178 @ 0x14020C178 (sub_14020C178.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403437A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // ebx
  KIRQL v11; // al
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  KIRQL v14; // al
  unsigned __int64 v15; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  __int64 v24; // r8

  v2 = *(_QWORD **)(a2 + 1552);
  v4 = 0;
  if ( !v2 )
    goto LABEL_18;
  if ( (struct _KTHREAD *)a2 == KeGetCurrentThread() )
    goto LABEL_11;
  v14 = ExAcquireSpinLockShared(&dword_140C1BEA4);
  v2 = *(_QWORD **)(a2 + 1552);
  v15 = v14;
  if ( v2 )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(a2 + 1552), 0x746C6644u);
    v4 = 1;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C1BEA4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  if ( v2 )
  {
LABEL_11:
    v7 = v2[68];
  }
  else
  {
LABEL_18:
    if ( (struct _KTHREAD *)a2 == KeGetCurrentThread() )
    {
      v6 = *(_QWORD *)(a2 + 184);
      if ( v6 != *(_QWORD *)(a2 + 544) && (int)sub_14020B7D4(a1, v6) >= 0 )
      {
LABEL_17:
        v9 = 0;
        goto LABEL_7;
      }
    }
    v7 = *(_QWORD *)(a2 + 544);
  }
  v8 = 0LL;
  if ( !*(_QWORD *)(v7 + 2392) )
  {
    v9 = -1073741275;
    goto LABEL_7;
  }
  v11 = ExAcquireSpinLockShared(&dword_140C46D6C);
  v12 = *(_QWORD *)(v7 + 2392);
  v13 = v11;
  if ( v12 )
    v8 = *(_QWORD *)(v12 + 24);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C46D6C);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v24 = *((_QWORD *)v22 + 4375);
        v20 = (v23 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v23;
        if ( v20 )
          sub_140418E4C(v22);
      }
    }
  }
  __writecr8(v13);
  if ( v12 )
  {
    v9 = sub_14020C178(a1, v8, (__int64)KeGetCurrentThread(), 0);
    if ( v9 < 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
  v9 = -1073741275;
LABEL_7:
  if ( v4 )
    ObDereferenceObjectDeferDelete(v2);
  return (unsigned int)v9;
}
