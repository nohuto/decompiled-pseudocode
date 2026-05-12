/*
 * XREFs of RaidUnitGetCompatibleIds @ 0x1C001F9F8
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00A238C (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C00196F8 (RaUnitIsSMRDisabled.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C001D3C4 (RaidUnitGet1667DeviceRegistryValue.c)
 *     RtlStringCchPrintfExW @ 0x1C001FE68 (RtlStringCchPrintfExW.c)
 *     McTemplateK0zqjuuussssq_EtwWriteTransfer @ 0x1C005CCF0 (McTemplateK0zqjuuussssq_EtwWriteTransfer.c)
 *     PortGetDeviceType @ 0x1C00A1420 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C00A25C4 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetCompatibleIds(__int64 a1, wchar_t **a2)
{
  int *v2; // rdi
  wchar_t *v3; // rsi
  __int64 v6; // rcx
  wchar_t *Pool; // rax
  int v8; // eax
  _QWORD *DeviceType; // rax
  size_t v10; // rdx
  NTSTATUS v11; // edi
  wchar_t *v12; // rcx
  size_t v13; // rdx
  size_t v14; // r15
  NTSTRSAFE_PWSTR v15; // r14
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // r9
  int v19; // r14d
  unsigned int v20; // eax
  const int *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r10
  const int *v24; // rdi
  NTSTATUS v25; // eax
  wchar_t *v26; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp+48h] BYREF
  size_t pcchRemaining; // [rsp+C0h] [rbp+50h] BYREF

  v2 = (int *)(a1 + 1872);
  v3 = 0LL;
  if ( !(unsigned int)RaUnitIsSMRDisabled(a1) || (*v2 & 1) != 0 )
  {
    Pool = (wchar_t *)RaidAllocatePool(256LL, 76LL, 1229218130LL, *(_QWORD *)(v6 + 8));
    v3 = Pool;
    if ( !Pool )
    {
      v11 = -1073741801;
      goto LABEL_9;
    }
    ppszDestEnd = Pool;
    v8 = *v2;
    pcchRemaining = 38LL;
    if ( (v8 & 1) != 0 )
    {
      v25 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
    }
    else if ( (v8 & 0x20) != 0 )
    {
      v11 = RtlStringCchPrintfExW(v3, 0x26uLL, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs", "ZNSDisk");
      v26 = ++ppszDestEnd;
      if ( v11 < 0 )
        goto LABEL_9;
      v25 = RtlStringCchPrintfExW(v26, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\RAW");
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
      v11 = RtlStringCchPrintfExW(v3, v10, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs", *DeviceType);
      v12 = ppszDestEnd + 1;
      v13 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      if ( v11 < 0 )
        goto LABEL_9;
      v11 = RtlStringCchPrintfExW(v12, v13, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\RAW");
      v14 = pcchRemaining;
      v15 = ++ppszDestEnd;
      if ( v11 < 0 )
        goto LABEL_9;
      RaidUnitGet1667DeviceRegistryValue(a1);
      if ( (*(_BYTE *)(a1 + 128) & 1) == 0 )
      {
LABEL_8:
        *v15 = 0;
        LOBYTE(v16) = 1;
        RaFixupIds(v3, v16, 38LL);
        goto LABEL_9;
      }
      v25 = RtlStringCchPrintfExW(v15, v14 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "Disk1667");
    }
    v11 = v25;
    v15 = ppszDestEnd + 1;
    if ( v25 < 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v18 = *(_QWORD *)(v6 + 24);
  v19 = *(_DWORD *)(v18 + 4600);
  if ( v19 > 1 )
  {
    v20 = *(_DWORD *)(v6 + 96);
    v21 = 0LL;
    v22 = *(_QWORD *)(v6 + 152);
    if ( v22 )
    {
      v21 = (const int *)(v22 + 90);
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 144);
      if ( v23 && (*(_DWORD *)(*(_QWORD *)(v18 + 568) + 184LL) & 0x40) != 0 )
        v21 = (const int *)(v23 + 41);
    }
    if ( (byte_1C0092A04 & 4) != 0 )
    {
      v24 = &dword_1C0081784;
      if ( v21 )
        v24 = v21;
      McTemplateK0zqjuuussssq_EtwWriteTransfer(
        v20 >> 8,
        v18 + 5000,
        a1 + 186,
        *(_QWORD *)(v18 + 4656),
        *(_DWORD *)(v18 + 56),
        v18 + 5000,
        v20,
        SBYTE1(v20),
        SBYTE2(v20),
        a1 + 160,
        a1 + 169,
        a1 + 186,
        (__int64)v24,
        v19);
    }
  }
  v11 = -1073741637;
LABEL_9:
  result = (unsigned int)v11;
  *a2 = v3;
  return result;
}
