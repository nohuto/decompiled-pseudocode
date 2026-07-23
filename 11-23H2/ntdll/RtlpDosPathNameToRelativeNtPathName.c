/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18001BBE0
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A99C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001BB60 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E0B8 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18002B124 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18007C158 (RtlDosPathNameToRelativeNtPathName.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180019184 (RtlpWin32NtNameToNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001CF30 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BE18 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        _UNICODE_STRING *a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING **a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  _UNICODE_STRING *v9; // rbx
  bool v10; // cc
  wchar_t *Buffer; // rax
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // r11d
  wchar_t *v15; // r14
  int v16; // eax
  unsigned __int16 Length; // r11
  int v18; // eax
  const _UNICODE_STRING *v19; // r14
  unsigned int v20; // esi
  wchar_t *Heap; // rax
  int v22; // esi
  size_t v23; // rbp
  wchar_t *v24; // r15
  unsigned __int16 v25; // si
  unsigned int MaximumLength; // eax
  unsigned __int64 v27; // r9
  __int16 v28; // bp
  __int64 v29; // r8
  wchar_t *v30; // rdx
  unsigned __int16 v31; // si
  unsigned __int64 v32; // rbp
  wchar_t *v33; // r15
  unsigned __int16 v34; // si
  unsigned int v35; // eax
  _BYTE *v36; // rsi
  unsigned __int64 v37; // rcx
  bool v38; // zf
  wchar_t v40; // cx
  __int64 v41; // rax
  __int64 v42; // r15
  _WORD *v43; // rcx
  __int16 v44; // bp
  _BYTE v45[4]; // [rsp+30h] [rbp-2A8h] BYREF
  unsigned int FullPathName_Ustr; // [rsp+34h] [rbp-2A4h]
  int v47; // [rsp+38h] [rbp-2A0h]
  PVOID BaseAddress; // [rsp+40h] [rbp-298h]
  int v49; // [rsp+48h] [rbp-290h]
  unsigned __int64 v50; // [rsp+50h] [rbp-288h]
  _UNICODE_STRING String2; // [rsp+58h] [rbp-280h] BYREF
  int v52; // [rsp+68h] [rbp-270h] BYREF
  _UNICODE_STRING **v53; // [rsp+70h] [rbp-268h]
  _BYTE v54[528]; // [rsp+80h] [rbp-258h] BYREF

  v9 = a3;
  v47 = a1;
  v10 = a2->Length <= 8u;
  v53 = a5;
  if ( !v10 )
  {
    Buffer = a2->Buffer;
    if ( *Buffer == 92 )
    {
      v40 = Buffer[1];
      if ( (v40 == 92 || v40 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a2, a3, a4, a5, a6, a7);
      LOBYTE(a1) = v47;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  BaseAddress = v54;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v54, a6, v45, &v52);
    v14 = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      v15 = (wchar_t *)v54;
      while ( !v45[0] )
      {
        if ( v14 <= v13 )
        {
          String2.Length = v14;
          String2.MaximumLength = v13;
          String2.Buffer = v15;
          v16 = RtlDetermineDosPathNameType_Ustr(&String2);
          goto LABEL_11;
        }
        if ( (v47 & 4) == 0 && ((v47 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_63;
        BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        v15 = (wchar_t *)BaseAddress;
        if ( !BaseAddress )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, BaseAddress, a6, v45, &v52);
        v14 = FullPathName_Ustr;
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_58;
  }
  String2 = *a2;
  v16 = RtlDetermineDosPathNameType_Ustr(&String2);
  Length = String2.Length;
  FullPathName_Ustr = String2.Length;
  v52 = v16;
LABEL_11:
  if ( v16 == 2 )
    goto LABEL_12;
  if ( v16 != 1 )
  {
    if ( v16 == 6 )
    {
      v50 = 8LL;
      LOWORD(v49) = 8;
      v18 = 2;
      goto LABEL_13;
    }
LABEL_12:
    v50 = 0LL;
    v18 = 10;
    LOWORD(v49) = 0;
LABEL_13:
    v19 = &RtlpDosDevicesPrefix;
    goto LABEL_14;
  }
  v19 = &RtlpDosDevicesUncPrefix;
  v50 = 4LL;
  v49 = 4;
  v18 = 14;
LABEL_14:
  v20 = v18 + Length;
  if ( v20 > 0xFFFE )
  {
LABEL_63:
    v36 = BaseAddress;
    v12 = -1073741562;
    goto LABEL_33;
  }
  if ( v9 )
  {
    if ( v20 <= v9->MaximumLength )
    {
LABEL_19:
      v22 = v19->Length;
      if ( (_WORD)v22 )
      {
        if ( (unsigned int)v9->Length + v22 <= v9->MaximumLength )
        {
          v23 = v19->Length;
          v24 = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
          memmove(v24, v19->Buffer, v23);
          v25 = v9->Length + v22;
          MaximumLength = v9->MaximumLength;
          v9->Length = v25;
          if ( (unsigned int)v25 + 1 < MaximumLength )
            v24[v23 >> 1] = 0;
        }
      }
      v27 = v50;
      v28 = FullPathName_Ustr;
      v29 = v9->Length;
      v30 = &String2.Buffer[v50 / 2];
      v31 = FullPathName_Ustr - v49;
      if ( (_WORD)FullPathName_Ustr != (_WORD)v49 && (unsigned int)v29 + v31 <= v9->MaximumLength )
      {
        v32 = v31;
        v33 = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
        memmove(v33, v30, v31);
        v34 = v9->Length + v31;
        v35 = v9->MaximumLength;
        v27 = v50;
        v9->Length = v34;
        if ( (unsigned int)v34 + 1 < v35 )
          v33[v32 >> 1] = 0;
        v28 = FullPathName_Ustr;
      }
      if ( v53 )
        *v53 = v9;
      v36 = BaseAddress;
      v37 = (unsigned __int64)v9->Length >> 1;
      v9->Buffer[v37] = 0;
      if ( a6 )
      {
        v37 = *a6;
        if ( *a6 )
          *a6 = (unsigned __int64)v9->Buffer + v37 + v19->Length - v27 - (_QWORD)v36;
      }
      if ( a7 )
      {
        v38 = v52 == 5;
        *(_DWORD *)a7 = 0;
        *(_QWORD *)(a7 + 8) = 0LL;
        *(_QWORD *)(a7 + 16) = 0LL;
        *(_QWORD *)(a7 + 24) = 0LL;
        if ( v38 )
        {
          LOBYTE(v37) = 1;
          v41 = RtlpReferenceCurrentDirectory(v37, v30, v29);
          v42 = v41;
          if ( v41 )
          {
            if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v41 + 24), &String2, 1u) )
              goto LABEL_70;
            v43 = (wchar_t *)((char *)v9->Buffer + v19->Length + *(unsigned __int16 *)(v42 + 24) - v50);
            *(_QWORD *)(a7 + 8) = v43;
            v44 = v28 - *(_WORD *)(v42 + 24);
            *(_WORD *)a7 = v44;
            if ( *v43 == 92 )
            {
              v44 -= 2;
              *(_WORD *)a7 = v44;
              *(_QWORD *)(a7 + 8) = v43 + 1;
            }
            v38 = (v47 & 2) == 0;
            *(_WORD *)(a7 + 2) = v44;
            if ( v38 )
            {
LABEL_70:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v42, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v42 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v42);
              }
            }
            else
            {
              *(_QWORD *)(a7 + 24) = v42;
              *(_QWORD *)(a7 + 16) = *(_QWORD *)(v42 + 8);
            }
          }
          else
          {
            RtlLeaveCriticalSection(&FastPebLock);
          }
        }
      }
      goto LABEL_33;
    }
    if ( !a4 )
    {
      v12 = -1073741562;
      goto LABEL_58;
    }
  }
  else if ( !a4 )
  {
    v12 = -1073741811;
    goto LABEL_58;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
  a4->Buffer = Heap;
  if ( Heap )
  {
    v9 = a4;
    FullPathName_Ustr = String2.Length;
    a4->Length = 0;
    a4->MaximumLength = v20;
    goto LABEL_19;
  }
  v12 = -1073741801;
LABEL_58:
  v36 = BaseAddress;
LABEL_33:
  if ( v36 != v54 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
  return v12;
}
