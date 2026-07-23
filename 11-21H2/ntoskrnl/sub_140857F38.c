/*
 * XREFs of sub_140857F38 @ 0x140857F38
 * Callers:
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_1409F7D10 @ 0x1409F7D10 (sub_1409F7D10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_1408581D8 @ 0x1408581D8 (sub_1408581D8.c)
 *     sub_140858330 @ 0x140858330 (sub_140858330.c)
 *     sub_1408583D0 @ 0x1408583D0 (sub_1408583D0.c)
 *     sub_1409E29E8 @ 0x1409E29E8 (sub_1409E29E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140857F38(bool *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *PoolWithTag; // rbx
  PVOID v6; // r14
  HANDLE v7; // rdi
  bool v8; // r15
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  unsigned int v11; // eax
  char v12; // si
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  ResultLength = 0;
  CurrentThread = KeGetCurrentThread();
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  v6 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CE30, 0LL);
  if ( qword_140D3CBF0 )
  {
    v7 = *(HANDLE *)qword_140D3CBF0;
    PoolWithTag = (char *)qword_140D3CBF0;
    KeyHandle = *(HANDLE *)qword_140D3CBF0;
  }
  else
  {
    if ( (int)sub_1408583D0(&KeyHandle) < 0 )
      goto LABEL_21;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6453704Cu);
    if ( !PoolWithTag )
      goto LABEL_21;
    v7 = KeyHandle;
  }
  *((_QWORD *)PoolWithTag + 3) = sub_1409F7D10;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  if ( ZwNotifyChangeKey(
         v7,
         0LL,
         (PIO_APC_ROUTINE)(PoolWithTag + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(PoolWithTag + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_21;
  v8 = 1;
  if ( ZwQueryValueKey(
         v7,
         (PUNICODE_STRING)&stru_1400065C0,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v16 == 4
    && v17 == 4 )
  {
    v8 = v18 != 0;
  }
  *a1 = v8;
  v9 = *((_DWORD *)a1 + 1);
  v10 = ZwQueryValueKey(v7, (PUNICODE_STRING)&stru_1400065B0, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( v10 != -1073741789 )
    goto LABEL_13;
  v6 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6453704Cu);
  if ( v6 )
  {
    v10 = ZwQueryValueKey(
            v7,
            (PUNICODE_STRING)&stru_1400065B0,
            KeyValuePartialInformation,
            v6,
            ResultLength,
            &ResultLength);
LABEL_13:
    if ( v10 >= 0 )
    {
      v11 = sub_140858330(v6, a1);
      dword_140D3CB44 = v11;
      if ( v11 )
        sub_1409E29E8(v11);
    }
  }
  if ( a2 )
  {
    sub_1407D6F54(1u);
    sub_140835844(0);
    ExReleaseResourceLite(&stru_140C15AC0);
    KeLeaveCriticalRegion();
  }
  sub_1408581D8(1LL, *a1, *((unsigned int *)a1 + 1), v9);
  if ( !qword_140D3CBF0 )
  {
    qword_140D3CBF0 = (__int64)PoolWithTag;
    *(_QWORD *)PoolWithTag = v7;
  }
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
LABEL_21:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CE30, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140D3CE30);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CE30);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6453704Cu);
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6453704Cu);
    qword_140D3CBF0 = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
