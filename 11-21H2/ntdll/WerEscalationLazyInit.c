/*
 * XREFs of WerEscalationLazyInit @ 0x1800E95C4
 * Callers:
 *     WerReportSQMEvent @ 0x1800E9970 (WerReportSQMEvent.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlLengthSidAsUnicodeString @ 0x180047F80 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x180052FA8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A6640 (NtOpenProcessToken.c)
 *     StringCchCopyW @ 0x1800E94DC (StringCchCopyW.c)
 *     WerpEscalationIsDisabled @ 0x1800E9A1C (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E9ACC (WerpEscalationIsWMRSendStringSet.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  NTSTATUS appended; // ebx
  signed __int64 v2; // rdi
  char *v4; // r15
  char *v5; // rsi
  unsigned int v6; // r14d
  HRESULT v7; // eax
  unsigned __int64 v8; // r11
  unsigned __int16 *i; // r10
  int v10; // r12d
  int v11; // ebx
  int j; // r14d
  unsigned __int16 v13; // ax
  int v14; // r12d
  __int64 v15; // r10
  char *v16; // r14
  unsigned int v17; // eax
  unsigned __int16 v18; // bx
  _WORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  wchar_t *v23; // rcx
  void *v24; // rdx
  HANDLE TokenHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  int v28; // [rsp+50h] [rbp-18h]
  int v29; // [rsp+58h] [rbp-10h]
  int v30; // [rsp+5Ch] [rbp-Ch]
  ULONG ReturnLength; // [rsp+B0h] [rbp+48h] BYREF
  int TokenInformation; // [rsp+B8h] [rbp+50h] BYREF
  ULONG StringLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  appended = -1073741823;
  v2 = 0LL;
  if ( g_werEscalationData && g_sqmSessionHandle != -1 )
    return 0LL;
  if ( !g_disableEscalation )
  {
    g_disableEscalation = WerpEscalationIsDisabled();
    v0 = g_werEscalationData;
  }
  if ( v0 )
    goto LABEL_36;
  RegionSize = 568LL;
  appended = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)BaseAddress;
    v4 = (char *)BaseAddress + RegionSize;
    v5 = (char *)BaseAddress + 568;
    if ( (char *)BaseAddress + 568 > (char *)BaseAddress + RegionSize )
      goto LABEL_9;
    v6 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    v7 = StringCchCopyW((STRSAFE_LPWSTR)BaseAddress, 0x104uLL, NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147024774 )
      goto LABEL_38;
    for ( i = (unsigned __int16 *)(v8 + 2 * (v6 - 1LL)); (unsigned __int64)i > v8; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v10 = 0;
    v11 = 31415;
    for ( j = v6 - ((__int64)((__int64)i - v8) >> 1); j; --j )
    {
      v13 = NLS_UPCASE(qword_1801776F8, *i);
      v14 = v11 * v10;
      i = (unsigned __int16 *)(v15 + 2);
      v11 *= 27183;
      v10 = v13 + v14;
    }
    *(_DWORD *)(v2 + 520) = v10;
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress, 0);
    *(_DWORD *)(v2 + 532) = v28;
    *(_DWORD *)(v2 + 524) = v29;
    *(_DWORD *)(v2 + 528) = v30;
    appended = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
    if ( appended < 0 )
      goto LABEL_38;
    ReturnLength = (_DWORD)v4 - (_DWORD)v5;
    appended = NtQueryInformationToken(TokenHandle, 1u, v5, (_DWORD)v4 - (_DWORD)v5, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_38;
    v16 = &v5[8 * (((unsigned __int64)ReturnLength + 7) >> 3)];
    if ( v16 > v4 )
      goto LABEL_9;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v5;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( NtQueryInformationToken(TokenHandle, 0x12u, &TokenInformation, 4u, &ReturnLength) >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( TokenInformation == 1 )
      {
        v17 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 1LL) - 1) + 8) == 500 )
          v17 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v17;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(PSID *)(v2 + 536), &StringLength);
    if ( appended < 0 )
      goto LABEL_38;
    v18 = StringLength;
    v19 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v16;
    v20 = (unsigned __int16)(v18 + 90);
    *(_WORD *)(v2 + 546) = v20;
    if ( &v16[v20] > v4 )
    {
LABEL_9:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\REGISTRY\\USER\\");
      v21 = *(_QWORD *)(v2 + 552);
      v22 = (unsigned __int64)(unsigned __int16)*v19 >> 1;
      UnicodeString.MaximumLength = v18;
      UnicodeString.Length = 0;
      v23 = (wchar_t *)(v21 + 2 * v22);
      v24 = *(void **)(v2 + 536);
      UnicodeString.Buffer = v23;
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v24, 0);
      if ( appended >= 0 )
      {
        *v19 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_36:
          if ( g_sqmSessionHandle != -1 )
            appended = 0;
        }
      }
    }
LABEL_38:
    if ( v2 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)appended;
}
