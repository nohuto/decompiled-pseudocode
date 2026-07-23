/*
 * XREFs of LdrpMinimalMapModule @ 0x18004CAA8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 *     LdrpCheckForRetryLoading @ 0x18004FFEC (LdrpCheckForRetryLoading.c)
 *     RtlAcquirePrivilege @ 0x18007F810 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x180086900 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x18008F9C0 (LdrpProcessMachineMismatch.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A63C0 (ZwMapViewOfSectionEx.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, void *a2)
{
  __int64 v2; // rsi
  char v4; // r14
  struct _TEB *v5; // r13
  ULONG AllocationType; // r15d
  ULONG Win32Protect; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  void *v11; // rdx
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-20h] BYREF
  void *ArbitraryUserPointer; // [rsp+C0h] [rbp+40h]

  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    639,
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
  Win32Protect = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    AllocationType = 0x800000;
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v14[1] = LdrpMaximumUserModeAddress;
    ExtendedParameters.ULong64 = (DWORD64)v14;
    v14[0] = 0LL;
    v14[2] = 0LL;
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)1LL;
    v8 = ZwMapViewOfSectionEx(
           a2,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)(v2 + 48),
           0LL,
           (PSIZE_T)(a1 + 168),
           AllocationType,
           Win32Protect,
           &ExtendedParameters,
           1u);
  }
  else
  {
    v8 = ZwMapViewOfSection(
           a2,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)(v2 + 48),
           0LL,
           0LL,
           0LL,
           (PSIZE_T)(a1 + 168),
           ViewShare,
           AllocationType,
           Win32Protect);
  }
  v10 = v8;
  v5->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  switch ( v8 )
  {
    case 1073741827:
      goto LABEL_20;
    case 1073741838:
      v10 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_20:
      if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
      {
        LOBYTE(v9) = 1;
        if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v9) )
        {
          v10 = -1073741267;
        }
        else if ( v4 )
        {
          v10 = -1073741800;
        }
      }
      break;
  }
  v11 = *(void **)(v2 + 48);
  if ( v11 && (v10 < 0 || v10 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    832,
    (__int64)"LdrpMinimalMapModule",
    4u,
    "Status: 0x%08lx\n",
    v10);
  return (unsigned int)v10;
}
