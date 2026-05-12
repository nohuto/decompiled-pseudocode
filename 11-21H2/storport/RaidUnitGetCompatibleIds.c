/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C001F740
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0087BAC (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C001E0F4 (RaUnitIsSMRDisabled.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001F684 (RaidUnitGet1667DeviceRegistryValue.c)
 *     RtlStringCchPrintfExW @ 0x1C001FBAC (RtlStringCchPrintfExW.c)
 *     McTemplateK0zqjuuussssq_EtwWriteTransfer @ 0x1C00505A4 (McTemplateK0zqjuuussssq_EtwWriteTransfer.c)
 *     RaFixupIds @ 0x1C008793C (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C00879D8 (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  wchar_t *v3; // rsi
  wchar_t *Pool; // rax
  __int64 v6; // r8
  int v7; // eax
  _QWORD *DeviceType; // rax
  size_t v9; // rdx
  NTSTATUS v10; // edi
  wchar_t *v11; // rcx
  size_t v12; // rdx
  size_t v13; // r15
  NTSTRSAFE_PWSTR v14; // r14
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // rcx
  const int *v20; // r8
  __int64 v21; // r10
  const int *v22; // rdi
  NTSTATUS v23; // eax
  wchar_t *v24; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp+48h] BYREF
  size_t pcchRemaining; // [rsp+C0h] [rbp+50h] BYREF

  v3 = 0LL;
  if ( !(unsigned int)RaUnitIsSMRDisabled(a1) || (*(_DWORD *)(a1 + 1824) & 1) != 0 )
  {
    Pool = (wchar_t *)RaidAllocatePool(256LL, 76LL, 1229218130LL, *(_QWORD *)(a1 + 8));
    v3 = Pool;
    if ( !Pool )
    {
      v10 = -1073741801;
      goto LABEL_9;
    }
    ppszDestEnd = Pool;
    v7 = *(_DWORD *)(a1 + 1824);
    pcchRemaining = 38LL;
    if ( (v7 & 1) != 0 )
    {
      v23 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    }
    else if ( (v7 & 0x20) != 0 )
    {
      v10 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs", "ZNSDisk");
      v24 = ++ppszDestEnd;
      if ( v10 < 0 )
        goto LABEL_9;
      v23 = RtlStringCchPrintfExW(v24, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\RAW");
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, 38LL, v6);
      v10 = RtlStringCchPrintfExW(v3, v9, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
      v11 = ppszDestEnd + 1;
      v12 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v10 < 0 )
        goto LABEL_9;
      v10 = RtlStringCchPrintfExW(v11, v12, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
      v13 = pcchRemaining;
      v14 = ++ppszDestEnd;
      if ( v10 < 0 )
        goto LABEL_9;
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
      {
LABEL_8:
        *v14 = 0;
        LOBYTE(v15) = 1;
        RaFixupIds(v3, v15, 38LL);
        goto LABEL_9;
      }
      v23 = RtlStringCchPrintfExW(v14, v13 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
    }
    v10 = v23;
    v14 = ppszDestEnd + 1;
    if ( v23 < 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(_DWORD *)(v17 + 4536);
  if ( v18 > 1 )
  {
    v19 = *(_QWORD *)(a1 + 152);
    v20 = 0LL;
    if ( v19 )
    {
      v20 = (const int *)(v19 + 90);
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 144);
      if ( v21 && (*(_DWORD *)(*(_QWORD *)(v17 + 568) + 184LL) & 0x40) != 0 )
        v20 = (const int *)(v21 + 41);
    }
    if ( (byte_1C00799E4 & 2) != 0 )
    {
      v22 = &dword_1C006A660;
      if ( v20 )
        v22 = v20;
      McTemplateK0zqjuuussssq_EtwWriteTransfer(
        *(_DWORD *)(a1 + 96) >> 8,
        v17 + 4936,
        a1 + 186,
        *(_QWORD *)(v17 + 4592),
        *(_DWORD *)(v17 + 56),
        v17 + 4936,
        *(_DWORD *)(a1 + 96),
        BYTE1(*(_DWORD *)(a1 + 96)),
        BYTE2(*(_DWORD *)(a1 + 96)),
        a1 + 160,
        a1 + 169,
        a1 + 186,
        (__int64)v22,
        v18);
    }
  }
  v10 = -1073741637;
LABEL_9:
  result = (unsigned int)v10;
  *a2 = v3;
  return result;
}
