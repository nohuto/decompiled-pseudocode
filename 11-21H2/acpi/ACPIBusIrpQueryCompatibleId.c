/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1C0092610
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0001738 (AMLIGetNSObjectType.c)
 *     RtlStringCbPrintfExW @ 0x1C0006798 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004D1E8 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C0091B94 (ACPIValidateStringVendorDeviceIdFormat.c)
 *     ACPIAllocateBuffer @ 0x1C0092FC8 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // rsi
  size_t v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  size_t v16; // r8
  char *v17; // rdx
  __int64 v18; // rdx
  void *Pool2; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  const char *v23; // rax
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // r8
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+30h] [rbp-48h]
  size_t v30; // [rsp+60h] [rbp-18h] BYREF
  PVOID Src[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+C0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+50h] BYREF
  PVOID P; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h] BYREF

  Size = 0LL;
  P = 0LL;
  Src[0] = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 660LL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  v11 = 0x200000000000LL;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    LODWORD(v7) = -1073741670;
    goto LABEL_40;
  }
  v12 = *(_QWORD *)(a3 + 760);
  if ( v12 && (unsigned int)AMLIGetNSObjectType(v12) == 12 )
  {
    LODWORD(v7) = ACPIGet(a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&v30);
    if ( (int)v7 < 0 )
      goto LABEL_20;
    if ( v10 >= v30 )
    {
      memmove(v9, Src[0], v30);
LABEL_31:
      if ( v10 < v30 )
        goto LABEL_21;
      LODWORD(v7) = RtlStringCbPrintfExW(&v9[v30 >> 1], v10 - v30, &ppszDestEnd, &pcbRemaining, 0, &word_1C006FA08);
LABEL_33:
      if ( (int)v7 >= 0 )
        goto LABEL_21;
      goto LABEL_20;
    }
    goto LABEL_39;
  }
  v13 = *(_QWORD *)(a3 + 8);
  if ( (v13 & v11) == 0 || (v13 & 0x800000000000LL) != 0 )
    goto LABEL_17;
  v14 = *(_QWORD *)(a3 + 608);
  if ( !v14 )
  {
    LODWORD(v7) = ACPIGet(a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&Size);
    if ( (int)v7 >= 0 )
      goto LABEL_21;
    goto LABEL_33;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( *(_BYTE *)(v14 + v15) );
  Size = v15;
  P = (PVOID)ExAllocatePool2(256LL, v15, 1114661697LL);
  if ( !P )
    goto LABEL_21;
  v16 = Size;
  v17 = *(char **)(a3 + 608);
  if ( Size >= 5 )
  {
    v16 = Size - 5;
    Size -= 5LL;
    v17 += 5;
  }
  memmove(P, v17, v16);
  if ( ACPIValidateStringVendorDeviceIdFormat((__int64)P, Size) || (*(_BYTE *)(a3 + 1000) & 0x1C) != 0 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v18, 1114661697LL);
    v6 = Pool2;
    if ( !Pool2 )
      goto LABEL_21;
    LOBYTE(v7) = Size != 7;
    v20 = v7 + 3;
    memset(Pool2, 0, Size);
    if ( Size > v20 )
    {
      memmove(v6, (char *)P + v20, Size - v20);
      *((_BYTE *)P + v20) = 0;
    }
    v21 = *(_QWORD *)(a3 + 1000);
    if ( (v21 & 0x10) != 0 )
    {
      if ( (v21 & 8) != 0 )
      {
        v29 = (int)P;
        LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
        if ( (int)v7 < 0 )
          goto LABEL_20;
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_21;
        v9 = ppszDestEnd + 1;
        v10 = pcbRemaining - 2;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
      }
      v29 = (int)P;
      LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
      if ( (int)v7 < 0 )
      {
LABEL_20:
        if ( (_DWORD)v7 == -1073741772 )
          goto LABEL_21;
        goto LABEL_40;
      }
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_21;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
LABEL_17:
    if ( (*(_BYTE *)(a3 + 1000) & 4) != 0 )
    {
      v29 = (int)P;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      v9,
                      v10,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_20;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_21;
      v29 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_20;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_21;
      v29 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(ppszDestEnd, pcbRemaining, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S");
      if ( (int)v7 < 0 )
        goto LABEL_20;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_21;
      v29 = *(unsigned __int16 *)(a3 + 646);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_20;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_21;
      v29 = *(unsigned __int16 *)(a3 + 646);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_20;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_21;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
    }
  }
  LODWORD(v7) = ACPIGet(a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&v30);
  if ( (int)v7 < 0 && v10 == *a2 )
    goto LABEL_20;
  LODWORD(v7) = 0;
  if ( v10 >= v30 )
  {
    memmove(v9, Src[0], v30);
    if ( !v9 )
      goto LABEL_21;
    goto LABEL_31;
  }
LABEL_39:
  LODWORD(v7) = -1073741670;
LABEL_40:
  v23 = (const char *)&unk_1C006FB8B;
  v24 = 0LL;
  v25 = (const char *)&unk_1C006FB8B;
  if ( a3 )
  {
    v26 = *(_QWORD *)(a3 + 8);
    v24 = a3;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v23 = *(const char **)(a3 + 608);
      if ( (v26 & 0x400000000000LL) != 0 )
        v25 = *(const char **)(a3 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x26u,
      dwFlags,
      pszFormat,
      v29,
      v7,
      v24,
      v23,
      v25);
LABEL_21:
  if ( Src[0] )
    ExFreePoolWithTag(Src[0], 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v7;
}
