/*
 * XREFs of ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180041C98
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002B9C4 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800423D0 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180042758 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800E1350 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x1801FB9B0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPC3DStateHelper::Is3DCompositorRunning(PSRWLOCK SRWLock)
{
  char v2; // bl

  AcquireSRWLockShared(SRWLock);
  v2 = BYTE4(SRWLock[2].Ptr);
  ReleaseSRWLockShared(SRWLock);
  return v2;
}
