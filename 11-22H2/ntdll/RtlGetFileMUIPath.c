/*
 * XREFs of RtlGetFileMUIPath @ 0x180009780
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCalcAllocSize @ 0x1800044A8 (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180009C6C (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlGetFullPathName_UEx @ 0x1800195A0 (RtlGetFullPathName_UEx.c)
 *     RtlIntegerToUnicode @ 0x18001B170 (RtlIntegerToUnicode.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800FB9A4 (RtlpMUIGetAllInstalledLang.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  wchar_t *v7; // r11
  ULONGLONG v9; // rsi
  ULONGLONG v10; // r13
  const WCHAR *v11; // r14
  ULONG v12; // eax
  ULONGLONG v13; // rdi
  NTSTATUS ProcessRegistryInfo; // ebx
  PWSTR v15; // r14
  NTSTATUS FullPathName_UEx; // eax
  ULONGLONG v17; // rax
  int v19; // edi
  int v20; // ecx
  ULONG v21; // r15d
  SIZE_T v22; // rax
  PVOID v23; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rcx
  const WCHAR *i; // rbx
  int MUIRedirectedFilePath; // eax
  WCHAR *v29; // rdi
  int *v30; // r12
  unsigned __int64 Length; // rbx
  char IsWin32WithRCManifest; // al
  __int64 v33; // rax
  ULONGLONG v34; // r10
  __int64 v35; // rcx
  ULONGLONG v36; // r9
  ULONGLONG v37; // rax
  ULONGLONG v38; // r8
  SIZE_T v39; // rax
  PVOID v40; // rax
  NTSTATUS v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  const WCHAR *j; // rbx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  char v48; // al
  char v49; // di
  ULONG v50; // ecx
  PCWSTR v51; // rax
  NTSTATUS v52; // eax
  PVOID v53; // rax
  BOOLEAN v54; // al
  BOOLEAN v55; // al
  wchar_t *v56; // rbx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  char v62; // bl
  int BytesRequired; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-D8h]
  char v65; // [rsp+40h] [rbp-C0h]
  bool v66; // [rsp+41h] [rbp-BFh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v69; // [rsp+50h] [rbp-B0h] BYREF
  DWORD Lcid; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG NumberOfLanguages; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Heap; // [rsp+78h] [rbp-88h]
  ULONG Value[2]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *String1; // [rsp+88h] [rbp-78h] BYREF
  PWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
  PWSTR v77; // [rsp+98h] [rbp-68h]
  PVOID v78; // [rsp+A0h] [rbp-60h]
  PULONG v79; // [rsp+A8h] [rbp-58h]
  PULONG v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  PCWSTR SourceString; // [rsp+C0h] [rbp-40h]
  _UNICODE_STRING v83; // [rsp+D0h] [rbp-30h] BYREF
  PULONGLONG v84; // [rsp+E0h] [rbp-20h]
  _UNICODE_STRING String; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR v86[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v87; // [rsp+108h] [rbp+8h]

  v7 = 0LL;
  v77 = FileMUIPath;
  v9 = 0LL;
  v79 = FileMUIPathLength;
  v10 = 0LL;
  v80 = LanguageLength;
  *(_QWORD *)v86 = 0LL;
  v11 = 0LL;
  v87 = 0;
  v12 = Flags >> 10;
  LOBYTE(v12) = (Flags & 0x400) != 0;
  SourceString = Language;
  v13 = Flags;
  v84 = Enumerator;
  v69 = 0LL;
  v81 = 0LL;
  BaseAddress = 0LL;
  String1 = 0LL;
  NumberOfLanguages = 0;
  v78 = 0LL;
  Heap = 0LL;
  FilePart = 0LL;
  *(_QWORD *)Value = 0LL;
  Lcid = v12;
  DestinationString = 0LL;
  if ( !FilePath || !Enumerator )
  {
    ProcessRegistryInfo = -1073741811;
    goto LABEL_61;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo(Value);
  if ( ProcessRegistryInfo >= 0 )
  {
    Heap = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    v15 = Heap;
    if ( !Heap )
      return -1073741801;
    FullPathName_UEx = RtlGetFullPathName_UEx(FilePath, 0x208u, Heap, &FilePart, &ReturnLength);
    v7 = 0LL;
    if ( FullPathName_UEx < 0 || ReturnLength - 1 > 0x206 || !FilePart || FilePart <= v15 || FilePart >= v15 + 260 )
      goto LABEL_12;
    *(FilePart - 1) = 0;
    v17 = *Enumerator;
    if ( !*Enumerator )
    {
      if ( (v13 & 0xC) != 0xC
        && (v13 & 0x30) != 0x30
        && (v13 & 0x50) != 0x50
        && (v13 & 0x60) != 0x60
        && (v13 & 0x70) != 112
        && (v13 & 0x300) != 768 )
      {
        v10 = v13;
        if ( (v13 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (v13 & 0x40 | 0x20) >> 5;
        v66 = (v10 & 4) == 0;
        if ( (v10 & 0x200) == 0
          && ((v10 & 0x100) != 0
           || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(FilePath), v7 = 0LL, IsWin32WithRCManifest)) )
        {
          v65 = 1;
          v81 = 1LL;
        }
        else
        {
          v65 = 0;
        }
        v20 = v19 - 1;
        switch ( v19 )
        {
          case 1:
            v21 = v20 + 48;
            ReturnLength = 0;
            RtlGetThreadPreferredUILanguages(v20 + 48, &NumberOfLanguages, 0LL, &ReturnLength);
            if ( !ReturnLength )
              goto LABEL_13;
            v22 = LdrpCalcAllocSize(ReturnLength, 2uLL);
            if ( !v22 )
            {
              ProcessRegistryInfo = -1073741675;
              goto LABEL_13;
            }
            v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v21 - 40, v22);
            BaseAddress = v23;
            v11 = (const WCHAR *)v23;
            if ( !v23 )
            {
              v15 = Heap;
              ProcessRegistryInfo = -1073741801;
              goto LABEL_13;
            }
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           v21,
                                           &NumberOfLanguages,
                                           (PZZWSTR)v23,
                                           &ReturnLength);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages < 0 )
            {
              ProcessRegistryInfo = ThreadPreferredUILanguages;
              goto LABEL_61;
            }
            v25 = NumberOfLanguages;
            v69 = NumberOfLanguages;
LABEL_26:
            v9 = 0LL;
            goto LABEL_27;
          case 2:
            RtlpMUIGetAllInstalledLang(*(_QWORD *)Value, &BaseAddress, &v69);
            break;
          case 3:
            RtlpMUIEnumerateFolder(v15, &v69, &String1);
            break;
          default:
            v25 = v69;
            v11 = (const WCHAR *)BaseAddress;
            goto LABEL_26;
        }
        v25 = v69;
        v7 = 0LL;
        v11 = (const WCHAR *)BaseAddress;
        goto LABEL_26;
      }
LABEL_12:
      ProcessRegistryInfo = -1073741811;
      goto LABEL_13;
    }
    v25 = v69;
    v34 = *Enumerator & 0xF;
    v35 = 0LL;
    v81 = v34;
    v36 = v17 & 0xF;
    v37 = v17 >> 4;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = v37 & 0xFFF;
        v37 >>= 12;
        v36 ^= v38;
        if ( v35 )
          break;
        v10 = v38;
LABEL_77:
        ++v35;
      }
      if ( v35 == 2 )
      {
        v25 = v38;
        v69 = v38;
        goto LABEL_77;
      }
      if ( v35 == 3 )
      {
        v9 = v38;
LABEL_79:
        if ( ((v37 ^ v36) & 0xFFF) != 0 )
        {
          ProcessRegistryInfo = -1073741776;
          goto LABEL_13;
        }
        if ( v9 > v25 )
        {
          ProcessRegistryInfo = -2147483642;
          goto LABEL_13;
        }
        if ( (v10 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (v10 & 0x40 | 0x20) >> 5;
        v11 = (const WCHAR *)BaseAddress;
        v66 = (v10 & 4) == 0;
        v65 = v34 & 1;
LABEL_27:
        if ( v19 == 1 )
        {
          if ( v11 )
            goto LABEL_29;
          ReturnLength = 0;
          RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
          v7 = 0LL;
          if ( ReturnLength )
          {
            v39 = LdrpCalcAllocSize(ReturnLength, 2uLL);
            if ( !v39 )
            {
              ProcessRegistryInfo = -1073741675;
              goto LABEL_63;
            }
            v40 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v39);
            v7 = 0LL;
            BaseAddress = v40;
            v11 = (const WCHAR *)v40;
            if ( v40 )
            {
              v41 = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, (PZZWSTR)v40, &ReturnLength);
              v7 = 0LL;
              if ( v41 >= 0 )
              {
                v25 = v69;
                goto LABEL_29;
              }
            }
            v25 = v69;
          }
          v9 = v25;
LABEL_29:
          v26 = 0LL;
          for ( i = v11; v26 < v9; i += v42 + 1 )
          {
            if ( !i )
              break;
            if ( !*i )
              break;
            ++v26;
            v42 = -1LL;
            do
              ++v42;
            while ( i[v42] );
          }
          if ( v9 < v25 )
          {
            do
            {
              if ( !*i )
                break;
              RtlInitUnicodeString(&DestinationString, i);
              LOBYTE(v64) = Lcid;
              LOBYTE(BytesRequired) = v65;
              v83 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v83, Heap, FilePart, v79, BytesRequired, v64, v77);
              v7 = 0LL;
              if ( MUIRedirectedFilePath >= 0 )
                break;
              if ( MUIRedirectedFilePath == -1073741789 )
                break;
              ++v9;
              v33 = -1LL;
              do
                ++v33;
              while ( i[v33] );
              i += v33 + 1;
            }
            while ( v9 < v25 );
            goto LABEL_33;
          }
          goto LABEL_56;
        }
        if ( v19 != 2 )
        {
          if ( !String1 )
          {
            v48 = RtlpMUIEnumerateFolder(Heap, &v83, &String1);
            v7 = 0LL;
            if ( !v48 )
              v9 = v25;
          }
          v49 = 0;
          if ( !v9 )
          {
            v50 = *v80;
            if ( *v80 )
            {
              if ( SourceString )
              {
                v51 = SourceString;
                while ( *v51 )
                {
                  ++v51;
                  if ( !--v50 )
                    goto LABEL_146;
                }
                if ( v66 )
                {
                  RtlInitUnicodeString(&DestinationString, SourceString);
                  v55 = RtlCultureNameToLCID(&DestinationString, Value);
                  v7 = 0LL;
                  if ( v55 )
                    v49 = 1;
                }
                else
                {
                  RtlInitUnicodeString(&String, SourceString);
                  v52 = RtlUnicodeStringToInteger(&String, 0x10u, Value);
                  v7 = 0LL;
                  if ( v52 >= 0 )
                  {
                    v53 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                    v7 = 0LL;
                    v78 = v53;
                    if ( !v53 )
                    {
                      v11 = (const WCHAR *)BaseAddress;
                      goto LABEL_61;
                    }
                    DestinationString.Buffer = (wchar_t *)v53;
                    *(_DWORD *)&DestinationString.Length = 11141120;
                    v54 = RtlLCIDToCultureName(Value[0], &DestinationString);
                    v25 = v69;
                    v7 = 0LL;
                    v11 = (const WCHAR *)BaseAddress;
                    if ( v54 )
                      v49 = 1;
                  }
                }
              }
            }
          }
LABEL_146:
          v56 = String1;
          v57 = 0LL;
          if ( v9 )
          {
            do
            {
              if ( !v56 )
                break;
              if ( !*v56 )
                break;
              ++v57;
              v58 = -1LL;
              do
                ++v58;
              while ( v56[v58] );
              v56 += v58 + 1;
            }
            while ( v57 < v9 );
            v11 = (const WCHAR *)BaseAddress;
          }
          if ( v9 < v25 )
          {
            while ( 1 )
            {
              if ( v49 && (v59 = wcsicmp(v56, DestinationString.Buffer), v7 = 0LL, v59) )
              {
                v60 = -1LL;
                do
                  ++v60;
                while ( v56[v60] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v56);
                LOBYTE(v64) = Lcid;
                LOBYTE(BytesRequired) = v65;
                String = DestinationString;
                v61 = RtlpGetMUIRedirectedFilePath(&String, Heap, FilePart, v79, BytesRequired, v64, v77);
                v7 = 0LL;
                if ( (int)(v61 + 0x80000000) < 0 || v61 == -1073741789 )
                  goto LABEL_33;
                v60 = -1LL;
                do
                  ++v60;
                while ( v56[v60] );
              }
              ++v9;
              v56 += v60 + 1;
              if ( v9 >= v25 )
                goto LABEL_33;
            }
          }
          goto LABEL_56;
        }
        if ( !v11 )
        {
          RtlpMUIGetAllInstalledLang(*(_QWORD *)Value, &BaseAddress, &v83);
          v11 = (const WCHAR *)BaseAddress;
          v7 = 0LL;
        }
        v43 = 0LL;
        for ( j = v11; v43 < v9; j += v45 + 1 )
        {
          if ( !j )
            break;
          if ( !*j )
            break;
          ++v43;
          v45 = -1LL;
          do
            ++v45;
          while ( j[v45] );
        }
        if ( v9 >= v25 )
          goto LABEL_56;
        do
        {
          if ( !j )
            break;
          if ( !*j )
            break;
          RtlInitUnicodeString(&DestinationString, j);
          LOBYTE(v64) = Lcid;
          LOBYTE(BytesRequired) = v65;
          v83 = DestinationString;
          v46 = RtlpGetMUIRedirectedFilePath(&v83, Heap, FilePart, v79, BytesRequired, v64, v77);
          v7 = 0LL;
          if ( v46 >= 0 )
            break;
          if ( v46 == -1073741789 )
            break;
          ++v9;
          v47 = -1LL;
          do
            ++v47;
          while ( j[v47] );
          j += v47 + 1;
        }
        while ( v9 < v25 );
LABEL_33:
        if ( v9 >= v25 )
        {
LABEL_56:
          ProcessRegistryInfo = -2147483642;
        }
        else
        {
          v29 = (WCHAR *)SourceString;
          v30 = (int *)v80;
          if ( SourceString || v80 )
          {
            if ( v66 )
              goto LABEL_37;
            v62 = RtlCultureNameToLCID(&DestinationString, &Lcid);
            if ( v62 )
              v62 = (int)RtlIntegerToUnicode((unsigned __int16)Lcid, 16LL, 4294967292LL, v86) >= 0;
            RtlInitUnicodeString(&DestinationString, v86);
            v7 = 0LL;
            if ( v62 )
            {
LABEL_37:
              if ( v30 )
              {
                if ( v29 )
                {
                  if ( *v30 > (unsigned int)(DestinationString.Length >> 1) )
                  {
                    Length = DestinationString.Length;
                    memmove(v29, DestinationString.Buffer, DestinationString.Length);
                    v7 = 0LL;
                    v29[Length >> 1] = 0;
                  }
                }
                else
                {
                  *v30 = 85;
                }
              }
            }
          }
          if ( !v77 || !v29 && v30 )
          {
            ProcessRegistryInfo = 0;
            goto LABEL_169;
          }
          ProcessRegistryInfo = 0;
        }
        *v84 = v81 | (((v9 + 1) ^ v25 ^ v81 ^ v10) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                   * (v10 | ((v25 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_169:
        if ( v78 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v78);
          v11 = (const WCHAR *)BaseAddress;
          v7 = 0LL;
        }
LABEL_61:
        if ( v11 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v7 = 0LL;
        }
LABEL_63:
        if ( String1 != v7 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
        v15 = Heap;
        if ( !Heap )
          return ProcessRegistryInfo;
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
        return ProcessRegistryInfo;
      }
      if ( (unsigned __int64)++v35 >= 4 )
        goto LABEL_79;
    }
  }
  return ProcessRegistryInfo;
}
