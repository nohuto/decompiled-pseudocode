/*
 * XREFs of ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x180011F20
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001FAE0 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180049AE8 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180049D9C (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemBeginStoreLicenseAcquisition(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r8d
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v11; // r8d

  v6 = a3 - 1;
  if ( v6 )
  {
    v11 = v6 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return (unsigned int)-1073741584;
      v7 = 1;
    }
    else
    {
      v7 = 2;
    }
  }
  else
  {
    v7 = 4;
  }
  v8 = 0;
  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present() )
  {
    if ( (unsigned __int8)IsUMgrQueryUserContextFromSidPresent() )
    {
      if ( IsWellKnownSid((PSID)(*(_QWORD *)(a1 + 88) + 228LL), WinLocalAccountAndAdministratorSid|WinCreatorGroupSid) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL) + 160LL) + 88LL) )
          return (unsigned int)-1073741637;
        a4 = 0LL;
      }
      v9 = BeginAcquireStoreLicenseForPackageActivation2(a1 + 96, v7, a4);
      if ( v9 >= 0 )
        return 0;
      return (unsigned int)v9;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  return v8;
}
