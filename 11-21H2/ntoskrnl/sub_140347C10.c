/*
 * XREFs of sub_140347C10 @ 0x140347C10
 * Callers:
 *     sub_14020AA84 @ 0x14020AA84 (sub_14020AA84.c)
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_140217A2C @ 0x140217A2C (sub_140217A2C.c)
 *     sub_14022CA54 @ 0x14022CA54 (sub_14022CA54.c)
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x14029EBE0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_14033C4D0 @ 0x14033C4D0 (sub_14033C4D0.c)
 *     FsRtlAcquireHeaderMutex @ 0x140347B70 (FsRtlAcquireHeaderMutex.c)
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14041AB50 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     sub_140578730 @ 0x140578730 (sub_140578730.c)
 *     sub_14059D69C @ 0x14059D69C (sub_14059D69C.c)
 *     sub_14059E2C0 @ 0x14059E2C0 (sub_14059E2C0.c)
 *     sub_1405A1AE8 @ 0x1405A1AE8 (sub_1405A1AE8.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14063C300 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     sub_1406608E8 @ 0x1406608E8 (sub_1406608E8.c)
 *     sub_140661EF0 @ 0x140661EF0 (sub_140661EF0.c)
 *     sub_140661FA0 @ 0x140661FA0 (sub_140661FA0.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     sub_1406913F4 @ 0x1406913F4 (sub_1406913F4.c)
 *     sub_14069A534 @ 0x14069A534 (sub_14069A534.c)
 *     sub_1406AF0D4 @ 0x1406AF0D4 (sub_1406AF0D4.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     sub_1406BF5F0 @ 0x1406BF5F0 (sub_1406BF5F0.c)
 *     sub_1406C4AE4 @ 0x1406C4AE4 (sub_1406C4AE4.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     sub_1406D1790 @ 0x1406D1790 (sub_1406D1790.c)
 *     sub_1406D5C1C @ 0x1406D5C1C (sub_1406D5C1C.c)
 *     sub_1406D5CF8 @ 0x1406D5CF8 (sub_1406D5CF8.c)
 *     sub_1406D7D74 @ 0x1406D7D74 (sub_1406D7D74.c)
 *     sub_1406DA700 @ 0x1406DA700 (sub_1406DA700.c)
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 *     sub_1406E2814 @ 0x1406E2814 (sub_1406E2814.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     sub_1407914BC @ 0x1407914BC (sub_1407914BC.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 *     sub_140791CAC @ 0x140791CAC (sub_140791CAC.c)
 *     sub_14079204C @ 0x14079204C (sub_14079204C.c)
 *     sub_14079240C @ 0x14079240C (sub_14079240C.c)
 *     sub_1407927AC @ 0x1407927AC (sub_1407927AC.c)
 *     sub_14079296C @ 0x14079296C (sub_14079296C.c)
 *     sub_140792EFC @ 0x140792EFC (sub_140792EFC.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 *     sub_14079350C @ 0x14079350C (sub_14079350C.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_140793A34 @ 0x140793A34 (sub_140793A34.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_1407944BC @ 0x1407944BC (sub_1407944BC.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_14079A254 @ 0x14079A254 (sub_14079A254.c)
 *     sub_14079A690 @ 0x14079A690 (sub_14079A690.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     sub_1407A91A0 @ 0x1407A91A0 (sub_1407A91A0.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 *     sub_1407E1968 @ 0x1407E1968 (sub_1407E1968.c)
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     sub_1407E1CA4 @ 0x1407E1CA4 (sub_1407E1CA4.c)
 *     sub_1407E1DC8 @ 0x1407E1DC8 (sub_1407E1DC8.c)
 *     sub_1407E1EF8 @ 0x1407E1EF8 (sub_1407E1EF8.c)
 *     sub_1407E2D60 @ 0x1407E2D60 (sub_1407E2D60.c)
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 *     sub_1407E3770 @ 0x1407E3770 (sub_1407E3770.c)
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 *     sub_1407E43F0 @ 0x1407E43F0 (sub_1407E43F0.c)
 *     sub_1407E4720 @ 0x1407E4720 (sub_1407E4720.c)
 *     sub_1407EEEB8 @ 0x1407EEEB8 (sub_1407EEEB8.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_1408654C0 @ 0x1408654C0 (sub_1408654C0.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_140927128 @ 0x140927128 (sub_140927128.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     sub_1409C581C @ 0x1409C581C (sub_1409C581C.c)
 *     ExUnregisterExtension @ 0x140A02740 (ExUnregisterExtension.c)
 *     sub_140A06FF0 @ 0x140A06FF0 (sub_140A06FF0.c)
 *     sub_140A073C0 @ 0x140A073C0 (sub_140A073C0.c)
 *     sub_140A083CC @ 0x140A083CC (sub_140A083CC.c)
 *     sub_140A087A4 @ 0x140A087A4 (sub_140A087A4.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A08D90 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A08F00 (WheaUnregisterInUsePageOfflineNotification.c)
 *     sub_140A0921C @ 0x140A0921C (sub_140A0921C.c)
 *     sub_140A0A16C @ 0x140A0A16C (sub_140A0A16C.c)
 *     sub_140A0A2E8 @ 0x140A0A2E8 (sub_140A0A2E8.c)
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140A6D3D0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140351DF0 @ 0x140351DF0 (sub_140351DF0.c)
 */

__int64 __fastcall sub_140347C10(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  _disable();
  if ( a2 )
  {
    sub_140351DF0(a2, CurrentThread, a1, 0LL);
  }
  else
  {
    v5 = *((unsigned __int8 *)CurrentThread + 792);
    if ( !*((_BYTE *)CurrentThread + 792) )
    {
      v5 = sub_14029F6A8(a1, (__int64)CurrentThread);
      if ( !v5 )
        return v3;
    }
    _BitScanForward((unsigned int *)&v6, v5);
    *((_BYTE *)CurrentThread + 792) = v5 & ~(1 << v6);
    _enable();
    v3 = (__int64)CurrentThread + 96 * v6 + 1696;
  }
  if ( (unsigned __int64)(a1 - qword_140C50630) < 0x8000000000LL )
    v7 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v7 = -1;
  *(_DWORD *)(v3 + 8) = v7;
  *(_QWORD *)v3 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  return v3;
}
