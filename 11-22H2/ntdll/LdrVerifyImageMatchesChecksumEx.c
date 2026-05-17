/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800DA3B0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationFile @ 0x18009F010 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A10C0 (NtMakeTemporaryObject.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 *     RtlImageRvaToVa @ 0x1800F5AD0 (RtlImageRvaToVa.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1801014F0 (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  _BYTE *v4; // r15
  _DWORD *v5; // rsi
  int v6; // eax
  __int64 result; // rax
  int InformationFile; // edi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v19; // [rsp+78h] [rbp-90h]
  unsigned __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v22[3]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h]
  char *v24; // [rsp+B0h] [rbp-58h]
  _BYTE v25[8]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp-48h]

  v22[2] = a2;
  if ( *(_DWORD *)a2 != 64 )
    return 3221225712LL;
  v4 = (_BYTE *)(a2 + 4);
  v21 = a2 + 4;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v5 = (_DWORD *)(a2 + 24);
  if ( (*v4 & 2) == 0 )
    v5 = &unk_180138538;
  v19 = v5;
  v6 = v5[7];
  LODWORD(v17) = v6 & 0x1000000;
  v18 = v6 & 0x1000000;
  v14 = (v6 & 0x1000000) != 0;
  v22[0] = a1 & 1;
  v24 = (char *)(v5 + 4);
  result = NtCreateSection(&Handle, (unsigned int)v5[2], *((_QWORD *)v5 + 2), 0LL, v5[6], v6, a1);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    v20 = 0LL;
    InformationFile = ZwMapViewOfSection(Handle, -1LL, &v15, 0LL, 0LL, 0LL, &v20, 1, 0, 16);
    if ( InformationFile < 0 )
      goto LABEL_30;
    if ( LOBYTE(v22[0]) )
    {
      v9 = v17;
    }
    else
    {
      InformationFile = NtQueryInformationFile(a1, v22, v25, 24LL, 5);
      if ( InformationFile < 0 )
        goto LABEL_29;
      if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v15, v20, v26) )
        InformationFile = -1073741279;
      v9 = v17;
      if ( InformationFile < 0 )
        goto LABEL_29;
    }
    if ( (*v4 & 5) != 0 )
    {
      InformationFile = RtlImageNtHeaderEx(0, v15, v20, v22);
      if ( InformationFile >= 0 )
      {
        if ( (*v4 & 4) != 0 )
          *(_WORD *)(a2 + 56) = *(_WORD *)(v22[0] + 22LL);
        if ( (*v4 & 1) != 0 && *(_QWORD *)(a2 + 8) )
        {
          v10 = RtlpImageDirectoryEntryToDataEx(v15, v14, 1u, &v18, &v17);
          v11 = v17;
          if ( v10 < 0 )
            v11 = 0LL;
          v17 = v11;
          v23 = v11;
          if ( v11 )
          {
            v21 = 0LL;
            while ( *(_DWORD *)(v11 + 12) )
            {
              v12 = *(unsigned int *)(v11 + 12);
              if ( v9 )
                v13 = v15 + (unsigned int)v12;
              else
                v13 = RtlImageRvaToVa(v22[0], v15, v12, &v21);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 8))(*(_QWORD *)(a2 + 16), v13);
              v11 += 20LL;
              v23 = v11;
            }
          }
        }
      }
    }
LABEL_29:
    NtUnmapViewOfSection(-1LL);
LABEL_30:
    if ( InformationFile < 0 || v5 == (_DWORD *)&unk_180138538 )
    {
      if ( *(_QWORD *)v24 && (*(_BYTE *)(*(_QWORD *)v24 + 24LL) & 0x10) != 0 )
        NtMakeTemporaryObject(Handle);
      NtClose(Handle);
    }
    else
    {
      *(_QWORD *)v5 = Handle;
    }
    return (unsigned int)InformationFile;
  }
  return result;
}
