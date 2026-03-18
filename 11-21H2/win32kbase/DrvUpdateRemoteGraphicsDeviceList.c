/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C017511C
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0090AB0 (UserIsUserCritSecIn.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00C5284 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D4218 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  struct tagREMOTE_CONTEXT *v0; // rcx
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsUserCritSecIn() )
    WdLogSingleEntry0(1LL);
  GreCleanupRemoteAdapterContext(v0);
  if ( !gRemoteSessionUseWddm )
  {
    for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 35) )
      {
        v6 = 0;
        *((_QWORD *)i + 37) = 0LL;
        v2 = ((__int64 (__fastcall *)(char *, char *, char *, char *, char *))qword_1C02967E8)(
               (char *)i + 280,
               (char *)i + 296,
               (char *)i + 304,
               (char *)i + 288,
               &v6);
        if ( v2 >= 0 )
        {
          v3 = *((_DWORD *)i + 41);
          if ( v6 )
            v4 = v3 | 4;
          else
            v4 = v3 & 0xFFFFFFFB;
          *((_DWORD *)i + 41) = v4;
          DrvUpdateRemoteAdapterInfo(i);
        }
        else
        {
          WdLogSingleEntry2(2LL, i, v2);
        }
      }
    }
  }
  return 1LL;
}
