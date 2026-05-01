/*
 * XREFs of ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180009970
 * Callers:
 *     ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800073E0 (-HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     PsmHamGetPackageDebugMode @ 0x180009390 (PsmHamGetPackageDebugMode.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180072564 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180092550 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampPkgInfoInitialize(char *a1, void *a2, int a3, struct _HAM_PACKAGE_INFO *a4)
{
  __int64 v8; // r10
  struct _HAM_PACKAGE_INFO *v9; // rax
  signed __int64 v10; // rbx
  __int16 v11; // cx

  memset_0(a4, 0, 0xCCuLL);
  v8 = 65LL;
  v9 = a4;
  v10 = a1 - (char *)a4;
  while ( v8 != -2147483581 )
  {
    v11 = *(_WORD *)((char *)v9 + v10);
    if ( !v11 )
      break;
    *(_WORD *)v9 = v11;
    v9 = (struct _HAM_PACKAGE_INFO *)((char *)v9 + 2);
    if ( !--v8 )
    {
      v9 = (struct _HAM_PACKAGE_INFO *)((char *)v9 - 2);
      break;
    }
  }
  *(_WORD *)v9 = 0;
  RtlCopySid(0x44u, (char *)a4 + 132, a2);
  *((_DWORD *)a4 + 50) = a3;
}
