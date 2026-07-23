/*
 * XREFs of sub_1409CEF44 @ 0x1409CEF44
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x1409C6230 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405F5A58 @ 0x1405F5A58 (sub_1405F5A58.c)
 *     sub_1409B9218 @ 0x1409B9218 (sub_1409B9218.c)
 *     sub_1409CEBD4 @ 0x1409CEBD4 (sub_1409CEBD4.c)
 */

char __fastcall sub_1409CEF44(unsigned int a1, int a2, int a3)
{
  char v6; // r15
  char v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // [rsp+38h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C25410, 0LL);
      v7 = 1;
      if ( (int)sub_1405F5A58(a1, 0, (__int64 *)&BugCheckParameter2) < 0 )
      {
LABEL_11:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C25410, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&qword_140C25410);
        sub_1402AFC00((ULONG_PTR)&qword_140C25410);
        sub_1402F9540((__int64)KeGetCurrentThread());
        return v6;
      }
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&unk_140C25340 + 40 * a1;
    }
    v9 = KeGetCurrentThread();
    --*((_WORD *)v9 + 242);
    v10 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( (int)sub_1409CEBD4(*(PRTL_DYNAMIC_HASH_TABLE *)(v10 + 24), a2, a3, &v13, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v12) >= 0 )
      v6 = sub_1409B9218(v13[1].Linkage.Blink, *(PSID *)(v12 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( !v7 )
      return v6;
    goto LABEL_11;
  }
  return 0;
}
