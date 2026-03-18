/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C0173EB0
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0173980 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C0166FE4 (UserNotifyUniversalScaleFactorChanged.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  int v4; // edi
  int v5; // r8d
  struct PDEV *i; // rbx
  _DWORD *v7; // rcx
  int v8; // eax
  char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // rcx

  v4 = -1073741811;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
    {
      v7 = (_DWORD *)*((_QWORD *)i + 319);
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          v9 = (char *)i + 2424;
          if ( a2 )
          {
            if ( *a2 )
            {
              v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD, char *))qword_1C02968C0)(
                      v7 + 62,
                      (unsigned int)v7[64],
                      (unsigned int)a1[5],
                      v9);
              v4 = v10;
              if ( v10 < 0 )
                WdLogSingleEntry5(
                  2LL,
                  v10,
                  (int)a1[5],
                  *(int *)(*((_QWORD *)i + 319) + 252LL),
                  *(unsigned int *)(*((_QWORD *)i + 319) + 248LL),
                  *(unsigned int *)(*((_QWORD *)i + 319) + 256LL));
            }
            else if ( (v8 & 4) != 0 )
            {
              v11 = (unsigned int)v7[64];
              v12 = v7 + 62;
LABEL_18:
              v4 = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD, char *))qword_1C02968C0)(
                     v12,
                     v11,
                     (unsigned int)a1[5],
                     v9);
              break;
            }
          }
          else if ( a1[2] == v7[62] && a1[3] == v7[63] )
          {
            v11 = (unsigned int)v7[64];
            if ( a1[4] == (_DWORD)v11 )
            {
              v12 = v7 + 62;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v13);
  }
  if ( v4 >= 0 )
    UserNotifyUniversalScaleFactorChanged();
  return (unsigned int)v4;
}
