/*
 * XREFs of ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1801575DC
 * Callers:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x1800615FC (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006176C (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180157BB8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180157D70 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 * Callees:
 *     ?CheckGestureState@GestureHandler@@QEBA_NV?$initializer_list@$$CBW4GestureOperationState@@@std@@@Z @ 0x180156A2C (-CheckGestureState@GestureHandler@@QEBA_NV-$initializer_list@$$CBW4GestureOperationState@@@std@@.c)
 */

char __fastcall GestureHandler::IsGestureInvalid(GestureHandler *this)
{
  _DWORD *v2[3]; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+4Ch] [rbp+14h]
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v3 = 3;
  v2[0] = &v3;
  v4 = 4;
  v2[1] = &v5;
  return GestureHandler::CheckGestureState((__int64)this, v2);
}
