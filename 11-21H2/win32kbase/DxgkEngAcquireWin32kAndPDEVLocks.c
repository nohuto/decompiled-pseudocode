/*
 * XREFs of DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0079180
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C006FE40 (GreLockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0078B50 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct PDEV *__fastcall DxgkEngAcquireWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
{
  int v4; // edx
  int v5; // r8d
  struct PDEV **i; // rcx
  struct PDEV *result; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // ecx
  struct PDEV *v11; // [rsp+40h] [rbp+18h] BYREF

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  for ( i = 0LL; ; i = (struct PDEV **)v8 )
  {
    result = hdevEnumerate(i, v4, v5);
    v8 = (__int64)result;
    if ( !result )
      break;
    v11 = result;
    v9 = *((_QWORD *)result + 319);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v8 + 40);
      if ( (v10 & 0x400) == 0 && (v10 & 0x20000) == 0 && *(_QWORD *)(v9 + 240) == a1 && *(_DWORD *)(v9 + 256) < a2 )
      {
        GreLockDisplayDevice(v8);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v11,
          (struct _SURFOBJ *)((*(_QWORD *)(v8 + 2528) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v8 + 2528) >> 64)),
          0LL,
          0xEu);
      }
    }
  }
  return result;
}
