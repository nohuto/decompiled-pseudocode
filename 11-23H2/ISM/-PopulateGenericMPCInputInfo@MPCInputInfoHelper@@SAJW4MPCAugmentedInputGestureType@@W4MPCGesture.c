/*
 * XREFs of ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800CDE1C
 * Callers:
 *     _lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator() @ 0x1800B4540 (_lambda_e9c1fc9d7cbe0868cf685a076fd687ae_--operator().c)
 *     ?PopulateDetectedOrLostReport@MPCHandProcessor@@MEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800BF750 (-PopulateDetectedOrLostReport@MPCHandProcessor@@MEAAX_NIAEAULegacyInputInfo@@@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800CDBC0 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyIn.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAULegacyInputInfo@@@Z @ 0x1800CDCB0 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D0470 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800D05C0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D3594 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?SendEyeGazeReport@SpatialRimDeviceCollection@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800DB040 (-SendEyeGazeReport@SpatialRimDeviceCollection@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@In.c)
 *     ?SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800DB180 (-SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800DB400 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 *     ?PopulateDetectedOrLostReport@MPCSixDofProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1801DF1D0 (-PopulateDetectedOrLostReport@MPCSixDofProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801E4F90 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1801EA650 (-PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputInfoHelper::PopulateGenericMPCInputInfo(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  LARGE_INTEGER v10[3]; // [rsp+20h] [rbp-18h] BYREF

  QueryPerformanceCounter(v10);
  *(_DWORD *)a5 = a3;
  *(_DWORD *)(a5 + 4) = a4;
  *(_DWORD *)(a5 + 8) = GetTickCount();
  *(LARGE_INTEGER *)(a5 + 16) = v10[0];
  *(_QWORD *)(a5 + 904) = 0LL;
  *(_QWORD *)(a5 + 912) = 0LL;
  *(_QWORD *)(a5 + 920) = 0LL;
  *(_BYTE *)(a5 + 928) = 0;
  *(_DWORD *)(a5 + 72) = _InterlockedExchangeAdd(&MPCInputInfoHelper::m_curInputId, 1u);
  *(_DWORD *)(a5 + 80) = *(_DWORD *)(a5 + 4);
  result = 0LL;
  *(_DWORD *)(a5 + 64) = a2;
  *(_DWORD *)(a5 + 68) = a1;
  *(_BYTE *)(a5 + 48) = 1;
  *(_BYTE *)(a5 + 312) = 0;
  *(_BYTE *)(a5 + 240) = 0;
  *(_DWORD *)(a5 + 272) = 0;
  return result;
}
