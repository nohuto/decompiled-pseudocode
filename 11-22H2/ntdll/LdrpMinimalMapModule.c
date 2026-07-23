/*
 * XREFs of LdrpMinimalMapModule @ 0x18002C6F4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpCheckForRetryLoading @ 0x180010E50 (LdrpCheckForRetryLoading.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlEqualUnicodeString @ 0x180029E40 (RtlEqualUnicodeString.c)
 *     LdrpMapViewOfSection @ 0x18002CBA0 (LdrpMapViewOfSection.c)
 *     RtlAcquirePrivilege @ 0x180078DC0 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D900 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x180081B20 (RtlReleasePrivilege.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A1160 (ZwMapViewOfSectionEx.c)
 *     LdrpProcessMachineMismatch @ 0x1800DF4CC (LdrpProcessMachineMismatch.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, void *a2)
{
  __int64 v2; // rdi
  char v4; // r14
  struct _TEB *v5; // r13
  ULONG AllocationType; // r15d
  ULONG PageProtection; // edx
  NTSTATUS v8; // eax
  int v9; // ebx
  void *v10; // rdx
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-20h] BYREF
  void *ArbitraryUserPointer; // [rsp+C0h] [rbp+40h]

  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    700,
    (__int64)"LdrpMinimalMapModule",
    3u,
    "DLL name: %wZ\n",
    v2 + 72);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u)
    || (v4 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
  {
    v4 = 0;
  }
  if ( !v4 && LdrpLargePageDllKeyHandle )
    RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, 4, 0LL);
  v5 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
  v5->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  AllocationType = 8650752;
  PageProtection = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    AllocationType = 0x800000;
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v13[1] = LdrpMaximumUserModeAddress;
    v13[0] = 0LL;
    ExtendedParameters.ULong64 = (DWORD64)v13;
    v13[2] = 0LL;
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)1LL;
    v8 = ZwMapViewOfSectionEx(
           a2,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)(v2 + 48),
           0LL,
           (PSIZE_T)(a1 + 168),
           AllocationType,
           PageProtection,
           &ExtendedParameters,
           1u);
  }
  else
  {
    v8 = LdrpMapViewOfSection(a2, (PSIZE_T)(a1 + 168), AllocationType, PageProtection, v2 + 72);
  }
  v9 = v8;
  v5->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  switch ( v8 )
  {
    case 1073741827:
      goto LABEL_20;
    case 1073741838:
      v9 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_20:
      if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
      {
        if ( LdrpCheckForRetryLoading(a1, 1) )
        {
          v9 = -1073741267;
        }
        else if ( v4 )
        {
          v9 = -1073741800;
        }
      }
      break;
  }
  v10 = *(void **)(v2 + 48);
  if ( v10 && (v9 < 0 || v9 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v10);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    909,
    (__int64)"LdrpMinimalMapModule",
    4u,
    "Status: 0x%08lx\n",
    v9);
  return (unsigned int)v9;
}
