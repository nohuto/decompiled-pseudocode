/*
 * XREFs of RaidUnitGetHardwareIds @ 0x1C001F8A0
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0087BAC (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaUnitIsSMRDisabled @ 0x1C001E0F4 (RaUnitIsSMRDisabled.c)
 *     RtlStringCchPrintfExW @ 0x1C001FBAC (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidHexFromUshort @ 0x1C0053DAC (RaidHexFromUshort.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1C0056700 (StorCopyNVMeFirmwareRevision.c)
 *     RaFixupIds @ 0x1C008793C (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C00879D8 (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetHardwareIds(__int64 a1, wchar_t **a2)
{
  __int64 v2; // r9
  wchar_t *Pool; // rax
  __int64 v5; // r8
  wchar_t *v6; // rsi
  int v7; // eax
  _BYTE *v8; // r15
  size_t v9; // rdx
  wchar_t *v10; // r10
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
  __int64 v21; // r11
  NTSTATUS v22; // eax
  unsigned __int16 *v24; // r9
  __int64 v25; // r9
  __int64 v26; // rax
  _BYTE *v27; // [rsp+40h] [rbp-99h]
  _BYTE *v28; // [rsp+48h] [rbp-91h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-89h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-81h] BYREF
  wchar_t **v31; // [rsp+60h] [rbp-79h]
  __int128 v32; // [rsp+68h] [rbp-71h] BYREF
  char v33; // [rsp+78h] [rbp-61h]
  __int128 v34; // [rsp+80h] [rbp-59h] BYREF
  char v35; // [rsp+90h] [rbp-49h]
  _OWORD v36[4]; // [rsp+A0h] [rbp-39h] BYREF
  char v37; // [rsp+E0h] [rbp+7h]

  v2 = *(_QWORD *)(a1 + 8);
  v31 = a2;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 718LL, 1229218130LL, v2);
  pcchRemaining = 359LL;
  v6 = Pool;
  if ( !Pool )
  {
    v17 = -1073741801;
    goto LABEL_15;
  }
  ppszDestEnd = Pool;
  v7 = *(_DWORD *)(a1 + 1824);
  if ( (v7 & 1) != 0 )
  {
    v17 = RtlStringCchPrintfExW(
            v6,
            0x167uLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"SCSI\\VMLUN%8.8hs%16.16hs%4.4hs",
            *(_QWORD *)(a1 + 104) + 8LL,
            *(_QWORD *)(a1 + 104) + 16LL,
            *(_QWORD *)(a1 + 104) + 32LL);
    v10 = ppszDestEnd + 1;
    v9 = pcchRemaining - 1;
    ++ppszDestEnd;
    if ( v17 < 0 )
      goto LABEL_13;
    v22 = RtlStringCchPrintfExW(v10, v9, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\VMLUN");
  }
  else
  {
    if ( (v7 & 0x20) == 0 )
    {
      v8 = *(_BYTE **)(a1 + 104);
      DeviceType = (_QWORD *)PortGetDeviceType(*v8 & 0x1F, 359LL, v5);
      if ( *(_DWORD *)(a1 + 3296) == 17 )
      {
        v26 = *(_QWORD *)(a1 + 152);
        if ( v26 )
        {
          v17 = RtlStringCchPrintfExW(
                  v6,
                  0x167uLL,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%hs%8.8hs%40.40hs%8.8hs",
                  *DeviceType,
                  v8 + 8,
                  v26 + 25,
                  v26 + 90);
          v10 = ppszDestEnd + 1;
          v9 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v17 < 0 )
            goto LABEL_13;
          v17 = RtlStringCchPrintfExW(
                  v10,
                  v9,
                  &ppszDestEnd,
                  &pcchRemaining,
                  0,
                  L"SCSI\\%hs%8.8hs%40.40hs",
                  *DeviceType,
                  v8 + 8,
                  *(_QWORD *)(a1 + 152) + 25LL);
          v10 = ppszDestEnd + 1;
          v9 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
          if ( v17 < 0 )
            goto LABEL_13;
        }
      }
      v12 = v8 + 32;
      v28 = v8 + 32;
      v13 = v8 + 16;
      v27 = v8 + 16;
      v14 = v8 + 8;
      v15 = RtlStringCchPrintfExW(
              v10,
              v9,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs%4.4hs",
              *DeviceType,
              v14,
              v27,
              v28);
      v16 = 0;
      v10 = ppszDestEnd + 1;
      v9 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v17 = v15;
      if ( v15 < 0 )
        goto LABEL_14;
      v18 = RtlStringCchPrintfExW(
              v10,
              v9,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"SCSI\\%hs%8.8hs%16.16hs",
              *DeviceType,
              v14,
              v13);
      v16 = 0;
      v10 = ppszDestEnd + 1;
      v9 = pcchRemaining - 1;
      ++ppszDestEnd;
      --pcchRemaining;
      v17 = v18;
      if ( v18 < 0 )
        goto LABEL_14;
      v17 = RtlStringCchPrintfExW(v10, v9, &ppszDestEnd, &pcchRemaining, 0, L"SCSI\\%hs%8.8hs", *DeviceType, v14);
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
        v10 = ppszDestEnd + 1;
        v9 = pcchRemaining - 1;
        ++ppszDestEnd;
        --pcchRemaining;
        v17 = v19;
        if ( v19 < 0 )
          goto LABEL_14;
        v20 = RtlStringCchPrintfExW(v10, v9, &ppszDestEnd, &pcchRemaining, 0, L"%8.8hs%16.16hs%1.1hs", v14, v13, v12);
        v16 = 0;
        v10 = ++ppszDestEnd;
        v17 = v20;
        if ( v20 < 0 || (unsigned int)RaUnitIsSMRDisabled(a1) )
          goto LABEL_14;
        v22 = RtlStringCchPrintfExW(v10, v21 - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", DeviceType[1]);
        goto LABEL_12;
      }
LABEL_26:
      v10 = ppszDestEnd;
      goto LABEL_13;
    }
    v24 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 24) + 5848LL);
    v32 = 0LL;
    v33 = 0;
    v35 = 0;
    v34 = 0LL;
    RaidHexFromUshort(*v24, &v32, 17LL);
    v36[0] = *(_OWORD *)(v25 + 24);
    v36[1] = *(_OWORD *)(v25 + 40);
    v36[2] = *(_OWORD *)(v25 + 56);
    v36[3] = *(_OWORD *)(v25 + 72);
    v37 = *(_BYTE *)(v25 + 88);
    StorCopyNVMeFirmwareRevision(v25, &v34, 17LL);
    v17 = RtlStringCchPrintfExW(
            v6,
            0x167uLL,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
            "ZNSDisk",
            &v32,
            v36,
            &v34);
    v10 = ppszDestEnd + 1;
    v9 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_13;
    v17 = RtlStringCchPrintfExW(
            v10,
            v9,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs_%8.8hs%40.40hs",
            "ZNSDisk",
            &v32,
            v36);
    v10 = ppszDestEnd + 1;
    v9 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 < 0 )
      goto LABEL_13;
    v17 = RtlStringCchPrintfExW(v10, v9, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs_%8.8hs", "ZNSDisk", &v32);
    if ( v17 < 0 )
      goto LABEL_26;
    ++ppszDestEnd;
    v22 = RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "GenNvmeDisk");
  }
LABEL_12:
  v17 = v22;
  v10 = ppszDestEnd + 1;
LABEL_13:
  v16 = 0;
LABEL_14:
  *v10 = v16;
  LOBYTE(v9) = 1;
  RaFixupIds(v6, v9, 359LL);
LABEL_15:
  *v31 = v6;
  return (unsigned int)v17;
}
