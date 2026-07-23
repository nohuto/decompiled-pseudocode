/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180046BD0
 * Callers:
 *     RtlGetFullPathName_UEx @ 0x180043A20 (RtlGetFullPathName_UEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x180043AB0 (RtlGetFullPathName_UstrEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800466F0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetFullPath @ 0x180050F20 (LdrpGetFullPath.c)
 *     RtlSetCurrentDirectory_U @ 0x180080000 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlpCheckRelativeDrive @ 0x18000B3FC (RtlpCheckRelativeDrive.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18000CE60 (RtlQueryEnvironmentVariable_U.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180047620 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006B418 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006B630 (RtlUnicodeStringCopy.c)
 *     RtlpReferenceCurrentDirectory @ 0x180080340 (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x1800879D0 (RtlpComputeBackupIndex.c)
 *     RtlpCheckDeviceName @ 0x18009184C (RtlpCheckDeviceName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800D7618 (RtlUnicodeStringCopyString.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        wchar_t *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  wchar_t *Buffer; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // edi
  _WORD *v10; // rdx
  unsigned int i; // ecx
  __int16 v12; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  volatile signed __int32 *v17; // r13
  unsigned int j; // ebx
  unsigned int v19; // r11d
  unsigned int v20; // r15d
  unsigned int v21; // edx
  unsigned int k; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  wchar_t v27; // ax
  __int64 v28; // r8
  unsigned int v29; // ebx
  wchar_t *v30; // rcx
  unsigned __int16 v31; // r9
  unsigned int m; // ecx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int16 v35; // r9
  __int64 v36; // rax
  __int16 v37; // cx
  __int16 v38; // cx
  __int16 v39; // cx
  int v40; // r8d
  __int16 v41; // dx
  _CURDIR *v42; // rax
  _CURDIR *v43; // rcx
  bool v44; // cl
  char *v45; // rax
  _CURDIR *p_CurrentDirectory; // r11
  wchar_t v47; // ax
  _UNICODE_STRING *v48; // r11
  WCHAR v49; // bx
  __int16 v50; // r9
  _CURDIR *v51; // rax
  _CURDIR *v52; // rsi
  int v53; // eax
  __int16 v54; // ax
  NTSTATUS v55; // eax
  unsigned __int16 Length; // cx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 result; // rax
  unsigned int v60; // edi
  __int64 v61; // rsi
  char v62; // [rsp+20h] [rbp-D8h]
  bool v63; // [rsp+21h] [rbp-D7h]
  unsigned int v64; // [rsp+28h] [rbp-D0h]
  unsigned int v65; // [rsp+2Ch] [rbp-CCh]
  _UNICODE_STRING Value; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v67; // [rsp+48h] [rbp-B0h]
  int v68; // [rsp+4Ch] [rbp-ACh]
  _CURDIR *v69; // [rsp+50h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v72; // [rsp+70h] [rbp-88h]
  _CURDIR *v73; // [rsp+78h] [rbp-80h]
  unsigned __int16 v74; // [rsp+80h] [rbp-78h]
  wchar_t v75; // [rsp+84h] [rbp-74h]
  int v76; // [rsp+88h] [rbp-70h]
  unsigned int v77; // [rsp+8Ch] [rbp-6Ch]
  NTSTATUS v78; // [rsp+90h] [rbp-68h]
  _QWORD *v79; // [rsp+98h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+B0h] [rbp-48h] BYREF
  _BYTE v82[6]; // [rsp+B2h] [rbp-46h]

  v79 = a4;
  Buffer = a3;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  *(_QWORD *)a6 = 0LL;
  v72 = *a1;
  v9 = v72 >> 1;
  if ( !(v72 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  for ( i = v72 >> 1; i && v10[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v12 = v10[v9 - 1];
  v63 = v12 != 92 && v12 != 47;
  v67 = v8 >> 1;
  v77 = v8 >> 1;
  memset(a3, 0, v8);
  *(_QWORD *)&Value.Length = 0LL;
  *(_DWORD *)&Value.MaximumLength = (unsigned __int16)(2 * (v8 >> 1));
  Value.Buffer = Buffer;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v60 = HIWORD(IsDosDeviceName_Ustr);
    v61 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v60 || (int)RtlpCheckDeviceName(a1, v60, a5) >= 0 && !*a5 )
    {
      if ( (int)v61 + 8 >= (unsigned int)(unsigned __int16)(2 * (v8 >> 1)) )
      {
        result = 0LL;
        if ( (unsigned int)(v61 + 10) <= 0xFFFF )
          return (unsigned int)(v61 + 10);
      }
      else
      {
        RtlUnicodeStringCopy(&Value, L"\b\n");
        RtlUnicodeStringCbCatStringN(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v60 >> 1), v61);
        return (unsigned int)(v61 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v14 = RtlDetermineDosPathNameType_Ustr(a1);
  *(_DWORD *)a6 = v14;
  DosPath = 0LL;
  v17 = 0LL;
  v69 = 0LL;
  BaseAddress = 0LL;
  v62 = 0;
  j = 0;
  if ( v14 != 2 )
  {
    switch ( v14 )
    {
      case 1:
        v40 = 0;
        v76 = 0;
        for ( j = 2; j < v9; ++j )
        {
          v41 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v41 == 92 || v41 == 47 )
          {
            v76 = ++v40;
            if ( v40 == 2 )
              break;
          }
        }
        v65 = j;
        v68 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_95;
      case 3:
        v45 = (char *)RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL, v16);
        v17 = (volatile signed __int32 *)v45;
        v69 = (_CURDIR *)v45;
        BaseAddress = v45;
        v62 = 1;
        if ( v45 )
        {
          p_CurrentDirectory = (_CURDIR *)(v45 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v17 = 0LL;
          v69 = 0LL;
        }
        v73 = p_CurrentDirectory;
        v74 = NLS_UPCASE(qword_1801776F8, *p_CurrentDirectory->DosPath.Buffer);
        v47 = NLS_UPCASE(qword_1801776F8, **((_WORD **)a1 + 1));
        v49 = v47;
        v75 = v47;
        if ( v50 == v47 )
        {
          DosPath = *v48;
          RtlUnicodeStringCopy(&Value, &DosPath);
          Buffer = Value.Buffer;
        }
        else
        {
          RtlpCheckRelativeDrive(v47);
          SourceString = 61;
          *(_WORD *)v82 = v49;
          *(_DWORD *)&v82[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v55 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v78 = v55;
          if ( v55 < 0 )
          {
            if ( v55 == -1073741789 )
            {
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v20 = 0;
                v64 = 0;
                Buffer = Value.Buffer;
                v29 = v67;
                goto LABEL_148;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v49;
              *(_DWORD *)v82 = 6029370;
              *(_WORD *)&v82[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
            }
          }
          else
          {
            Length = Value.Length;
            v57 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v57 <= 3 || (unsigned int)v57 >= v67 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v57] = 92;
              Value.Length = Length + 2;
            }
            DosPath.Length = Value.Length;
          }
        }
        v19 = 3;
        v68 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v15) = 1;
        v51 = (_CURDIR *)RtlpReferenceCurrentDirectory(v15, 0x180000000uLL, v16);
        v69 = v51;
        BaseAddress = v51;
        v62 = 1;
        if ( v51 )
        {
          v52 = v51 + 1;
        }
        else
        {
          v52 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v69 = 0LL;
          j = 0;
        }
        v73 = v52;
        v53 = RtlpComputeBackupIndex(v52);
        v65 = v53;
        v68 = v53;
        DosPath = v52->DosPath;
        if ( v53 == 3 )
          v54 = 4;
        else
          v54 = 2 * v53;
        DosPath.Length = v54;
        goto LABEL_95;
      case 5:
        v42 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL, v16);
        v69 = v42;
        BaseAddress = v42;
        v62 = 1;
        if ( v42 )
        {
          v43 = v42 + 1;
          *(_DWORD *)(a6 + 4) = v42[1].Handle;
        }
        else
        {
          v43 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v69 = 0LL;
          j = 0;
        }
        v73 = v43;
        DosPath = v43->DosPath;
        v65 = RtlpComputeBackupIndex(v43);
        v68 = v65;
LABEL_95:
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        v19 = v65;
        goto LABEL_19;
      case 6:
      case 7:
        v68 = 4;
        j = 4;
        if ( v9 < 4 )
          j = v9;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v44 = 0;
        if ( *(_DWORD *)a6 != 7 )
          v44 = v63;
        v63 = v44;
        v19 = 4;
        goto LABEL_19;
      default:
        v20 = 0;
        v64 = 0;
        v29 = v67;
        goto LABEL_148;
    }
  }
  v19 = 3;
  v68 = 3;
LABEL_19:
  v20 = DosPath.Length;
  v21 = v72 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 <= v8 )
    goto LABEL_20;
  if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v33 = v21 + 2;
    if ( v33 > 0xFFFF )
      v33 = 0;
    v20 = v33;
    v64 = v33;
    v29 = v67;
    v17 = (volatile signed __int32 *)v69;
    goto LABEL_148;
  }
  if ( v9 != 1 )
  {
    v20 = 0;
    if ( v21 <= 0xFFFF )
      v20 = v72 + DosPath.Length - 2 * j;
    v29 = v67;
    goto LABEL_51;
  }
  if ( DosPath.Length == 8 )
  {
    if ( v8 <= 8 )
    {
      v20 = 10;
      v29 = v67;
LABEL_51:
      v64 = v20;
LABEL_52:
      v17 = (volatile signed __int32 *)v69;
      goto LABEL_148;
    }
  }
  else
  {
    if ( v8 < DosPath.Length )
    {
      v64 = DosPath.Length;
      v29 = v67;
      goto LABEL_52;
    }
    v58 = (unsigned __int64)Value.Length >> 1;
    if ( (_DWORD)v58 && Buffer[(unsigned int)(v58 - 1)] == 92 )
      Value.Length -= 2;
  }
LABEL_20:
  for ( k = 0; k < Value.Length >> 1; ++k )
  {
    if ( Buffer[k] == 47 )
      Buffer[k] = 92;
  }
  v23 = Value.Length >> 1;
  while ( j < v9 )
  {
    v24 = *((_QWORD *)a1 + 1);
    v25 = *(unsigned __int16 *)(v24 + 2LL * j);
    if ( v25 == 92 )
      goto LABEL_36;
    v26 = v25 - 46;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_27;
LABEL_36:
      if ( !(_DWORD)v23 || Buffer[(unsigned int)(v23 - 1)] != 92 )
      {
        Buffer[v23] = 92;
        v23 = (unsigned int)(v23 + 1);
      }
      goto LABEL_35;
    }
    v34 = j + 1;
    if ( (_DWORD)v34 != v9 )
    {
      v35 = *(_WORD *)(v24 + 2 * v34);
      if ( v35 == 92 || v35 == 47 )
      {
        ++j;
      }
      else if ( v35 == 46
             && ((v36 = j + 2, (_DWORD)v36 == v9) || (v37 = *(_WORD *)(v24 + 2 * v36), v37 == 92) || v37 == 47) )
      {
        while ( (unsigned int)v23 >= v19 )
        {
          LOWORD(v72) = Buffer[v23];
          v38 = v72;
          Buffer[v23] = 0;
          if ( v38 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              LOWORD(v72) = Buffer[v23];
              v39 = v72;
              Buffer[v23] = 0;
              if ( v39 == 92 )
              {
                if ( (unsigned int)v23 < v19 )
                  goto LABEL_84;
                goto LABEL_80;
              }
              v23 = (unsigned int)(v23 - 1);
            }
            break;
          }
          v23 = (unsigned int)(v23 - 1);
        }
LABEL_84:
        v23 = (unsigned int)(v23 + 1);
LABEL_80:
        ++j;
      }
      else
      {
LABEL_27:
        while ( j < v9 )
        {
          v27 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v27 == 92 || v27 == 47 )
          {
            if ( j < v9 && (unsigned int)v23 >= 2 )
            {
              v28 = (unsigned int)(v23 - 1);
              if ( Buffer[v28] == 46 && Buffer[(unsigned int)(v23 - 2)] != 46 )
                v23 = (unsigned int)v28;
            }
            break;
          }
          Buffer[v23] = v27;
          v23 = (unsigned int)(v23 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v63 && (unsigned int)v23 > v19 && Buffer[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v29 = v67;
  if ( (unsigned int)v23 < v67 )
    Buffer[(unsigned int)v23] = 0;
  while ( (_DWORD)v23 )
  {
    v23 = (unsigned int)(v23 - 1);
    v30 = &Buffer[v23];
    if ( *v30 != 32 && *v30 != 46 )
    {
      LODWORD(v23) = v23 + 1;
      break;
    }
    *v30 = 0;
  }
  v31 = 2 * v23;
  Value.Length = 2 * v23;
  if ( !v79 )
  {
LABEL_50:
    v20 = v31;
    goto LABEL_51;
  }
  for ( m = v23; m && Buffer[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v23 || m < v19 )
  {
    *v79 = 0LL;
    goto LABEL_50;
  }
  *v79 = &Buffer[m];
  v20 = v31;
  v64 = v31;
  v17 = (volatile signed __int32 *)v69;
LABEL_148:
  if ( v62 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v20 = v64;
      Buffer = Value.Buffer;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( v20 >= 2 * (unsigned __int64)v29 && v29 )
    *Buffer = 0;
  return v20;
}
