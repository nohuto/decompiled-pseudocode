/*
 * XREFs of ExDeleteResourceLite @ 0x14028A7C0
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_14028A78C @ 0x14028A78C (sub_14028A78C.c)
 *     sub_140607F60 @ 0x140607F60 (sub_140607F60.c)
 *     sub_1406E5950 @ 0x1406E5950 (sub_1406E5950.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_140827238 @ 0x140827238 (sub_140827238.c)
 *     sub_14085F65C @ 0x14085F65C (sub_14085F65C.c)
 *     sub_14095BDAC @ 0x14095BDAC (sub_14095BDAC.c)
 *     sub_1409AB5A0 @ 0x1409AB5A0 (sub_1409AB5A0.c)
 *     sub_140A2296C @ 0x140A2296C (sub_140A2296C.c)
 *     sub_140A30510 @ 0x140A30510 (sub_140A30510.c)
 * Callees:
 *     sub_14021A758 @ 0x14021A758 (sub_14021A758.c)
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402AF060 @ 0x1402AF060 (sub_1402AF060.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  LONG i; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  ERESOURCE_THREAD OwnerThread; // rbx
  __int64 v21; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int v24; // ebp
  __int64 *j; // rdi
  ULONG_PTR v26; // rbx
  __int64 v27; // rdx
  int v28; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v31; // [rsp+50h] [rbp+8h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x8A60u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_140461A66(&dword_140D310C0, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v31 = 0;
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v6 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v6 + 1;
        if ( v6 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&dword_140D310C0, 0x1Fu) )
    {
      v7 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v7 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v8 = *(_DWORD *)(v7 + 24) - 1;
          *(_DWORD *)(v7 + 24) = v8;
          if ( !v8 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      v31 = sub_140220C30(&dword_140D310C0, CurrentIrql);
    }
    for ( i = dword_140D310C0; (dword_140D310C0 & 0xBFFFFFFF) != 0x80000000; i = dword_140D310C0 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&dword_140D310C0, 0x40000000u);
      sub_1402F32E0(&v31);
    }
  }
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(&dword_140D310C0, retaddr);
  else
    dword_140D310C0 = 0;
  v12 = KeGetCurrentPrcb();
  v13 = *((_QWORD *)v12 + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)v12 + 32) <= 1u )
    {
      v14 = *(_DWORD *)(v13 + 24) - 1;
      *(_DWORD *)(v13 + 24) = v14;
      if ( !v14 )
        sub_140418E4C(v12);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_51;
  }
  if ( OwnerThread )
  {
    if ( (unsigned __int8)sub_1402AF060(Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
    {
      LOBYTE(v21) = 1;
      sub_1402ACD80(OwnerThread, v21, 0LL, 0LL);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1444));
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDelete((PVOID)OwnerThread);
  }
LABEL_51:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v24 = 1;
    for ( j = (__int64 *)&OwnerTable->0; v24 < OwnerTable->TableSize; ++v24 )
    {
      j += 2;
      v26 = sub_14021A758(j - 1);
      if ( v26 )
      {
        if ( (unsigned __int8)sub_1402AF060(Resource)
          && (*(_DWORD *)j & 2) == 0
          && (struct _KTHREAD *)v26 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v26, 2uLL);
        }
        v28 = *(_DWORD *)j;
        if ( (*(_DWORD *)j & 1) != 0 )
        {
          LOBYTE(v27) = 1;
          sub_1402ACD80(v26, v27, 0LL, 0LL);
          v28 = *(_DWORD *)j;
        }
        if ( (v28 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v26 + 1444));
          v28 = *(_DWORD *)j;
        }
        if ( (v28 & 2) != 0 )
          ObDereferenceObjectDeferDelete((PVOID)v26);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreePoolWithTag(OwnerTable, 0);
  }
  return 0;
}
