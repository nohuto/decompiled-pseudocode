/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C0047B28
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidGetStorPoFxComponent @ 0x1C00125F8 (RaidGetStorPoFxComponent.c)
 *     RaidSetD3Cold @ 0x1C00200FC (RaidSetD3Cold.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x1C00325D4 (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C00449E8 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0044B4C (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0044B7C (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C004BACC (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C004C570 (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  _DWORD *Adapter; // rax
  _DWORD *v6; // rbx
  char v8; // al
  int *v9; // rcx
  int *StorPoFxComponent; // rax
  int *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v16; // r15
  _QWORD *Pool; // r14
  __int64 v18; // rax
  int v19; // eax
  unsigned __int8 v20; // r8
  int v21; // eax
  unsigned __int8 v22; // r8
  bool v23; // cl
  char v24; // r8
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // [rsp+28h] [rbp-40h]
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF

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
  if ( *((_QWORD *)v6 + 612) )
  {
    if ( a3 )
      *a3 = (v8 & 0x10) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v9, 0);
  v11 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v13 + 8) - 1) > 7 )
  {
    return 3238002694LL;
  }
  v14 = *((_QWORD *)v11 + 2) - 0x481F895FDCAF9C10LL;
  if ( *((_QWORD *)v11 + 2) == 0x481F895FDCAF9C10LL )
    v14 = *((_QWORD *)v11 + 3) - 0x3356F5D2CED492A4LL;
  if ( v14 )
    return 3238002694LL;
  v31 &= v12;
  if ( (int)RaidRegisterForRuntimePowerManagement(*((_QWORD *)v6 + 1), a2, v6, &v31) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v16 = TotalStorPoFxDeviceSize;
  Pool = (_QWORD *)RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 144, 1330667858LL, *((_QWORD *)v6 + 1));
  if ( Pool )
  {
    v18 = v31;
    *((_DWORD *)Pool + 4) = 0;
    *Pool = v18;
    v19 = *((_DWORD *)Pool + 5) | 3;
    *((_DWORD *)Pool + 5) = v19;
    if ( v11[2] == 1 )
      *((_DWORD *)Pool + 5) = v19 | 0x100;
    Pool[1] = Pool + 18;
    memmove(Pool + 18, (const void *)a2, v16);
    v20 = *((_BYTE *)v6 + 107);
    if ( (((*(_BYTE *)(a2 + 12) & 4) != 0) & (v20 >> 3)) != 0
      && (v21 = RaidSetD3Cold(*((struct _DEVICE_OBJECT **)v6 + 1), 1), v20 = *((_BYTE *)v6 + 107), v21 >= 0) )
    {
      v22 = v20 | 0x10;
      *((_BYTE *)v6 + 107) = v22;
      if ( a3 )
      {
        *a3 = 1;
        v22 = *((_BYTE *)v6 + 107);
      }
    }
    else
    {
      v22 = v20 & 0xEF;
      *((_BYTE *)v6 + 107) = v22;
    }
    if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
    {
      v22 |= 0x40u;
      *((_BYTE *)v6 + 107) = v22;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
      *((_BYTE *)v6 + 108) |= 0x80u;
    v23 = (*(_BYTE *)(a2 + 12) & 0x40) != 0 && (v22 >> 4) & (*((_BYTE *)v6 + 120) >> 1) & 1;
    v24 = *((_BYTE *)v6 + 110) | 0x40;
    if ( !v23 )
      v24 = *((_BYTE *)v6 + 110) & 0xBF;
    *((_BYTE *)v6 + 110) = v24;
    if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
      *((_BYTE *)v6 + 108) |= 8u;
    if ( (v24 & 0x40) != 0 )
    {
      v25 = *((_BYTE *)v6 + 108);
      if ( (v25 & 8) != 0 )
        *((_BYTE *)v6 + 108) = v25 & 0xF7;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x400) != 0 )
      *((_BYTE *)v6 + 109) |= 1u;
    PoFxSetComponentLatency(*Pool, 0LL, -1LL);
    PoFxSetComponentResidency(*Pool, 0LL, -1LL);
    if ( *((char *)v6 + 107) >= 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      v6[1228] = *(_DWORD *)(a2 + 16);
    v27 = (unsigned int)v6[1228];
    *((_QWORD *)v6 + 612) = Pool;
    RaidAdapterPoFxSetDeviceIdleTimeout(v6, v27, v26, 0LL);
    if ( StorEtwLoggingEnabled )
    {
      v29 = (unsigned int)v6[14];
      if ( (_DWORD)v29 != -1 && (byte_1C0092A02 & 0x10) != 0 )
      {
        v30 = (*((unsigned __int8 *)v6 + 107) >> 4) & 1;
        McTemplateK0pqtqqt_EtwWriteTransfer(
          v30,
          v29,
          v28,
          **((_QWORD **)v6 + 612),
          v29,
          v30,
          v6[1228],
          v11[2],
          (*((unsigned __int8 *)v6 + 110) >> 6) & 1);
      }
    }
    PoFxStartDevicePowerManagement(**((_QWORD **)v6 + 612));
    return 0LL;
  }
  PoFxUnregisterDevice(v31);
  return 3238002691LL;
}
