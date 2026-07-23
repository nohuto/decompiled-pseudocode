/*
 * XREFs of VerifierIoWMIRegistrationControl @ 0x140AE40A0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 *     ViTargetWMIDeregister @ 0x140ACBED8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140ACBFA4 (ViTargetWMIRegister.c)
 */

__int64 __fastcall VerifierIoWMIRegistrationControl(unsigned __int64 a1, int a2)
{
  volatile signed __int32 *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfSafeMode && a2 < 0 )
  {
    switch ( a2 & 0x7FFFFFFF )
    {
      case 1:
LABEL_7:
        ViTargetWMIRegister(a1);
        break;
      case 2:
        ViTargetWMIDeregister(a1);
        break;
      case 3:
        ViTargetWMIDeregister(a1);
        goto LABEL_7;
    }
  }
  v6 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 && a2 >= 0 )
  {
    VfAvlInitializeLockContext((__int64)&v6, 1);
    v4 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v6, a1, 0LL);
    if ( v4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_14;
        case 2:
          _InterlockedAnd(v4 + 4, 0xFFFFFFFE);
          break;
        case 3:
LABEL_14:
          _InterlockedOr(v4 + 4, 1u);
          break;
      }
    }
    VfAvlCleanupLockContext((__int64)&v6);
  }
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))pXdvIoWMIRegistrationControl)(a1, (unsigned int)a2);
}
