/*
 * XREFs of FxFreeDriverGlobals @ 0x1C006B930
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C00600AC (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeDriverGlobals(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  _WDF_DRIVER_GLOBALS *v2; // rbx
  KIRQL v3; // al
  WDFDRIVER__ *Driver; // r8
  _WDF_DRIVER_GLOBALS **v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  void *v8; // rcx
  WDFDRIVER__ *v9; // rcx
  void *v10; // rcx

  v2 = DriverGlobals - 8;
  v3 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  Driver = v2->Driver;
  if ( *((_WDF_DRIVER_GLOBALS **)v2->Driver + 1) != v2 || (v5 = *(_WDF_DRIVER_GLOBALS ***)&v2->DriverFlags, *v5 != v2) )
    __fastfail(3u);
  *v5 = (_WDF_DRIVER_GLOBALS *)Driver;
  *((_QWORD *)Driver + 1) = v5;
  *(_QWORD *)&v2->DriverFlags = v2;
  v2->Driver = (WDFDRIVER__ *)v2;
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v3);
  v6 = *(_QWORD *)&v2[1].DriverName[16];
  if ( v6 )
  {
    v7 = *(_QWORD **)(v6 + 400);
    if ( v7 )
    {
      do
      {
        v8 = v7;
        v7 = (_QWORD *)v7[49];
        ExFreePoolWithTag(v8, 0);
      }
      while ( v7 );
      v6 = *(_QWORD *)&v2[1].DriverName[16];
    }
    if ( *(_QWORD *)v6 )
    {
      ExFreePoolWithTag(*(PVOID *)v6, 0);
      **(_QWORD **)&v2[1].DriverName[16] = 0LL;
      v6 = *(_QWORD *)&DriverGlobals[-7].DriverName[16];
    }
    *(_BYTE *)(v6 + 432) = 0;
    ExFreePoolWithTag(*(PVOID *)&v2[1].DriverName[16], 0);
    *(_QWORD *)&v2[1].DriverName[16] = 0LL;
  }
  v9 = v2[6].Driver;
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)&v2[7].DriverName[16];
  v2->DisplaceDriverUnload = 0;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)&v2[7].DriverName[16] = 0LL;
  }
  ExFreePoolWithTag(v2, 0);
}
