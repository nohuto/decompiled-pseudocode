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

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // r14
  int v5; // ebx
  struct _TEB *v6; // r13
  int v7; // r15d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
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
    639,
    (__int64)"LdrpMinimalMapModule",
    3u,
    "DLL name: %wZ\n",
    v2 + 72);
  if ( !RtlEqualUnicodeString((unsigned __int16 *)(v2 + 88), (__int64)LdrpKernel32DllName, 1)
    || (v4 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
  {
    v4 = 0;
  }
  v18 = 0LL;
  v5 = 0x800000;
  if ( !v4 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v13 = *(_QWORD *)(v2 + 96);
      LODWORD(ArbitraryUserPointer) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v13, 4LL, &ArbitraryUserPointer, 4, 0LL);
      if ( (_DWORD)ArbitraryUserPointer )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v18) >= 0 )
          v5 = 0x20000000;
      }
    }
  }
  v6 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  ArbitraryUserPointer = v6->NtTib.ArbitraryUserPointer;
  v6->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  v7 = v5 | 0x40000;
  v8 = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    v7 = v5;
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v15[1] = LdrpMaximumUserModeAddress;
    v14[1] = v15;
    v15[0] = 0LL;
    v15[2] = 0LL;
    v14[0] = 1LL;
    v9 = ZwMapViewOfSectionEx(v17, -1LL, v2 + 48, 0LL, a1 + 168, v7, v8, v14, 1);
  }
  else
  {
    v9 = ZwMapViewOfSection(v17, -1LL, v2 + 48, 0LL, 0LL, 0LL, a1 + 168, 1, v7, v8);
  }
  v11 = v9;
  v6->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v7 == 0x20000000 )
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
        LOBYTE(v10) = 1;
        if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v10) )
        {
          v11 = -1073741267;
        }
        else if ( v4 )
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
    832,
    (__int64)"LdrpMinimalMapModule",
    4u,
    "Status: 0x%08lx\n",
    v11);
  return (unsigned int)v11;
}
