/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C00446A8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x1C000C8F8 (RaidGetStorPoFxComponent.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x1C0020224 (RaidSetD3Cold.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x1C0031F90 (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0041F4C (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0042014 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0042044 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C0048AF0 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0049514 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  _DWORD *Adapter; // rax
  _DWORD *v6; // rbx
  char v8; // al
  int *StorPoFxComponent; // rax
  int *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v14; // r15
  _QWORD *Pool; // r14
  __int64 v16; // rax
  int v17; // eax
  unsigned __int8 v18; // dl
  int v19; // eax
  unsigned __int8 v20; // dl
  int v21; // eax
  char v22; // cl
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // [rsp+28h] [rbp-40h]
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  Adapter = RaidpPortGetAdapter(a1);
  v6 = Adapter;
  if ( !Adapter )
    return 3238002694LL;
  if ( RuntimePowerDisabled )
  {
    *((_BYTE *)Adapter + 110) |= 4u;
    return 0LL;
  }
  v8 = *((_BYTE *)Adapter + 107);
  if ( (v8 & 0x20) != 0 )
    return 3221225473LL;
  if ( *((_QWORD *)v6 + 604) )
  {
    if ( a3 )
      *a3 = (v8 & 0x10) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent((int *)a2, 0);
  v10 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(v10[2] - 1) > 7 )
  {
    return 3238002694LL;
  }
  v12 = *((_QWORD *)v10 + 2) - 0x481F895FDCAF9C10LL;
  if ( *((_QWORD *)v10 + 2) == 0x481F895FDCAF9C10LL )
    v12 = *((_QWORD *)v10 + 3) - 0x3356F5D2CED492A4LL;
  if ( v12 )
    return 3238002694LL;
  v29 &= v11;
  if ( (int)RaidRegisterForRuntimePowerManagement(*((_QWORD *)v6 + 1), a2, v6, &v29) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v14 = TotalStorPoFxDeviceSize;
  Pool = (_QWORD *)RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 104, 1330667858LL, *((_QWORD *)v6 + 1));
  if ( Pool )
  {
    v16 = v29;
    *((_DWORD *)Pool + 4) = 0;
    *Pool = v16;
    v17 = *((_DWORD *)Pool + 5) | 3;
    *((_DWORD *)Pool + 5) = v17;
    if ( v10[2] == 1 )
      *((_DWORD *)Pool + 5) = v17 | 0x100;
    Pool[1] = Pool + 13;
    memmove(Pool + 13, (const void *)a2, v14);
    v18 = *((_BYTE *)v6 + 107);
    if ( (((*(_BYTE *)(a2 + 12) & 4) != 0) & (v18 >> 3)) != 0
      && (v19 = RaidSetD3Cold(*((struct _DEVICE_OBJECT **)v6 + 1), 1), v18 = *((_BYTE *)v6 + 107), v19 >= 0) )
    {
      v20 = v18 | 0x10;
      *((_BYTE *)v6 + 107) = v20;
      if ( a3 )
      {
        *a3 = 1;
        v20 = *((_BYTE *)v6 + 107);
      }
    }
    else
    {
      v20 = v18 & 0xEF;
      *((_BYTE *)v6 + 107) = v20;
    }
    v21 = *(_DWORD *)(a2 + 12);
    if ( (v21 & 8) != 0 )
    {
      v20 |= 0x40u;
      *((_BYTE *)v6 + 107) = v20;
      v21 = *(_DWORD *)(a2 + 12);
    }
    if ( (v21 & 0x200) != 0 )
      *((_BYTE *)v6 + 108) |= 0x80u;
    if ( StorageD3InModernStandbyEnabled && (v20 & (*(_BYTE *)(a2 + 12) >> 2) & 0x10) != 0 )
      *((_BYTE *)v6 + 110) |= 0x40u;
    else
      *((_BYTE *)v6 + 110) &= ~0x40u;
    v22 = *((_BYTE *)v6 + 110);
    if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
      *((_BYTE *)v6 + 108) |= 8u;
    if ( (v22 & 0x40) != 0 )
    {
      v23 = *((_BYTE *)v6 + 108);
      if ( (v23 & 8) != 0 )
        *((_BYTE *)v6 + 108) = v23 & 0xF7;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x400) != 0 )
      *((_BYTE *)v6 + 109) |= 1u;
    PoFxSetComponentLatency(*Pool, 0LL, -1LL);
    PoFxSetComponentResidency(*Pool, 0LL, -1LL);
    if ( *((char *)v6 + 107) >= 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      v6[1212] = *(_DWORD *)(a2 + 16);
    v25 = (unsigned int)v6[1212];
    *((_QWORD *)v6 + 604) = Pool;
    RaidAdapterPoFxSetDeviceIdleTimeout(v6, v25, v24, 0LL);
    if ( StorEtwLoggingEnabled )
    {
      v27 = (unsigned int)v6[14];
      if ( (_DWORD)v27 != -1 && (byte_1C00799E2 & 0x10) != 0 )
      {
        v28 = (*((unsigned __int8 *)v6 + 107) >> 4) & 1;
        McTemplateK0pqtqqt_EtwWriteTransfer(
          v28,
          v27,
          v26,
          **((_QWORD **)v6 + 604),
          v27,
          v28,
          v6[1212],
          v10[2],
          (*((unsigned __int8 *)v6 + 110) >> 6) & 1);
      }
    }
    PoFxStartDevicePowerManagement(**((_QWORD **)v6 + 604));
    return 0LL;
  }
  PoFxUnregisterDevice(v29);
  return 3238002691LL;
}
