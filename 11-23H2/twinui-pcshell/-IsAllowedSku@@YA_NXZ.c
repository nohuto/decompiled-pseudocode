/*
 * XREFs of ?IsAllowedSku@@YA_NXZ @ 0x1801AB410
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E96E0 (-SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x1803D6E00 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 *     ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1803DA800 (-ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803DBDD0 (-SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 *     ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803DBEE0 (-SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?IsWindowsServer@@YA_NXZ @ 0x1801AB438 (-IsWindowsServer@@YA_NXZ.c)
 */

char IsAllowedSku(void)
{
  char v0; // bl

  v0 = 0;
  if ( !IsWindowsServer() || !IsActiveSessionCountLimited() )
    return 1;
  return v0;
}
