/*
 * XREFs of sub_1C00A9538 @ 0x1C00A9538
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C003BE28 @ 0x1C003BE28 (sub_1C003BE28.c)
 *     StorPortGetUncachedExtension @ 0x1C00465B0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003F87C @ 0x1C003F87C (sub_1C003F87C.c)
 */

__int64 __fastcall sub_1C00A9538(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, char a5)
{
  bool v9; // si
  int v10; // edx
  ULONG Version; // r8d
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DEVICE_DESCRIPTION Dst; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-28h]
  int v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h]

  if ( !a1 )
    return 3221225485LL;
  v9 = a5 || (*(_DWORD *)(a3 + 220) & 8) != 0;
  memset_0(&Dst, 0, 0x40uLL);
  v10 = 2;
  if ( v9 )
  {
    v21 = 0;
    Version = 3;
    v22 = 0LL;
    v12 = 3;
    Dst.Version = 3;
  }
  else
  {
    Version = Dst.Version;
    Dst.DemandMode = *(_BYTE *)(a3 + 88);
    Dst.Dma32BitAddresses = *(_BYTE *)(a3 + 87);
    Dst.DmaSpeed = *(_DWORD *)(a3 + 44);
    v12 = 2;
  }
  *(_DWORD *)(a1 + 28) = v12;
  v13 = *(unsigned __int8 *)(a3 + 144);
  Dst.DmaChannel = *(_DWORD *)(a3 + 32);
  Dst.InterfaceType = *(_DWORD *)(a3 + 8);
  Dst.BusNumber = *(_DWORD *)(a3 + 4);
  Dst.DmaWidth = *(_DWORD *)(a3 + 40);
  Dst.ScatterGather = *(_BYTE *)(a3 + 81);
  Dst.Master = *(_BYTE *)(a3 + 82);
  Dst.DmaPort = *(_DWORD *)(a3 + 36);
  Dst.MaximumLength = *(_DWORD *)(a3 + 24);
  Dst.AutoInitialize = 0;
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 && (unsigned int)(v15 - 1) >= 2 )
    {
      *(_DWORD *)(a1 + 24) = 1;
      if ( v9 )
      {
        v16 = 32;
LABEL_19:
        v20 = v16;
        goto LABEL_22;
      }
      Dst.Dma64BitAddresses = 0;
      goto LABEL_21;
    }
    v10 = 3;
  }
  *(_DWORD *)(a1 + 24) = v10;
  if ( v9 )
  {
    v16 = 64;
    goto LABEL_19;
  }
  Dst.Dma64BitAddresses = 1;
LABEL_21:
  v16 = v20;
LABEL_22:
  if ( Version == 3 && (*(_DWORD *)(a3 + 220) & 0x40) != 0 )
  {
    v17 = *(unsigned __int8 *)(a3 + 198);
    if ( (unsigned __int8)(v17 - 1) <= 0x3Fu )
    {
      if ( v16 > v17 )
        v16 = *(unsigned __int8 *)(a3 + 198);
      v20 = v16;
    }
  }
  DmaAdapter = IoGetDmaAdapter(a2, &Dst, (PULONG)(a1 + 12));
  *(_QWORD *)a1 = DmaAdapter;
  if ( !DmaAdapter )
    return 3221225626LL;
  *(_BYTE *)(a1 + 8) = sub_1C003F87C(a2);
  return 0LL;
}
