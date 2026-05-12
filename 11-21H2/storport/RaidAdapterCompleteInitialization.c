/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C0033A68
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     StorAllocateGatewayLockHandleArray @ 0x1C0023B58 (StorAllocateGatewayLockHandleArray.c)
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1C0024BCE (RaidAdapterIsRegisteredForIdleDetection.c)
 *     McTemplateK0qzzuqqqqqqd_EtwWriteTransfer @ 0x1C0032C70 (McTemplateK0qzzuqqqqqqd_EtwWriteTransfer.c)
 *     RaInitializePower @ 0x1C003350C (RaInitializePower.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x1C00349D4 (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     RaidQueryPciDeviceType @ 0x1C004F2CC (RaidQueryPciDeviceType.c)
 *     StorCreateScsiSymbolicLink @ 0x1C004FA1C (StorCreateScsiSymbolicLink.c)
 *     RaFreeRaidResources @ 0x1C00589F8 (RaFreeRaidResources.c)
 *     RaInitializeRaidResources @ 0x1C0058B7C (RaInitializeRaidResources.c)
 *     StorCreateIoGateways @ 0x1C0058F48 (StorCreateIoGateways.c)
 *     StorGetActiveGatewayCountRequired @ 0x1C0059298 (StorGetActiveGatewayCountRequired.c)
 *     RaidInitializeDma @ 0x1C008DC98 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C008DE20 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  __int64 v1; // r13
  int v2; // esi
  unsigned int v4; // esi
  int v5; // r15d
  __int64 v6; // rcx
  int IoGateways; // edi
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned int ActiveGatewayCountRequired; // r12d
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // esi
  _WORD *v23; // rdx
  _WORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // [rsp+40h] [rbp-C8h]
  int v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v33; // [rsp+80h] [rbp-88h] BYREF
  int v34; // [rsp+84h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+88h] [rbp-80h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  int *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  char v40[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  char v43[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  int *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 484) + 7;
  v32 = 0;
  v4 = (v2 & 0xFFFFFFF8) + 1104;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 442) == 1 )
  {
    v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x80u) != 0 ? 224 : 184;
    v4 += v5;
  }
  IoGateways = StorCreateIoGateways(a1);
  if ( IoGateways < 0 )
  {
LABEL_29:
    if ( *(_DWORD *)(a1 + 840) )
    {
      v22 = 0;
      do
      {
        LOBYTE(v8) = *(_BYTE *)(a1 + 4242);
        RaFreeRaidResources(*(_QWORD *)(a1 + 832) + 320LL * v22++, *(_QWORD *)(a1 + 8), v8);
      }
      while ( v22 < *(_DWORD *)(a1 + 840) );
      *(_DWORD *)(a1 + 840) = 0;
    }
    goto LABEL_33;
  }
  ActiveGatewayCountRequired = StorGetActiveGatewayCountRequired(a1, &v32);
  v11 = *(_DWORD *)(a1 + 844);
  if ( ActiveGatewayCountRequired > v11 )
  {
    if ( (byte_1C00799E6 & 0x20) != 0 )
    {
      McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
        v6,
        &EventTooManyActiveGatewayRequired,
        v9,
        *(_DWORD *)(a1 + 56),
        *(const wchar_t **)(a1 + 4600),
        *(const wchar_t **)(a1 + 4592),
        *(_BYTE *)(a1 + 4243),
        v29,
        v32,
        v30,
        v11,
        ActiveGatewayCountRequired,
        0,
        0);
      v11 = *(_DWORD *)(a1 + 844);
    }
    ActiveGatewayCountRequired = v11;
  }
  v12 = 0;
  if ( ActiveGatewayCountRequired )
  {
    do
    {
      IoGateways = RaInitializeRaidResources(
                     *(_DWORD *)(a1 + 832) + 320 * v12,
                     *(_DWORD *)(a1 + 548),
                     v4,
                     *(_QWORD *)(a1 + 8),
                     *(_BYTE *)(a1 + 4242),
                     v5);
      if ( IoGateways < 0 )
        break;
      v6 = *(_QWORD *)(a1 + 832);
      ++v12;
      v13 = *(_DWORD *)(v6 + v1 + 136);
      *(_DWORD *)(v6 + v1 + 32) = v13;
      *(_DWORD *)(v6 + v1 + 28) = v13;
      v1 += 320LL;
    }
    while ( v12 < ActiveGatewayCountRequired );
    if ( v12 )
    {
      if ( v12 != ActiveGatewayCountRequired && (byte_1C00799E6 & 0x20) != 0 )
        McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
          v6,
          &EventInsufficientGatewayInitialized,
          v8,
          *(_DWORD *)(a1 + 56),
          *(const wchar_t **)(a1 + 4600),
          *(const wchar_t **)(a1 + 4592),
          *(_BYTE *)(a1 + 4243),
          v29,
          v32,
          v30,
          *(_DWORD *)(a1 + 844),
          ActiveGatewayCountRequired,
          v12,
          IoGateways);
      v14 = v32 - 1;
      *(_DWORD *)(a1 + 840) = v12;
      v15 = (v12 + v14 - (v12 + v14) % v12) % v12;
      *(_DWORD *)(a1 + 848) = (v12 + v14 - (v12 + v14) % v12) / v12;
      if ( v12 > 1 )
      {
        RaidAdapterEnableIoResourceAutoReclaim(a1, 0LL);
        if ( RaidAdapterIsRegisteredForIdleDetection(a1) )
          StorAllocateGatewayLockHandleArray(v16);
      }
      if ( !*(_BYTE *)(a1 + 4242)
        || (unsigned __int8)RaidIsDmaInitialized(a1 + 752, v15)
        || (IoGateways = RaidInitializeDma(v17, *(_QWORD *)(a1 + 32), a1 + 344), IoGateways >= 0) )
      {
        v18 = *(_QWORD *)(a1 + 8);
        v19 = *(_DWORD *)(a1 + 392);
        if ( v19 > *(_DWORD *)(v18 + 152) )
          *(_DWORD *)(v18 + 152) = v19;
        IoGateways = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40));
        if ( IoGateways >= 0 )
        {
          v21 = *(_QWORD *)(a1 + 568);
          *(_DWORD *)(a1 + 5628) = -1;
          if ( *(_DWORD *)(v21 + 4) == 5 && (int)RaidQueryPciDeviceType(*(_QWORD *)(a1 + 32), a1 + 5628) < 0 )
            *(_DWORD *)(a1 + 5628) = -2;
          RaInitializePower(a1, v20);
          *(_BYTE *)(a1 + 316) = 0;
          *(_DWORD *)(a1 + 304) = 1;
          *(_QWORD *)(a1 + 308) = 1LL;
          goto LABEL_33;
        }
      }
    }
    else if ( IoGateways >= 0 )
    {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
LABEL_33:
  if ( (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v6, 0x400000000000LL) )
  {
    v23 = *(_WORD **)(a1 + 4592);
    v36 = a1 + 4936;
    v32 = *(_DWORD *)(a1 + 56);
    v38 = &v32;
    v37 = 16LL;
    v39 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v40, v23);
    v24 = *(_WORD **)(a1 + 4600);
    LOBYTE(v31) = *(_BYTE *)(a1 + 4148);
    v41 = &v31;
    v42 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v43, v24);
    v25 = *(unsigned int *)(a1 + 548);
    v44 = &v33;
    v33 = v25;
    v46 = &v34;
    v45 = 4LL;
    v34 = IoGateways;
    v47 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v25, (unsigned __int8 *)dword_1C006C901, v26, v27, 9u, &v35);
  }
  return (unsigned int)IoGateways;
}
