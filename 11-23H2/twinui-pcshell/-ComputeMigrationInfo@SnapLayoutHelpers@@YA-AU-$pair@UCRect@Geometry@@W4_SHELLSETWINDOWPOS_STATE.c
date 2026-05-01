/*
 * XREFs of ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1806709C0
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180674CE0 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1802E949C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?ComputeMigrationState@SnapLayoutHelpers@@YA?AW4_SHELLSETWINDOWPOS_STATE@@W4SnapRegion@@AEBUCRect@Geometry@@H@Z @ 0x180670B84 (-ComputeMigrationState@SnapLayoutHelpers@@YA-AW4_SHELLSETWINDOWPOS_STATE@@W4SnapRegion@@AEBUCRec.c)
 *     ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x180670E10 (-DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA-AW4ExtendRectFlags@1@W4SnapRegion@@@Z.c)
 *     ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1806714F4 (-ExtendRectToContainer@SnapLayoutHelpers@@YA-AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z.c)
 *     ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x1806738A4 (-HandleMigrationRotation@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4S.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeMigrationInfo(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4,
        unsigned int nNumerator)
{
  int v9; // ebx
  __int128 v10; // xmm6
  int v11; // esi
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v26; // [rsp+30h] [rbp-41h]
  __int128 v27; // [rsp+38h] [rbp-39h] BYREF
  __int128 v28; // [rsp+48h] [rbp-29h] BYREF

  v9 = MulDiv(5, nNumerator, 96);
  v10 = 0LL;
  v26 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a2, a3, v9);
  v27 = 0LL;
  SnapLayoutHelpers::HandleMigrationRotation((unsigned int)&v28, v26, (_DWORD)a2, (_DWORD)a3, (__int64)a4, v9);
  if ( (int)v28 >= SDWORD2(v28) || SDWORD1(v28) >= SHIDWORD(v28) )
  {
    v11 = SnapLayoutHelpers::ComputeMigrationState(v26, a4, nNumerator);
    if ( v11 == 3 )
    {
      v12 = MulDiv(*a2 - *a3, a4[2] - *a4, a3[2] - *a3);
      v13 = a3[3] - a3[1];
      v14 = a4[3] - a4[1];
      v15 = a2[1] - a3[1];
      LODWORD(v27) = *a4 + v12;
      v16 = MulDiv(v15, v14, v13);
      v17 = a3[2] - *a3;
      v18 = a4[2] - *a4;
      v19 = a2[2] - *a2;
      DWORD1(v27) = a4[1] + v16;
      v20 = MulDiv(v19, v18, v17);
      v21 = a3[3] - a3[1];
      v22 = a4[3] - a4[1];
      v23 = a2[3] - a2[1];
      DWORD2(v27) = v27 + v20;
      HIDWORD(v27) = DWORD1(v27) + MulDiv(v23, v22, v21);
      v24 = SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(v26);
      v10 = *(_OWORD *)SnapLayoutHelpers::ExtendRectToContainer(&v28, a4, &v27, v24);
    }
  }
  else
  {
    v10 = v28;
    v11 = 3;
  }
  *(_OWORD *)a1 = v10;
  *(_DWORD *)(a1 + 16) = v11;
  return a1;
}
