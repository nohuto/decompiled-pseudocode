/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C00346D8
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019D9C (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0qzzuqqqqqqd_EtwWriteTransfer @ 0x1C00338CC (McTemplateK0qzzuqqqqqqd_EtwWriteTransfer.c)
 *     RaInitializePower @ 0x1C0034170 (RaInitializePower.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x1C0035700 (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     RaidQueryPciDeviceType @ 0x1C005A964 (RaidQueryPciDeviceType.c)
 *     StorCreateScsiSymbolicLink @ 0x1C005BF14 (StorCreateScsiSymbolicLink.c)
 *     RaFreeRaidResources @ 0x1C00658F8 (RaFreeRaidResources.c)
 *     RaInitializeRaidResources @ 0x1C0065A68 (RaInitializeRaidResources.c)
 *     StorAllocateGatewayLockHandleArray @ 0x1C0065EFC (StorAllocateGatewayLockHandleArray.c)
 *     StorCreateIoGateways @ 0x1C0065F54 (StorCreateIoGateways.c)
 *     StorGetActiveGatewayCountRequired @ 0x1C00662D8 (StorGetActiveGatewayCountRequired.c)
 *     RaidInitializeDma @ 0x1C00A8368 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C00A84FC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  __int64 v1; // r13
  int v2; // r14d
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v6; // rcx
  int IoGateways; // edi
  __int64 v8; // r8
  unsigned int ActiveGatewayCountRequired; // r12d
  unsigned int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // esi
  _WORD *v21; // rdx
  _WORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // [rsp+40h] [rbp-C8h]
  int v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  char v38[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  char v41[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 484) + 7;
  v30 = 0;
  v4 = (v2 & 0xFFFFFFF8) + 1104;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 442) == 1 )
  {
    v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x80u) != 0 ? 224 : 184;
    v4 += v5;
  }
  IoGateways = StorCreateIoGateways(a1);
  if ( IoGateways >= 0 )
  {
    ActiveGatewayCountRequired = StorGetActiveGatewayCountRequired(a1, &v30);
    v10 = *(_DWORD *)(a1 + 908);
    if ( ActiveGatewayCountRequired > v10 )
    {
      if ( (byte_1C0092A06 & 0x40) != 0 )
        McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
          v6,
          &EventTooManyActiveGatewayRequired,
          v8,
          *(_DWORD *)(a1 + 56),
          *(const wchar_t **)(a1 + 4664),
          *(const wchar_t **)(a1 + 4656),
          *(_BYTE *)(a1 + 4307),
          v27,
          v30,
          v28,
          v10,
          ActiveGatewayCountRequired,
          0,
          0);
      ActiveGatewayCountRequired = *(_DWORD *)(a1 + 908);
    }
    v11 = 0;
    if ( !ActiveGatewayCountRequired )
      goto LABEL_28;
    do
    {
      IoGateways = RaInitializeRaidResources(
                     *(_DWORD *)(a1 + 896) + 320 * v11,
                     *(_DWORD *)(a1 + 548),
                     v4,
                     *(_QWORD *)(a1 + 8),
                     *(_BYTE *)(a1 + 4306),
                     v5);
      if ( IoGateways < 0 )
        break;
      v6 = *(_QWORD *)(a1 + 896);
      ++v11;
      v12 = *(_DWORD *)(v6 + v1 + 136);
      *(_DWORD *)(v6 + v1 + 32) = v12;
      *(_DWORD *)(v6 + v1 + 28) = v12;
      v1 += 320LL;
    }
    while ( v11 < ActiveGatewayCountRequired );
    if ( v11 )
    {
      if ( v11 != ActiveGatewayCountRequired && (byte_1C0092A06 & 0x40) != 0 )
        McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
          v6,
          &EventInsufficientGatewayInitialized,
          v8,
          *(_DWORD *)(a1 + 56),
          *(const wchar_t **)(a1 + 4664),
          *(const wchar_t **)(a1 + 4656),
          *(_BYTE *)(a1 + 4307),
          v27,
          v30,
          v28,
          *(_DWORD *)(a1 + 908),
          ActiveGatewayCountRequired,
          v11,
          IoGateways);
      v13 = v30 - 1;
      *(_DWORD *)(a1 + 904) = v11;
      v14 = (v11 + v13 - (v11 + v13) % v11) % v11;
      *(_DWORD *)(a1 + 912) = (v11 + v13 - (v11 + v13) % v11) / v11;
      if ( v11 > 1 )
      {
        RaidAdapterEnableIoResourceAutoReclaim(a1, 0LL);
        if ( *(_QWORD *)(a1 + 4896) )
          StorAllocateGatewayLockHandleArray(a1);
      }
      if ( !*(_BYTE *)(a1 + 4306)
        || (unsigned __int8)RaidIsDmaInitialized(a1 + 760, v14)
        || (IoGateways = RaidInitializeDma(v15, *(_QWORD *)(a1 + 32), a1 + 344), IoGateways >= 0) )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *(_DWORD *)(a1 + 392);
        if ( v17 > *(_DWORD *)(v16 + 152) )
          *(_DWORD *)(v16 + 152) = v17;
        IoGateways = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40));
        if ( IoGateways >= 0 )
        {
          v19 = *(_QWORD *)(a1 + 568);
          *(_DWORD *)(a1 + 5692) = -1;
          if ( *(_DWORD *)(v19 + 4) == 5 && (int)RaidQueryPciDeviceType(*(_QWORD *)(a1 + 32), a1 + 5692) < 0 )
            *(_DWORD *)(a1 + 5692) = -2;
          RaInitializePower(a1, v18);
          *(_BYTE *)(a1 + 316) = 0;
          *(_DWORD *)(a1 + 304) = 1;
          *(_QWORD *)(a1 + 308) = 1LL;
          goto LABEL_33;
        }
      }
    }
    else
    {
LABEL_28:
      if ( IoGateways >= 0 )
        goto LABEL_33;
    }
  }
  if ( *(_DWORD *)(a1 + 904) )
  {
    v20 = 0;
    do
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 4306);
      RaFreeRaidResources(*(_QWORD *)(a1 + 896) + 320LL * v20++, *(_QWORD *)(a1 + 8), v8);
    }
    while ( v20 < *(_DWORD *)(a1 + 904) );
    *(_DWORD *)(a1 + 904) = 0;
  }
LABEL_33:
  if ( (unsigned int)dword_1C00920C8 > 5 && tlgKeywordOn(v6, 0x400000000000LL) )
  {
    v21 = *(_WORD **)(a1 + 4656);
    v34 = a1 + 5000;
    v30 = *(_DWORD *)(a1 + 56);
    v36 = &v30;
    v35 = 16LL;
    v37 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v38, v21);
    v22 = *(_WORD **)(a1 + 4664);
    LOBYTE(v29) = *(_BYTE *)(a1 + 4212);
    v39 = &v29;
    v40 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v41, v22);
    v23 = *(unsigned int *)(a1 + 548);
    v42 = &v31;
    v31 = v23;
    v44 = &v32;
    v43 = 4LL;
    v32 = IoGateways;
    v45 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v23, (unsigned __int8 *)dword_1C00839C0, v24, v25, 9u, &v33);
  }
  return (unsigned int)IoGateways;
}
