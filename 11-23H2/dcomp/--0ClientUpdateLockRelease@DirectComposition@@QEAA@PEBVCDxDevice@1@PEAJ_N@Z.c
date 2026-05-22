/*
 * XREFs of ??0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z @ 0x18009948C
 * Callers:
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x18008A1A0 (-SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ?ClearClientDrawInProgress@CDevice@DirectComposition@@QEAAJXZ @ 0x18009ACE8 (-ClearClientDrawInProgress@CDevice@DirectComposition@@QEAAJXZ.c)
 */

DirectComposition::ClientUpdateLockRelease *__fastcall DirectComposition::ClientUpdateLockRelease::ClientUpdateLockRelease(
        DirectComposition::ClientUpdateLockRelease *this,
        const struct DirectComposition::CDxDevice *a2,
        int *a3,
        char a4)
{
  DirectComposition::CDevice *v7; // rcx
  int v8; // eax

  *(_QWORD *)this = 0LL;
  if ( *a3 >= 0 )
  {
    v7 = (DirectComposition::CDevice *)*((_QWORD *)a2 + 2);
    if ( *((_BYTE *)v7 + 833) )
    {
      if ( a4 )
      {
        *a3 = DirectComposition::CDevice::CheckClientDrawNotInProgress(v7);
      }
      else
      {
        v8 = DirectComposition::CDevice::ClearClientDrawInProgress(v7);
        *a3 = v8;
        if ( v8 >= 0 )
          *(_QWORD *)this = a2;
      }
    }
  }
  return this;
}
