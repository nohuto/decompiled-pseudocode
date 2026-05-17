/*
 * XREFs of LdrpFindKnownDll @ 0x18004C948
 * Callers:
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     LdrpAllocateUnicodeString @ 0x18004FAEC (LdrpAllocateUnicodeString.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenSection @ 0x1800A4750 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(const void **a1, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  const void **v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    1577,
    (__int64)"LdrpFindKnownDll",
    3u,
    "DLL name: %wZ\n",
    a1);
  if ( !LdrpKnownDllDirectoryHandle )
    goto LABEL_7;
  v12 = 48;
  v13 = LdrpKnownDllDirectoryHandle;
  v15 = 64;
  v14 = a1;
  v16 = 0LL;
  v8 = NtOpenSection(a4, 13LL, &v12);
  UnicodeString = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_5;
LABEL_7:
    UnicodeString = -1073741515;
    goto LABEL_5;
  }
  UnicodeString = LdrpAllocateUnicodeString(
                    a3,
                    *(unsigned __int16 *)a1 + (unsigned int)(unsigned __int16)LdrpKnownDllPath + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, (const void **)&LdrpKnownDllPath);
    RtlAppendUnicodeToString(a3, L"\\");
    v10 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(a2, v10);
    UnicodeString = 0;
  }
LABEL_5:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    1649,
    (__int64)"LdrpFindKnownDll",
    4u,
    "Status: 0x%08lx\n",
    UnicodeString);
  return (unsigned int)UnicodeString;
}
