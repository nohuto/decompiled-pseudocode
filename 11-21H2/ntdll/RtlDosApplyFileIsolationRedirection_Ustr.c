/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     RtlDosSearchPath_Ustr @ 0x180043D50 (RtlDosSearchPath_Ustr.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x180002A90 (sxsisol_RespectDotLocal.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180043AB0 (RtlGetFullPathName_UstrEx.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180047984 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFindCharInUnicodeString @ 0x180047A60 (RtlFindCharInUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075290 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800879F8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __int128 *a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  _QWORD *v12; // rcx
  int v13; // r15d
  int CharInUnicodeString; // eax
  int appended; // ebx
  bool v16; // si
  int v17; // ecx
  _DWORD *v18; // rsi
  __int128 v20; // xmm0
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // rcx
  _WORD *v24; // rax
  _QWORD *v25; // rdi
  _WORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v27[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v31[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v33; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+C8h] [rbp-38h] BYREF
  char *v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *v38; // [rsp+E8h] [rbp-18h]
  wchar_t *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  _QWORD v42[12]; // [rsp+110h] [rbp+10h] BYREF
  _WORD v43[16]; // [rsp+170h] [rbp+70h] BYREF
  char v44; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&UnicodeString.Length = a7;
  v12 = a8;
  *(_QWORD *)&v33.Length = a8;
  v13 = 0;
  LODWORD(v30) = 0;
  *((_QWORD *)&v30 + 1) = 0LL;
  v35 = 0x800000;
  v36 = &v44;
  v34 = 0LL;
  v26[0] = 0;
  v29 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
    *a5 = 0LL;
  v43[0] = 0;
  v40 = 32LL;
  v38 = v43;
  v39 = v43;
  *((_QWORD *)&v37 + 1) = v43;
  v41 = 32LL;
  LODWORD(v37) = 0x200000;
  if ( !a4 )
  {
    v42[4] = 2LL;
    v42[2] = &v42[6];
    v42[5] = 2LL;
    v42[3] = &v42[6];
    v42[1] = &v42[6];
    LOWORD(v42[6]) = 0;
    LODWORD(v42[0]) = 0x20000;
    goto LABEL_11;
  }
  v23 = *(unsigned __int16 *)(a4 + 2);
  v24 = *(_WORD **)(a4 + 8);
  if ( v23 < 2 )
  {
    v24 = &v42[6];
    v42[4] = 2LL;
    v42[2] = &v42[6];
    LOWORD(v23) = 2;
    v42[3] = &v42[6];
    v42[1] = &v42[6];
    v42[5] = 2LL;
  }
  else
  {
    v42[2] = *(_QWORD *)(a4 + 8);
    v42[4] = v23;
    v42[3] = v24;
    v42[5] = v23;
    v42[1] = v24;
    if ( !v24 )
      goto LABEL_60;
  }
  *v24 = 0;
LABEL_60:
  WORD1(v42[0]) = v23;
  v12 = *(_QWORD **)&v33.Length;
  LOWORD(v42[0]) = 0;
LABEL_11:
  v42[9] = a6;
  v42[7] = a4;
  v42[8] = a5;
  LOBYTE(v42[10]) = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    appended = -1073741811;
    goto LABEL_33;
  }
  if ( !a2 )
  {
    appended = -1073741811;
    goto LABEL_33;
  }
  if ( a4 )
  {
    if ( a5 && !a6 )
      goto LABEL_87;
  }
  else if ( !a5 && v12 )
  {
LABEL_87:
    appended = -1073741811;
    goto LABEL_33;
  }
  v28 = *a2;
  if ( a3 )
  {
    if ( *(_WORD *)a3 )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v28, &unk_18012C290, v27);
      appended = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString != -1073741275 )
          goto LABEL_33;
        v31[1] = *a3;
        v31[0] = v28;
        appended = RtlMultiAppendUnicodeStringBuffer(&v37, 2LL, v31);
        if ( appended < 0 )
          goto LABEL_33;
        v28 = v37;
      }
    }
  }
  v16 = 0;
  *(_QWORD *)&v31[0] = 0LL;
  if ( *((_QWORD *)&v30 + 1) )
  {
    appended = -1073741811;
  }
  else
  {
    v17 = RtlDetermineDosPathNameType_Ustr(&v28);
    v27[0] = v17;
    if ( ((v17 - 1) & 0xFFFFFFFA) != 0 || v17 == 5 )
      goto LABEL_20;
    appended = RtlGetFullPathName_UstrEx((__int64)&v28, (__int64)&v35, (__int64)&v30, v31, 0LL, 0LL, v27, 0LL);
    if ( appended >= 0 )
    {
      a2 = *(__int128 **)&v31[0];
      v20 = **(_OWORD **)&v31[0];
      v31[0] = **(_OWORD **)&v31[0];
      if ( v27[0] == 6 && *(_DWORD *)(*((_QWORD *)&v28 + 1) + 10LL) == 6029370 )
      {
        *((_QWORD *)&v31[0] + 1) += 8LL;
        WORD1(v28) -= 8;
        v21 = v28 - 8;
        *((_QWORD *)&v28 + 1) += 8LL;
        v22 = LOWORD(v31[0]) - 8;
        LOWORD(v28) = v28 - 8;
        WORD1(v31[0]) -= 8;
        LOWORD(v31[0]) -= 8;
        v20 = v31[0];
      }
      else
      {
        v21 = v28;
        v22 = v31[0];
      }
      if ( v21 > v22 )
      {
        v28 = v20;
        v16 = a2 == &v30;
      }
LABEL_20:
      appended = 0;
      if ( v16 )
        goto LABEL_23;
    }
  }
  if ( *((_QWORD *)&v30 + 1) )
  {
    NtdllpFreeStringRoutine(*((__int64 *)&v30 + 1));
    v30 = 0LL;
  }
LABEL_23:
  if ( appended < 0 )
    goto LABEL_34;
  if ( (a1 & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sxsisol_RespectDotLocal((unsigned __int16 *)&v28, (unsigned __int16 *)v42, &v29);
        if ( appended < 0 )
          goto LABEL_33;
      }
    }
    v13 = v29;
  }
  if ( (v13 & 1) != 0 )
  {
    v18 = *(_DWORD **)&UnicodeString.Length;
  }
  else
  {
    LOBYTE(a2) = !a4 && !a5;
    v18 = *(_DWORD **)&UnicodeString.Length;
    appended = sxsisol_SearchActCtxForDllName(
                 (unsigned int)&v28,
                 (_DWORD)a2,
                 (unsigned int)&v34,
                 *(_DWORD *)&UnicodeString.Length,
                 (__int64)v42);
    if ( appended < 0 )
      goto LABEL_33;
  }
  if ( !a5 && a4 && v42[1] != *(_QWORD *)(a4 + 8) )
  {
    appended = -1073741789;
    goto LABEL_33;
  }
  v25 = *(_QWORD **)&v33.Length;
  if ( *(_QWORD *)&v33.Length )
  {
    appended = RtlFindCharInUnicodeString(1LL, v42, &RtlDosPathSeperatorsString, v26);
    if ( appended < 0 )
      goto LABEL_33;
    *v25 = ((unsigned __int64)v26[0] >> 1) + 1;
  }
  appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v42);
  if ( appended >= 0 )
  {
    if ( v18 )
      *v18 = v13;
    appended = 0;
  }
  while ( 1 )
  {
LABEL_33:
    if ( appended < 0 )
    {
LABEL_34:
      if ( LOBYTE(v42[10]) )
      {
        if ( v42[2] && v42[2] != v42[3] )
        {
          v33.Buffer = (wchar_t *)v42[2];
          RtlFreeUnicodeString(&v33);
        }
        if ( v42[3] )
          *(_WORD *)v42[3] = 0;
      }
      memset(v42, 0, 0x58uLL);
    }
    if ( *((_QWORD *)&v30 + 1) )
    {
      NtdllpFreeStringRoutine(*((__int64 *)&v30 + 1));
      v30 = 0LL;
    }
    if ( v38 )
    {
      if ( v38 != v39 )
      {
        UnicodeString.Buffer = v38;
        RtlFreeUnicodeString(&UnicodeString);
      }
      v38 = v39;
      v40 = v41;
    }
    *((_QWORD *)&v37 + 1) = v39;
    if ( v39 )
      *v39 = 0;
    WORD1(v37) = v41;
    LOWORD(v37) = 0;
    if ( appended != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      433LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    appended = -1073741595;
  }
  return (unsigned int)appended;
}
