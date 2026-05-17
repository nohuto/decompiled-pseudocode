/*
 * XREFs of LdrpMinimalMapModule @ 0x18002C524
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpCheckForRetryLoading @ 0x180010C40 (LdrpCheckForRetryLoading.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     LdrpMapViewOfSection @ 0x18002C9D0 (LdrpMapViewOfSection.c)
 *     RtlAcquirePrivilege @ 0x180079430 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x18007DF70 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x180082190 (RtlReleasePrivilege.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A3220 (ZwMapViewOfSectionEx.c)
 *     LdrpProcessMachineMismatch @ 0x1800E07FC (LdrpProcessMachineMismatch.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  char v5; // r14
  int v6; // ebx
  struct _TEB *v7; // r13
  int v8; // r15d
  int v9; // edx
  int v10; // eax
  int v11; // ebx
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-20h] BYREF
  void *ArbitraryUserPointer; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+48h]
  __int64 v18; // [rsp+D0h] [rbp+50h] BYREF

  v17 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    700LL,
    (__int64)"LdrpMinimalMapModule",
    3LL,
    "DLL name: %wZ\n",
    v2 + 72);
  if ( !RtlEqualUnicodeString((unsigned __int16 *)(v2 + 88), (__int64)LdrpKernel32DllName, 1)
    || (v5 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
  {
    v5 = 0;
  }
  v18 = 0LL;
  v6 = 0x800000;
  if ( !v5 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v13 = *(_QWORD *)(v2 + 96);
      LODWORD(ArbitraryUserPointer) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v13, 4LL, &ArbitraryUserPointer, 4, 0LL);
      if ( (_DWORD)ArbitraryUserPointer )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v18) >= 0 )
          v6 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  v8 = v6 | 0x40000;
  v9 = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    v8 = v6;
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v15[1] = LdrpMaximumUserModeAddress;
    v15[0] = 0LL;
    v14[1] = v15;
    v15[2] = 0LL;
    v14[0] = 1LL;
    v10 = ZwMapViewOfSectionEx(v17, -1LL, v2 + 48, 0LL, a1 + 168, v8, v9, v14, 1);
  }
  else
  {
    v10 = LdrpMapViewOfSection(v17, v9, (int)v2 + 48, v4, a1 + 168, v8, v9, v2 + 72);
  }
  v11 = v10;
  v7->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v8 == 0x20000000 )
    RtlReleasePrivilege(v18);
  switch ( v11 )
  {
    case 1073741827:
      goto LABEL_21;
    case 1073741838:
      v11 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_21:
      if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
      {
        if ( LdrpCheckForRetryLoading(a1, 1) )
        {
          v11 = -1073741267;
        }
        else if ( v5 )
        {
          v11 = -1073741800;
        }
      }
      break;
  }
  if ( *(_QWORD *)(v2 + 48) && (v11 < 0 || v11 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    909LL,
    (__int64)"LdrpMinimalMapModule",
    4LL,
    "Status: 0x%08lx\n",
    v11);
  return (unsigned int)v11;
}
