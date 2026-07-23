/*
 * XREFs of IoRaiseInformationalHardError @ 0x140557960
 * Callers:
 *     sub_1405B301C @ 0x1405B301C (sub_1405B301C.c)
 *     sub_1406102C0 @ 0x1406102C0 (sub_1406102C0.c)
 *     FsRtlLogCcFlushError @ 0x14092D830 (FsRtlLogCcFlushError.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  void *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  const void *v13; // rcx
  __int64 v14; // rsi
  int v15; // ebp
  const void *v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  void *v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v26; // r9
  int v27; // edx

  if ( !byte_140C4E910 )
    return 0;
  if ( Thread )
  {
    if ( (*((_DWORD *)Thread + 344) & 0x10) != 0 )
      return 0;
  }
  else if ( (*((_DWORD *)KeGetCurrentThread() + 344) & 0x10) != 0 )
  {
    return 0;
  }
  if ( ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && SystemArgument1.Header.SignalState >= 25 )
  {
    return 0;
  }
  if ( dword_140C472DC > 25 )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1917153097LL);
  v8 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_DWORD *)(Pool2 + 16) = ErrorStatus;
  if ( String && String->Length )
  {
    v9 = (void *)ExAllocatePool2(64LL, String->Length, 1917153097LL);
    if ( !v9 )
    {
LABEL_47:
      ExFreePoolWithTag(v8, 0);
      return 0;
    }
    *((_WORD *)v8 + 12) = String->Length;
    *((_WORD *)v8 + 13) = String->Length;
    v8[4] = v9;
    memmove(v9, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C472B0);
    if ( SystemArgument1.Header.SignalState < 25
      && (!qword_140C46D78
       || *((_DWORD *)v8 + 4) != *(_DWORD *)(qword_140C46D78 + 16)
       || ((v13 = (const void *)v8[4]) != 0LL || *(_QWORD *)(qword_140C46D78 + 32))
       && (*((_WORD *)v8 + 12) != *(_WORD *)(qword_140C46D78 + 24)
        || memcmp(v13, *(const void **)(qword_140C46D78 + 32), *((unsigned __int16 *)v8 + 12)))) )
    {
      v14 = qword_140C472A0;
      if ( (__int64 *)qword_140C472A0 == &qword_140C472A0 )
      {
LABEL_35:
        v17 = (_QWORD *)qword_140C472A8;
        if ( *(__int64 **)qword_140C472A8 != &qword_140C472A0 )
          __fastfail(3u);
        *v8 = &qword_140C472A0;
        v8[1] = v17;
        *v17 = v8;
        qword_140C472A8 = (__int64)v8;
        sub_14035AD70(&SystemArgument1.Header.Lock, 0LL, 1LL, v12, 0);
        if ( !byte_140C472D8 )
        {
          byte_140C472D8 = 1;
          ExQueueWorkItem(&stru_140C47280, DelayedWorkQueue);
        }
        KeReleaseSpinLockFromDpcLevel(&qword_140C472B0);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v26 = *((_QWORD *)CurrentPrcb + 4375);
              v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v22 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= v27;
              if ( v22 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        return 1;
      }
      v15 = *((_DWORD *)v8 + 4);
      while ( 1 )
      {
        if ( v15 == *(_DWORD *)(v14 + 16) )
        {
          v16 = (const void *)v8[4];
          if ( !v16 && !*(_QWORD *)(v14 + 32) )
            break;
          if ( *((_WORD *)v8 + 12) == *(_WORD *)(v14 + 24)
            && !memcmp(v16, *(const void **)(v14 + 32), *((unsigned __int16 *)v8 + 12)) )
          {
            break;
          }
        }
        v14 = *(_QWORD *)v14;
        if ( (__int64 *)v14 == &qword_140C472A0 )
          goto LABEL_35;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C472B0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C((__int64)v19);
        }
      }
    }
    __writecr8(v11);
    goto LABEL_45;
  }
  v10 = ExAllocatePool2(64LL, 88LL, 1129333067LL);
  if ( !v10 )
  {
LABEL_45:
    v23 = (void *)v8[4];
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    goto LABEL_47;
  }
  _InterlockedIncrement(&dword_140C472DC);
  KeInitializeApc(v10, (__int64)Thread, 0, (__int64)sub_1406D9550, 0LL, (__int64)sub_140934E20, 0, (__int64)v8);
  KeInsertQueueApc(v10, 0LL, 0LL, 0);
  return 1;
}
