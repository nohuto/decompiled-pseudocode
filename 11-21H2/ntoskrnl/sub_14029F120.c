/*
 * XREFs of sub_14029F120 @ 0x14029F120
 * Callers:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_14029EC30 @ 0x14029EC30 (sub_14029EC30.c)
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     sub_14029FB3C @ 0x14029FB3C (sub_14029FB3C.c)
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     sub_140356E00 @ 0x140356E00 (sub_140356E00.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_140360FD4 @ 0x140360FD4 (sub_140360FD4.c)
 *     sub_140361290 @ 0x140361290 (sub_140361290.c)
 *     sub_140386944 @ 0x140386944 (sub_140386944.c)
 *     sub_1403983A0 @ 0x1403983A0 (sub_1403983A0.c)
 *     sub_14039F294 @ 0x14039F294 (sub_14039F294.c)
 *     sub_1403A0424 @ 0x1403A0424 (sub_1403A0424.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_140609C80 @ 0x140609C80 (sub_140609C80.c)
 *     sub_14063DABC @ 0x14063DABC (sub_14063DABC.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     sub_14063EC3C @ 0x14063EC3C (sub_14063EC3C.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140640500 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140640800 (ExSvmFinalizeDeviceReset.c)
 *     sub_140641354 @ 0x140641354 (sub_140641354.c)
 *     sub_140643104 @ 0x140643104 (sub_140643104.c)
 *     sub_1406608E8 @ 0x1406608E8 (sub_1406608E8.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     sub_1406C4AE4 @ 0x1406C4AE4 (sub_1406C4AE4.c)
 *     sub_1406D5C1C @ 0x1406D5C1C (sub_1406D5C1C.c)
 *     sub_1406D5CF8 @ 0x1406D5CF8 (sub_1406D5CF8.c)
 *     sub_1406D7D74 @ 0x1406D7D74 (sub_1406D7D74.c)
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 *     sub_1407914BC @ 0x1407914BC (sub_1407914BC.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 *     sub_140791CAC @ 0x140791CAC (sub_140791CAC.c)
 *     sub_14079204C @ 0x14079204C (sub_14079204C.c)
 *     sub_14079240C @ 0x14079240C (sub_14079240C.c)
 *     sub_140792EFC @ 0x140792EFC (sub_140792EFC.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 *     sub_14079350C @ 0x14079350C (sub_14079350C.c)
 *     sub_140793A34 @ 0x140793A34 (sub_140793A34.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_14079A254 @ 0x14079A254 (sub_14079A254.c)
 *     sub_14079A690 @ 0x14079A690 (sub_14079A690.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 *     sub_1407E1968 @ 0x1407E1968 (sub_1407E1968.c)
 *     sub_1407E1CA4 @ 0x1407E1CA4 (sub_1407E1CA4.c)
 *     sub_1407E1DC8 @ 0x1407E1DC8 (sub_1407E1DC8.c)
 *     sub_1407E1EF8 @ 0x1407E1EF8 (sub_1407E1EF8.c)
 *     sub_1407E2D60 @ 0x1407E2D60 (sub_1407E2D60.c)
 *     sub_1407E3770 @ 0x1407E3770 (sub_1407E3770.c)
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 *     sub_1407E43F0 @ 0x1407E43F0 (sub_1407E43F0.c)
 *     sub_1407E4720 @ 0x1407E4720 (sub_1407E4720.c)
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
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
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140A6D3D0 (WheaUnconfigureErrorSource.c)
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 * Callees:
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 *     sub_14029F640 @ 0x14029F640 (sub_14029F640.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     memset @ 0x140435E00 (memset.c)
 */

signed __int64 __fastcall sub_14029F120(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      sub_14029F580(a2);
    v9 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v7;
    Object[5] = 0LL;
    if ( (v6 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v6 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
      sub_14029F640(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v16 = __rdtsc();
        v17 = v16 + (unsigned int)dword_140C5B130;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v16;
          v19 = __rdtsc();
          v16 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != dword_140C5B130 / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = sub_140347C10(a3, a2, 0LL);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      sub_14029F580(a2);
LABEL_13:
    sub_14029F5C0(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
