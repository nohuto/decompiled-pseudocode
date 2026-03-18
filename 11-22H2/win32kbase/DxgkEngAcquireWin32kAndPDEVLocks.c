/*
 * XREFs of DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0019C80
 * Callers:
 *     <none>
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0019C20 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreLockDisplayDevice @ 0x1C001CBF0 (GreLockDisplayDevice.c)
 *     hdevEnumerateDisplayOnly @ 0x1C00355C0 (hdevEnumerateDisplayOnly.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

__int64 __fastcall DxgkEngAcquireWin32kAndPDEVLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  HSEMAPHORE *v13; // rbx
  __int64 i; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = SGDGetUserSessionState(v7, v6, v8, v9);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v11 + 8));
  EtwTraceAcquiredSharedUserCrit();
  v13 = *(HSEMAPHORE **)(SGDGetSessionState(v12) + 24);
  EngAcquireSemaphore(v13[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", v13[10], 1LL);
  EngAcquireSemaphore(v13[15]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", v13[15], 2LL);
  EngAcquireSemaphore(v13[11]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", v13[11], 3LL);
  EngAcquireSemaphore(v13[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", v13[9], 7LL);
  for ( i = 0LL; ; i = v17 )
  {
    result = hdevEnumerateDisplayOnly(i);
    v17 = result;
    if ( !result )
      break;
    v15 = *(_QWORD *)(result + 2552);
    v18 = v17;
    if ( v15 && (*(_DWORD *)(v17 + 40) & 0x20400) == 0 && *(_QWORD *)(v15 + 232) == a1 && *(_DWORD *)(v15 + 248) < v4 )
    {
      GreLockDisplayDevice(v17);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v18,
        (struct _SURFOBJ *)((*(_QWORD *)(v17 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v17 + 2528) >> 64)),
        0LL,
        0xEu);
    }
  }
  return result;
}
