/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x18001C2A0
 * Callers:
 *     RtlGetFullPathName_UEx @ 0x1800195A0 (RtlGetFullPathName_UEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019630 (RtlGetFullPathName_UstrEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetFullPath @ 0x18002DF70 (LdrpGetFullPath.c)
 *     RtlSetCurrentDirectory_U @ 0x18007B470 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CE00 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpCheckRelativeDrive @ 0x180057918 (RtlpCheckRelativeDrive.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180058F20 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringCopy @ 0x1800682AC (RtlUnicodeStringCopy.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x180084018 (RtlpComputeBackupIndex.c)
 *     RtlpCheckDeviceName @ 0x18008B9FC (RtlpCheckDeviceName.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18008BAB4 (RtlUnicodeStringCbCatStringN.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     RtlUnicodeStringCopyString @ 0x1800D767C (RtlUnicodeStringCopyString.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        wchar_t *Buffer,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  unsigned int v8; // r14d
  int v9; // r8d
  unsigned int v10; // edi
  _WORD *v11; // rdx
  unsigned int i; // ecx
  __int16 v13; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  _WORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r10d
  volatile signed __int32 *v19; // rdx
  unsigned int j; // ebx
  unsigned int v21; // r13d
  unsigned int v22; // edx
  unsigned int k; // ecx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  wchar_t v28; // ax
  __int64 v30; // r8
  unsigned int v31; // ebx
  wchar_t *v32; // rcx
  unsigned __int16 v33; // r8
  unsigned int m; // ecx
  unsigned int v35; // edx
  __int64 v36; // r9
  __int16 v37; // cx
  __int64 v38; // rax
  __int16 v39; // cx
  __int16 v40; // cx
  __int16 v41; // cx
  _CURDIR *v42; // rax
  _CURDIR *v43; // rcx
  _CURDIR *v44; // rax
  _CURDIR *v45; // rsi
  int v46; // eax
  _CURDIR *v47; // rax
  _CURDIR *p_CurrentDirectory; // rbx
  WCHAR v49; // ax
  WCHAR v50; // si
  __int16 v51; // r10
  int v52; // edx
  __int16 v53; // r8
  NTSTATUS v54; // eax
  unsigned __int16 Length; // cx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int16 v59; // dx
  __int16 v60; // dx
  __int16 v61; // dx
  unsigned int v62; // edi
  __int64 v63; // rsi
  char v64; // [rsp+20h] [rbp-E8h]
  bool v65; // [rsp+21h] [rbp-E7h]
  unsigned int v66; // [rsp+28h] [rbp-E0h]
  unsigned int v67; // [rsp+2Ch] [rbp-DCh]
  _UNICODE_STRING Value; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v69; // [rsp+48h] [rbp-C0h]
  _CURDIR *v70; // [rsp+50h] [rbp-B8h]
  unsigned int Size; // [rsp+58h] [rbp-B0h]
  int Size_4; // [rsp+5Ch] [rbp-ACh]
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h]
  _UNICODE_STRING DosPath; // [rsp+68h] [rbp-A0h] BYREF
  _CURDIR *v75; // [rsp+78h] [rbp-90h]
  __int16 v76; // [rsp+80h] [rbp-88h]
  WCHAR v77; // [rsp+84h] [rbp-84h]
  int v78; // [rsp+88h] [rbp-80h]
  unsigned int v79; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v80; // [rsp+90h] [rbp-78h]
  NTSTATUS v81; // [rsp+94h] [rbp-74h]
  unsigned __int64 v82; // [rsp+98h] [rbp-70h]
  _QWORD *v83; // [rsp+A0h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v86[6]; // [rsp+BAh] [rbp-4Eh]

  v83 = a4;
  v8 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v9 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v9 = a2;
  Size = v9;
  *(_QWORD *)a6 = 0LL;
  v79 = *a1;
  v10 = v79 >> 1;
  if ( !(v79 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v79 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v65 = v13 != 92 && v13 != 47;
  v69 = Size >> 1;
  v80 = Size >> 1;
  v82 = Size;
  memset_thunk_772440563353939046(Buffer, 0, Size);
  *(_QWORD *)&Value.Length = 0LL;
  *(_DWORD *)&Value.MaximumLength = (unsigned __int16)(2 * (Size >> 1));
  Value.Buffer = Buffer;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v62 = HIWORD(IsDosDeviceName_Ustr);
    v63 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v62 || (int)RtlpCheckDeviceName(a1, v62, a5) >= 0 && !*a5 )
    {
      if ( (int)v63 + 8 >= (unsigned int)(unsigned __int16)(2 * (Size >> 1)) )
      {
        if ( (unsigned int)(v63 + 10) <= 0xFFFF )
          return (unsigned int)(v63 + 10);
        return v8;
      }
      else
      {
        RtlUnicodeStringCopy(&Value, L"\b\n");
        RtlUnicodeStringCbCatStringN(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v62 >> 1), v63);
        return (unsigned int)(v63 + 8);
      }
    }
    return 0LL;
  }
  v15 = (_WORD *)*((_QWORD *)a1 + 1);
  v16 = *a1;
  if ( (unsigned __int16)v16 >= 2u && (*v15 == 92 || *v15 == 47) )
  {
    if ( (unsigned __int16)v16 >= 4u && ((v59 = v15[1], v59 == 92) || v59 == 47) )
    {
      if ( (unsigned __int16)v16 >= 6u && ((v60 = v15[2], v60 == 46) || v60 == 63) )
      {
        if ( (unsigned __int16)v16 >= 8u && ((v61 = v15[3], v61 == 92) || v61 == 47) )
        {
          v17 = 6;
        }
        else
        {
          v17 = 1;
          if ( (_WORD)v16 == 6 )
            v17 = 7;
        }
      }
      else
      {
        v17 = 1;
      }
    }
    else
    {
      v17 = 4;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int16)v16 < 4u || !*v15 || v15[1] != 58 )
  {
    v17 = 5;
    goto LABEL_26;
  }
  if ( (unsigned __int16)v16 >= 6u )
  {
    v16 = (unsigned __int16)v15[2];
    if ( (_WORD)v16 == 92 || (_WORD)v16 == 47 )
    {
      v17 = 2;
LABEL_26:
      v18 = 3;
      goto LABEL_27;
    }
  }
  v18 = 3;
  v17 = 3;
LABEL_27:
  *(_DWORD *)a6 = v17;
  DosPath = 0LL;
  v19 = 0LL;
  v70 = 0LL;
  BaseAddress = 0LL;
  v64 = 0;
  j = 0;
  if ( v17 != 2 )
  {
    switch ( v17 )
    {
      case 1:
        v52 = 0;
        v78 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v53 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v53 == 92 || v53 == 47 )
          {
            v78 = ++v52;
            if ( v52 == 2 )
              break;
          }
        }
        v67 = j;
        Size_4 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_106;
      case 3:
        v47 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL, 0x180000000uLL);
        v70 = v47;
        BaseAddress = v47;
        v64 = 1;
        if ( v47 )
        {
          p_CurrentDirectory = v47 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v70 = 0LL;
        }
        v75 = p_CurrentDirectory;
        v76 = NLS_UPCASE(qword_1801817B8, *p_CurrentDirectory->DosPath.Buffer);
        v49 = NLS_UPCASE(qword_1801817B8, **((unsigned __int16 **)a1 + 1));
        v50 = v49;
        v77 = v49;
        if ( v51 == v49 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(&Value, &DosPath);
          Buffer = Value.Buffer;
        }
        else
        {
          RtlpCheckRelativeDrive(v49);
          SourceString = 61;
          *(_WORD *)v86 = v50;
          *(_DWORD *)&v86[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v81 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v21 = 0;
                v66 = 0;
                Buffer = Value.Buffer;
                v31 = v69;
                goto LABEL_65;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v50;
              *(_DWORD *)v86 = 6029370;
              *(_WORD *)&v86[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
            }
          }
          else
          {
            Length = Value.Length;
            v56 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v69 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v56] = 92;
              Value.Length = Length + 2;
            }
            DosPath.Length = Value.Length;
          }
        }
        v18 = 3;
        Size_4 = 3;
        j = 2;
        goto LABEL_29;
      case 4:
        LOBYTE(v16) = 1;
        v44 = (_CURDIR *)RtlpReferenceCurrentDirectory(v16, 0LL, 0x180000000uLL);
        v70 = v44;
        BaseAddress = v44;
        v64 = 1;
        if ( v44 )
        {
          v45 = v44 + 1;
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v70 = 0LL;
          j = 0;
        }
        v75 = v45;
        v46 = RtlpComputeBackupIndex(v45);
        v67 = v46;
        Size_4 = v46;
        DosPath = v45->DosPath;
        if ( v46 == 3 )
          DosPath.Length = 4;
        else
          DosPath.Length = 2 * v46;
        goto LABEL_106;
      case 5:
        v42 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL, 0x180000000uLL);
        v70 = v42;
        BaseAddress = v42;
        v64 = 1;
        if ( v42 )
        {
          v43 = v42 + 1;
          *(_DWORD *)(a6 + 4) = v42[1].Handle;
        }
        else
        {
          v43 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v70 = 0LL;
          j = 0;
        }
        v75 = v43;
        DosPath = v43->DosPath;
        v67 = RtlpComputeBackupIndex(v43);
        Size_4 = v67;
LABEL_106:
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        v18 = v67;
        goto LABEL_29;
      case 6:
      case 7:
        Size_4 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v18 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v65 = 0;
        goto LABEL_29;
      default:
        v21 = 0;
        v66 = 0;
        v31 = v69;
        goto LABEL_158;
    }
  }
  Size_4 = 3;
LABEL_29:
  v21 = DosPath.Length;
  v22 = v79 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v22 + 2 <= v82 )
    goto LABEL_30;
  if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v35 = v22 + 2;
    if ( v35 > 0xFFFF )
      v35 = 0;
    v21 = v35;
    v66 = v35;
    v31 = v69;
    v19 = (volatile signed __int32 *)v70;
    goto LABEL_158;
  }
  if ( v10 != 1 )
  {
    v21 = 0;
    if ( v22 <= 0xFFFF )
      v21 = v79 + DosPath.Length - 2 * j;
    v31 = v69;
    goto LABEL_64;
  }
  if ( DosPath.Length == 8 )
  {
    if ( Size <= DosPath.Length )
    {
      v21 = DosPath.Length + 2;
      v31 = v69;
LABEL_64:
      v66 = v21;
LABEL_65:
      v19 = (volatile signed __int32 *)v70;
      goto LABEL_158;
    }
  }
  else
  {
    if ( Size < DosPath.Length )
    {
      v31 = v69;
      goto LABEL_64;
    }
    v57 = (unsigned __int64)Value.Length >> 1;
    if ( (_DWORD)v57 && Buffer[(unsigned int)(v57 - 1)] == 92 )
      Value.Length -= 2;
  }
LABEL_30:
  for ( k = 0; k < Value.Length >> 1; ++k )
  {
    if ( Buffer[k] == 47 )
      Buffer[k] = 92;
  }
  v24 = Value.Length >> 1;
  while ( j < v10 )
  {
    v25 = *((_QWORD *)a1 + 1);
    v26 = *(unsigned __int16 *)(v25 + 2LL * j);
    if ( v26 == 92 )
      goto LABEL_48;
    v27 = v26 - 46;
    if ( v27 )
    {
      if ( v27 != 1 )
        goto LABEL_37;
LABEL_48:
      if ( !(_DWORD)v24 || Buffer[(unsigned int)(v24 - 1)] != 92 )
      {
        Buffer[v24] = 92;
        v24 = (unsigned int)(v24 + 1);
      }
      goto LABEL_47;
    }
    v36 = j + 1;
    if ( (_DWORD)v36 == v10 )
      goto LABEL_47;
    v37 = *(_WORD *)(v25 + 2 * v36);
    if ( v37 == 92 || v37 == 47 )
      goto LABEL_92;
    if ( v37 == 46 )
    {
      v38 = j + 2;
      if ( (_DWORD)v38 == v10 || (v39 = *(_WORD *)(v25 + 2 * v38), v39 == 92) || v39 == 47 )
      {
        while ( (unsigned int)v24 >= v18 )
        {
          LOWORD(Size) = Buffer[v24];
          v40 = Size;
          Buffer[v24] = 0;
          if ( v40 == 92 )
          {
            while ( (unsigned int)v24 >= v18 )
            {
              LOWORD(Size) = Buffer[v24];
              v41 = Size;
              Buffer[v24] = 0;
              if ( v41 == 92 )
              {
                if ( (unsigned int)v24 < v18 )
                  goto LABEL_154;
                goto LABEL_92;
              }
              v24 = (unsigned int)(v24 - 1);
            }
            break;
          }
          v24 = (unsigned int)(v24 - 1);
        }
LABEL_154:
        v24 = (unsigned int)(v24 + 1);
LABEL_92:
        ++j;
        goto LABEL_47;
      }
    }
LABEL_37:
    while ( j < v10 )
    {
      v28 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
      if ( v28 == 92 || v28 == 47 )
      {
        if ( j < v10 && (unsigned int)v24 >= 2 )
        {
          v30 = (unsigned int)(v24 - 1);
          if ( Buffer[v30] == 46 && Buffer[(unsigned int)(v24 - 2)] != 46 )
            v24 = (unsigned int)v30;
        }
        break;
      }
      Buffer[v24] = v28;
      v24 = (unsigned int)(v24 + 1);
      ++j;
    }
    --j;
LABEL_47:
    ++j;
  }
  if ( v65 && (unsigned int)v24 > v18 && Buffer[(unsigned int)(v24 - 1)] == 92 )
    LODWORD(v24) = v24 - 1;
  v31 = v69;
  if ( (unsigned int)v24 < v69 )
    Buffer[(unsigned int)v24] = 0;
  while ( (_DWORD)v24 )
  {
    v24 = (unsigned int)(v24 - 1);
    v32 = &Buffer[v24];
    if ( *v32 != 32 && *v32 != 46 )
    {
      LODWORD(v24) = v24 + 1;
      break;
    }
    *v32 = 0;
  }
  v33 = 2 * v24;
  Value.Length = 2 * v24;
  if ( !v83 )
  {
LABEL_63:
    v21 = v33;
    goto LABEL_64;
  }
  for ( m = v24; m && Buffer[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v24 || m < v18 )
  {
    *v83 = 0LL;
    goto LABEL_63;
  }
  *v83 = &Buffer[m];
  v21 = v33;
  v66 = v33;
  v19 = (volatile signed __int32 *)v70;
LABEL_158:
  if ( v64 )
  {
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v21 = v66;
      Buffer = Value.Buffer;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( v21 >= 2 * (unsigned __int64)v31 && v31 )
    *Buffer = 0;
  return v21;
}
