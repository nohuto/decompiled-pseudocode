/*
 * XREFs of sub_1402DCF44 @ 0x1402DCF44
 * Callers:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 *     IoInvalidateDeviceState @ 0x1402DCE00 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     sub_14055F378 @ 0x14055F378 (sub_14055F378.c)
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_140831280 @ 0x140831280 (sub_140831280.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_140852BC0 @ 0x140852BC0 (sub_140852BC0.c)
 *     sub_14085D640 @ 0x14085D640 (sub_14085D640.c)
 *     sub_1409428B8 @ 0x1409428B8 (sub_1409428B8.c)
 *     IoRequestDeviceRemovalForReset @ 0x140945420 (IoRequestDeviceRemovalForReset.c)
 *     sub_140946B60 @ 0x140946B60 (sub_140946B60.c)
 *     sub_140956BF8 @ 0x140956BF8 (sub_140956BF8.c)
 *     sub_140956ED0 @ 0x140956ED0 (sub_140956ED0.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14025013C @ 0x14025013C (sub_14025013C.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_1402DD9AC @ 0x1402DD9AC (sub_1402DD9AC.c)
 *     sub_1402E08F8 @ 0x1402E08F8 (sub_1402E08F8.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402DCF44(PVOID Object, int a2, char a3, __int64 a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 Pool2; // rdi
  char v12; // al
  __int128 *v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // r13
  __int64 *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // edx
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // rdx
  __int64 v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // edx
  unsigned int v42; // [rsp+28h] [rbp-40h]
  __int128 v43; // [rsp+30h] [rbp-38h]

  v43 = *(_OWORD *)&xmmword_140010DE8;
  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  Pool2 = ExAllocatePool2(64LL, 96LL, 846229072LL);
  if ( !Pool2 )
    return 3221225626LL;
  if ( !Object )
    Object = (PVOID)*((_QWORD *)qword_140C46278 + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *(_QWORD *)(Pool2 + 16) = Object;
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_BYTE *)(Pool2 + 28) = a3;
  *(_QWORD *)(Pool2 + 32) = a4;
  *(_QWORD *)(Pool2 + 40) = a5;
  *(_QWORD *)(Pool2 + 48) = a6;
  *(_DWORD *)(Pool2 + 72) = 1;
  *(_BYTE *)(Pool2 + 76) = 0;
  *(_BYTE *)(Pool2 + 88) = 0;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  if ( !a2 )
    goto LABEL_33;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      v12 = 1;
LABEL_9:
      if ( v12 && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
      {
        v13 = (__int128 *)*((_QWORD *)KeGetCurrentThread() + 190);
        if ( v13 )
        {
          v43 = *v13;
        }
        else if ( (unsigned __int8)sub_1402E08F8() && KeGetPcr()->NtTib.Self )
        {
          v43 = *(_OWORD *)&KeGetPcr()->NtTib.Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_33:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(_OWORD *)(Pool2 + 56) = v43;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  sub_1402DD9AC(v14, (unsigned int)a2, 0LL, 0LL);
  v42 = *(_DWORD *)(Pool2 + 24);
  v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
  if ( ++dword_140C24270 == 1 )
    sub_14025013C(4);
  KeReleaseSpinLockFromDpcLevel(&qword_140C24268);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = *((_QWORD *)CurrentPrcb + 4375);
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v25 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  v16 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
  v17 = MEMORY[0xFFFFF78000000008];
  ++dword_140C1CB98;
  ++*((_DWORD *)&qword_140C1CB60 + v42 + 16);
  if ( byte_140C1CC10 )
  {
    ++*((_DWORD *)&qword_140C1CB60 + v42 + 108);
    if ( dword_140C1CB98 == 1 )
      qword_140C1CC20 = v17;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = *((_QWORD *)v27 + 4375);
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v25 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v25 )
          sub_140418E4C(v27);
      }
    }
  }
  __writecr8(v16);
  v18 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v19 = (__int64 *)qword_140C44A48;
  if ( *(__int64 **)qword_140C44A48 != &qword_140C44A40 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &qword_140C44A40;
  *(_QWORD *)(Pool2 + 8) = v19;
  *v19 = Pool2;
  qword_140C44A48 = Pool2;
  if ( a7 )
  {
    ++*(_DWORD *)(Pool2 + 72);
    *a7 = Pool2;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    byte_140C44A00 = 1;
    KeResetEvent(&stru_140C44A20);
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = *((_QWORD *)v39 + 4375);
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
          *(_DWORD *)(v40 + 20) &= v41;
          if ( v25 )
            sub_140418E4C(v39);
        }
      }
    }
    __writecr8(v18);
    sub_1402DD320(0LL);
  }
  else if ( byte_140C44A00 || !byte_140C46298 )
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = *((_QWORD *)v35 + 4375);
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
          *(_DWORD *)(v36 + 20) &= v37;
          if ( v25 )
            sub_140418E4C(v35);
        }
      }
    }
    __writecr8(v18);
  }
  else
  {
    byte_140C44A00 = 1;
    KeResetEvent(&stru_140C44A20);
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = *((_QWORD *)v31 + 4375);
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
          *(_DWORD *)(v32 + 20) &= v33;
          if ( v25 )
            sub_140418E4C(v31);
        }
      }
    }
    __writecr8(v18);
    stru_140C449E0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1402DD320;
    stru_140C449E0.Parameter = 0LL;
    stru_140C449E0.List.Flink = 0LL;
    ExQueueWorkItem(&stru_140C449E0, DelayedWorkQueue);
  }
  return 0LL;
}
