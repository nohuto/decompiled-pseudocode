/*
 * XREFs of ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1801BD0C8
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x1803D6E00 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 *     ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1803DA800 (-ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803DBDD0 (-SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 *     ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803DBEE0 (-SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BroadcastDVRComponent::IsMRPInstalled(BroadcastDVRComponent *this)
{
  if ( MFStartup(0x20070u, 0) < 0 )
    return 0;
  MFShutdown();
  return 1;
}
