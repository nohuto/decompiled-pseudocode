/*
 * XREFs of sub_140919A88 @ 0x140919A88
 * Callers:
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14068C0C4 @ 0x14068C0C4 (sub_14068C0C4.c)
 *     sub_14091A344 @ 0x14091A344 (sub_14091A344.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_140919A88(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  signed int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  signed int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = sub_14091A344();
  v8 = v4;
  if ( v4 >= 0 )
  {
    sub_140AB4370(v6, v5, v7);
    ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
    v8 = sub_14068C0C4(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 80);
    sub_1402AFC00(BugCheckParameter2 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
    sub_1402AFC00(BugCheckParameter2 + 72);
    sub_140AB4260(v10, v9, v11, v12);
    if ( v8 >= 0 )
      return 0;
    else
      sub_14020A890(a2, 0, 37, v8, 0x20u);
  }
  else
  {
    sub_14020A890(a2, 0, 37, v4, 0x10u);
  }
  return (unsigned int)v8;
}
