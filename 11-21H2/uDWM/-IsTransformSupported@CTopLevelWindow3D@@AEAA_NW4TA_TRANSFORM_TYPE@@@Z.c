/*
 * XREFs of ?IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z @ 0x18000D0C0
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ @ 0x18000D10C (-IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18000D5F8 (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 */

char __fastcall CTopLevelWindow3D::IsTransformSupported(__int64 a1, int a2)
{
  bool v3; // bl

  v3 = (unsigned int)(a2 - 1) <= 1;
  if ( ((unsigned int)CDesktopManager::IsMinimizeRestoreAnimationsUpdateEnabled()
     || (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled())
    && !a2 )
  {
    return 1;
  }
  return v3;
}
