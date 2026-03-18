/*
 * XREFs of ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D9EB8
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D9738 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0089AF0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C008B120 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00D9B6C (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 *     ?Free@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00D9E04 (-Free@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v4; // rbx
  _QWORD *i; // r14
  _QWORD *v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
      NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v4);
      for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a1 )
        {
          GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v4);
          NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
          return;
        }
        v6 = (_QWORD *)i[4];
        v7 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CheckAllocationStatus(v6, (unsigned __int64)a2);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Free((__int64)v6, a2);
            GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v4);
            return;
          }
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              continue;
            v10 = 2LL;
          }
          else
          {
            v10 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v10, a2, 0LL);
        }
      }
    }
    memset(a2, 0, 0xDE0uLL);
    v11 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v11 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v11) < *(_WORD *)(v11 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v11, a2);
    }
    else
    {
      ++*(_DWORD *)(v11 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v11 + 56))(a2);
    }
  }
}
