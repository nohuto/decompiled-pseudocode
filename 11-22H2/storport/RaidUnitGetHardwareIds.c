/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C001FB5C
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C00A238C (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C00196F8 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001FE68 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidHexFromUshort @ 0x1C006071C (RaidHexFromUshort.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1C00634D0 (StorCopyNVMeFirmwareRevision.c)
 *     PortGetDeviceType @ 0x1C00A1420 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C00A25C4 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  __int64 v2; // r9
  wchar_t *Pool; // rax
  wchar_t *v5; // rsi
  int v6; // eax
  _BYTE *v7; // r15
  size_t v8; // rdx
  wchar_t *v9; // r10
  size_t v10; // r11
  _QWORD *DeviceType; // r14
  _BYTE *v12; // r13
  _BYTE *v13; // r12
  _BYTE *v14; // r15
  NTSTATUS v15; // eax
  wchar_t v16; // r8
  NTSTATUS v17; // ebx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  unsigned __int16 *v23; // rbx
  __int64 v24; // rax
  _BYTE *v25; // [rsp+40h] [rbp-99h]
  _BYTE *v26; // [rsp+48h] [rbp-91h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-89h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-81h] BYREF
  wchar_t **v29; // [rsp+60h] [rbp-79h]
  __int128 v30; // [rsp+68h] [rbp-71h] BYREF
  char v31; // [rsp+78h] [rbp-61h]
  __int128 v32; // [rsp+80h] [rbp-59h] BYREF
  char v33; // [rsp+90h] [rbp-49h]
  _OWORD v34[4]; // [rsp+A0h] [rbp-39h] BYREF
  char v35; // [rsp+E0h] [rbp+7h]

  v2 = *(_QWORD *)(a1 + 8);
  v29 = a2;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 718LL, 1229218130LL, v2);
  v5 = Pool;
  pcchRemaining = 359LL;
  if ( !Pool )
  {
    v17 = -1073741801;
    goto LABEL_15;
  }
  ppszDestEnd = Pool;
  v6 = *(_DWORD *)(a1 + 1872);
  if ( (v6 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(
            v5,
            0x167uLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
            *(_QWORD *)(a1 + 104) + 8LL,
            *(_QWORD *)(a1 + 104) + 16LL,
            *(_QWORD *)(a1 + 104) + 32LL);
    v9 = ppszDestEnd + 1;
    v8 = pcchRemaining - 1;
    ++ppszDestEnd;
    if ( v17 < 0 )
      goto LABEL_13;
    v21 = RtlStringCchPrintfExW(v9, v8, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
  }
  else
  {
    if ( (v6 & 0x20) == 0 )
    {
      v7 = *(_BYTE **)(a1 + 104);
      DeviceType = (_QWORD *)PortGetDeviceType(*v7 & 0x1F);
      if ( *(_DWORD *)(a1 + 3344) == 17 )
      {
        v24 = *(_QWORD *)(a1 + 152);
        if ( v24 )
        {
          v17 = RtlStringCchPrintfExW(
                  v5,
                  v10,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
                  *DeviceType,
                  v7 + 8,
                  v24 + 25,
                  v24 + 90);
          v9 = ppszDestEnd + 1;
          v8 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v17 < 0 )
            goto LABEL_13;
          v17 = RtlStringCchPrintfExW(
                  v9,
                  v8,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%hs%8.8hs%40.40hs",
                  *DeviceType,
                  v7 + 8,
                  *(_QWORD *)(a1 + 152) + 25LL);
          v9 = ppszDestEnd + 1;
          v8 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v17 < 0 )
            goto LABEL_13;
        }
      }
      v12 = v7 + 32;
      v26 = v7 + 32;
      v13 = v7 + 16;
      v25 = v7 + 16;
      v14 = v7 + 8;
      v15 = RtlStringCchPrintfExW(
              v9,
              v8,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *DeviceType,
              v14,
              v25,
              v26);
      v16 = 0;
      v9 = ppszDestEnd + 1;
      v8 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v17 = v15;
      if ( v15 < 0 )
        goto LABEL_14;
      v18 = RtlStringCchPrintfExW(
              v9,
              v8,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs",
              *DeviceType,
              v14,
              v13);
      v16 = 0;
      v9 = ppszDestEnd + 1;
      v8 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v17 = v18;
      if ( v18 < 0 )
        goto LABEL_14;
      v17 = RtlStringCchPrintfExW(v9, v8, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *DeviceType, v14);
      if ( v17 >= 0 )
      {
        ++ppszDestEnd;
        --pcchRemaining;
        v19 = RtlStringCchPrintfExW(
                ppszDestEnd,
                pcchRemaining,
                &ppszDestEnd,
                &pcchRemaining,
                0,
                L"SCSI\\%8.8hs%16.16hs%1.1hs",
                v14,
                v13,
                v12);
        v16 = 0;
        v9 = ppszDestEnd + 1;
        v8 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
        v17 = v19;
        if ( v19 < 0 )
          goto LABEL_14;
        v20 = RtlStringCchPrintfExW(v9, v8, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v14, v13, v12);
        v16 = 0;
        v9 = ppszDestEnd + 1;
        v8 = pcchRemaining - 1;
        ++ppszDestEnd;
        v17 = v20;
        if ( v20 < 0 || (unsigned int)RaUnitIsSMRDisabled(a1) )
          goto LABEL_14;
        v21 = RtlStringCchPrintfExW(v9, v8, &ppszDestEnd, &pcchRemaining, 0, L"%hs", DeviceType[1]);
        goto LABEL_12;
      }
LABEL_26:
      v9 = ppszDestEnd;
      goto LABEL_13;
    }
    v23 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 24) + 5912LL);
    v30 = 0LL;
    v31 = 0;
    memset_0(v34, 0, 0x41uLL);
    v33 = 0;
    v32 = 0LL;
    RaidHexFromUshort(*v23, &v30, 17LL);
    v34[0] = *(_OWORD *)(v23 + 12);
    v34[1] = *(_OWORD *)(v23 + 20);
    v34[2] = *(_OWORD *)(v23 + 28);
    v34[3] = *(_OWORD *)(v23 + 36);
    v35 = *((_BYTE *)v23 + 88);
    StorCopyNVMeFirmwareRevision(v23, &v32, 17LL);
    v17 = RtlStringCchPrintfExW(
            v5,
            0x167uLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
            "ZNSDisk",
            &v30,
            v34,
            &v32);
    v9 = ppszDestEnd + 1;
    v8 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_13;
    v17 = RtlStringCchPrintfExW(
            v9,
            v8,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs_%8.8hs%40.40hs",
            "ZNSDisk",
            &v30,
            v34);
    v9 = ppszDestEnd + 1;
    v8 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_13;
    v17 = RtlStringCchPrintfExW(v9, v8, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs_%8.8hs", "ZNSDisk", &v30);
    if ( v17 < 0 )
      goto LABEL_26;
    ++ppszDestEnd;
    v21 = RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "GenNvmeDisk");
  }
LABEL_12:
  v17 = v21;
  v9 = ppszDestEnd + 1;
LABEL_13:
  v16 = 0;
LABEL_14:
  *v9 = v16;
  LOBYTE(v8) = 1;
  RaFixupIds(v5, v8, 359LL);
LABEL_15:
  *v29 = v5;
  return (unsigned int)v17;
}
