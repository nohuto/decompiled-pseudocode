/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x1C004A0E0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidGetStorPoFxComponent @ 0x1C00125F8 (RaidGetStorPoFxComponent.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C00449E8 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0044B4C (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0044B7C (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C004C570 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  _DWORD *Adapter; // rcx
  __int64 v7; // r10
  __int64 Unit; // rax
  __int64 v9; // rbx
  int *v11; // rcx
  int *StorPoFxComponent; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v18; // rbp
  __int64 Pool; // rsi
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v22) = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  if ( !v7 )
    return 3238002694LL;
  if ( *(_WORD *)v7 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v7 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v22) = *(_WORD *)(v7 + 8);
  BYTE2(v22) = *(_BYTE *)(v7 + 10);
  Unit = RaidAdapterFindUnit((__int64)Adapter, v22);
  v9 = Unit;
  if ( !Unit )
    return 3238002694LL;
  if ( RuntimePowerDisabled )
  {
    *(_BYTE *)(Unit + 451) |= 0x20u;
    return 0LL;
  }
  if ( *(char *)(Unit + 449) < 0 )
    return 3238002689LL;
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v11, 0);
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v14 + 8) - 1) > 1 )
  {
    return 3238002694LL;
  }
  v15 = *(_QWORD *)(v13 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v13 + 16) == 0x40880B3A585D326BLL )
    v15 = *(_QWORD *)(v13 + 24) + 0x41A796F04F77C677LL;
  if ( v15 )
    return 3238002694LL;
  v16 = *(_QWORD *)(v9 + 8);
  v22 = 0LL;
  if ( (int)RaidRegisterForRuntimePowerManagement(v16, a3, v9, &v22) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v18 = TotalStorPoFxDeviceSize;
  Pool = RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 184, 1330667858LL, *(_QWORD *)(v9 + 8));
  if ( Pool )
  {
    v20 = v22;
    *(_DWORD *)(Pool + 32) |= 0xEu;
    *(_DWORD *)(Pool + 16) = 0;
    *(_QWORD *)Pool = v20;
    *(_QWORD *)(Pool + 88) = Pool + 80;
    *(_QWORD *)(Pool + 80) = Pool + 80;
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 96));
    if ( (a3[3] & 8) != 0 )
      *(_BYTE *)(v9 + 449) |= 0x40u;
    if ( (a3[3] & 0x200) != 0 )
      *(_BYTE *)(v9 + 450) |= 4u;
    *(_QWORD *)(Pool + 8) = Pool + 184;
    memmove((void *)(Pool + 184), a3, v18);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *(_DWORD *)(Pool + 32) |= 0x100u;
    v21 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v9 + 1784);
    *(_QWORD *)(v9 + 1792) = Pool;
    ExReInitializeRundownProtectionCacheAware(v21);
    *(_BYTE *)(v9 + 449) |= 0x80u;
    return 0LL;
  }
  PoFxUnregisterDevice(v22);
  return 3238002691LL;
}
