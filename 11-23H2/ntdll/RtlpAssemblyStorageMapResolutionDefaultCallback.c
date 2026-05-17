/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlDoesFileExists_UEx @ 0x18000951C (RtlDoesFileExists_UEx.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A14F0 (NtEnumerateKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v6; // ecx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  size_t v9; // r15
  wchar_t *Buffer; // rdx
  char *v11; // rbx
  __int64 v12; // rcx
  const WCHAR *NtSystemRoot; // rax
  size_t Length; // r14
  unsigned int v15; // ecx
  HANDLE v16; // r12
  int v17; // r15d
  int v18; // r14d
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  void *v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+8Ch] [rbp-74h]
  char v31; // [rsp+90h] [rbp-70h] BYREF

  v6 = a1 - 1;
  if ( !v6 )
  {
    v24 = 48;
    v22 = 0LL;
    v25 = 0LL;
    v27 = 64;
    v26 = &unk_180133DF0;
    v28 = 0LL;
    v19 = NtOpenKey(&v22, 8LL, &v24);
    v18 = v19;
    if ( v19 >= 0 || v19 == -1073741772 || v19 == -1073741431 )
    {
      v8 = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v8;
      return v8;
    }
    LOBYTE(v8) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180133DF0, v19);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    LOBYTE(v8) = 2;
    if ( (_DWORD)v7 == 2 && *(_QWORD *)a2 )
      LOBYTE(v8) = NtClose(*(HANDLE *)a2);
    return v8;
  }
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v8 = (unsigned __int64)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 32) + 8LL) & 0x8000) != 0 )
    {
      v8 = (unsigned __int64)NtCurrentPeb();
      v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 32) + 96LL);
      if ( v9 + 16 <= 0xFFFE )
      {
        v8 = *(unsigned __int16 *)(a2 + 26);
        if ( v9 + 16 <= v8 )
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v11 = *(char **)(a2 + 32);
          memmove(v11, Buffer, v9);
          *(_OWORD *)&v11[v9] = xmmword_180145E28;
          v12 = *(_QWORD *)(a2 + 32);
          *(_WORD *)(a2 + 24) = v9 + 14;
          LOBYTE(v8) = RtlDoesFileExists_UEx(v12, 1);
          if ( !(_BYTE)v8 )
            *(_WORD *)(a2 + 24) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
    }
    else
    {
      *(_WORD *)(a2 + 24) = 0;
    }
    return v8;
  }
  if ( *(_QWORD *)(a2 + 8) == 1LL )
  {
    NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v7, a2, (__int64)a3, a4);
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    Length = DestinationString.Length;
    v15 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LOBYTE(v8) = Length + 16;
    if ( (int)Length + 16 <= v15 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, Length);
      v8 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(Length + v8) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = Length + 16;
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    return v8;
  }
  LOBYTE(v8) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
    goto LABEL_35;
  v16 = *(HANDLE *)a2;
  v17 = *(_DWORD *)(a2 + 8);
  LODWORD(v22) = 0;
  if ( !v16 )
    goto LABEL_35;
  LODWORD(v8) = NtEnumerateKey(v16, (unsigned int)(v17 - 2), 0LL, v29, 544, &v22);
  v18 = v8;
  if ( (v8 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v8 != -2147483622 )
    {
      LOBYTE(v8) = DbgPrintEx(
                     51,
                     0,
                     "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                     v17 - 2,
                     v8);
LABEL_29:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
      if ( a3 )
        *a3 = v18;
      return v8;
    }
LABEL_35:
    *(_BYTE *)(a2 + 17) = 1;
    return v8;
  }
  LOBYTE(v8) = v30;
  if ( v30 <= 0xFFFE )
  {
    DestinationString.Length = v30;
    DestinationString.MaximumLength = v30;
    DestinationString.Buffer = (wchar_t *)&v31;
    LODWORD(v8) = RtlpGetAssemblyStorageMapRootLocation(v16, &DestinationString, a2 + 24);
    v18 = v8;
    if ( (v8 & 0x80000000) == 0LL )
      return v8;
    LODWORD(v21) = v8;
    LOBYTE(v8) = DbgPrintEx(
                   51,
                   0,
                   "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                   &DestinationString,
                   v21);
    goto LABEL_29;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v8;
}
