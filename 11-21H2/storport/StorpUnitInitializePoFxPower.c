/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x1C00472D0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x1C000C8F8 (RaidGetStorPoFxComponent.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0041F4C (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0042014 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0042044 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0049514 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  _DWORD *Adapter; // rcx
  __int64 v7; // r10
  __int64 Unit; // rax
  __int64 v9; // rbx
  int *StorPoFxComponent; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v16; // rbp
  __int64 Pool; // rsi
  __int64 v18; // rax
  int v19; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v21) = 0;
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
  LOWORD(v21) = *(_WORD *)(v7 + 8);
  BYTE2(v21) = *(_BYTE *)(v7 + 10);
  Unit = RaidAdapterFindUnit((__int64)Adapter, v21);
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
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(a3, 0);
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v12 + 8) - 1) > 1 )
  {
    return 3238002694LL;
  }
  v13 = *(_QWORD *)(v12 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v12 + 16) == 0x40880B3A585D326BLL )
    v13 = *(_QWORD *)(v12 + 24) + 0x41A796F04F77C677LL;
  if ( v13 )
    return 3238002694LL;
  v14 = *(_QWORD *)(v9 + 8);
  v21 = 0LL;
  if ( (int)RaidRegisterForRuntimePowerManagement(v14, a3, v9, &v21) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v16 = TotalStorPoFxDeviceSize;
  Pool = RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 168, 1330667858LL, *(_QWORD *)(v9 + 8));
  if ( Pool )
  {
    v18 = v21;
    *(_DWORD *)(Pool + 32) |= 0xEu;
    *(_DWORD *)(Pool + 16) = 0;
    *(_QWORD *)Pool = v18;
    *(_QWORD *)(Pool + 88) = Pool + 80;
    *(_QWORD *)(Pool + 80) = Pool + 80;
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 96));
    v19 = a3[3];
    if ( (v19 & 8) != 0 )
    {
      *(_BYTE *)(v9 + 449) |= 0x40u;
      v19 = a3[3];
    }
    if ( (v19 & 0x200) != 0 )
      *(_BYTE *)(v9 + 450) |= 4u;
    *(_QWORD *)(Pool + 8) = Pool + 168;
    memmove((void *)(Pool + 168), a3, v16);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *(_DWORD *)(Pool + 32) |= 0x100u;
    v20 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v9 + 1736);
    *(_QWORD *)(v9 + 1744) = Pool;
    ExReInitializeRundownProtectionCacheAware(v20);
    *(_BYTE *)(v9 + 449) |= 0x80u;
    return 0LL;
  }
  PoFxUnregisterDevice(v21);
  return 3238002691LL;
}
