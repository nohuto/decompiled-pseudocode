/*
 * XREFs of sub_1406AB17C @ 0x1406AB17C
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 * Callees:
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     sub_140232EC0 @ 0x140232EC0 (sub_140232EC0.c)
 *     sub_140232ED8 @ 0x140232ED8 (sub_140232ED8.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405F5A58 @ 0x1405F5A58 (sub_1405F5A58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406AB17C(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebp
  struct _KTHREAD *v5; // rax
  __int64 v6; // rax
  ULONG_PTR v8; // rsi
  BOOLEAN v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  v4 = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C25410, 0LL);
    v4 = sub_1405F5A58(a1, 0, (__int64 *)&BugCheckParameter2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C25410, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C25410);
    sub_1402AFC00((ULONG_PTR)&qword_140C25410);
    KeLeaveCriticalRegion();
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&unk_140C25340 + 40 * a1;
  }
  v5 = KeGetCurrentThread();
  --*((_WORD *)v5 + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v8 = BugCheckParameter2;
    v9 = RtlRemoveEntryHashTable(
           *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
           (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
           0LL);
    if ( v9 )
      _bittestandreset(*(signed __int32 **)(v8 + 16), *(_DWORD *)(a2 + 40) - 1);
    else
      v4 = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( v9 && *(_QWORD *)(a2 + 48) )
    {
      sub_140232EC0();
      sub_140232ED8(*(void **)(a2 + 48));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    return v4;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
