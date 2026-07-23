/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180002790
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180002A90 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  wchar_t *Buffer; // r9
  int Length; // r10d
  wchar_t *v6; // rdx
  wchar_t *v7; // r8
  wchar_t *i; // rcx
  wchar_t *v9; // rax
  wchar_t *v10; // rdi
  int v11; // esi
  int v12; // r12d
  unsigned __int64 v13; // r14
  wchar_t *v14; // rdx
  wchar_t *j; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v19; // rbp
  wchar_t *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  unsigned __int16 v23; // bp
  wchar_t *v24; // rax
  wchar_t *v25; // r15
  unsigned __int64 v26; // rbx
  wchar_t *v27; // rdi
  _WORD *v28; // rdi
  char *v29; // rdi
  unsigned __int64 v30; // rbx
  wchar_t *Src; // [rsp+20h] [rbp-58h]
  wchar_t *v33; // [rsp+28h] [rbp-50h]
  wchar_t *v34; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  v34 = 0LL;
  v6 = 0LL;
  Src = Buffer;
  v7 = Buffer;
  v33 = 0LL;
  if ( (_WORD)Length )
  {
    for ( i = &Buffer[((unsigned __int64)DllName->Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        v9 = i;
        if ( v6 )
          v9 = v6;
        v6 = v9;
        v33 = v9;
      }
      else if ( *i == 92 || *i == 47 )
      {
        v7 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v10 = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v11 = 0;
  v12 = v6 == 0LL ? 8 : 0;
  v35 = Length + 2 * (1 - (v7 - Buffer));
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(v13) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2 * ((unsigned __int64)(unsigned int)v13 >> 1)) == 59 )
          break;
        LODWORD(v13) = v13 + 2;
      }
      while ( (unsigned int)v13 < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
  }
  else
  {
    v13 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v10 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v10 = (wchar_t *)((char *)v10 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = v10;
    for ( j = &v10[(v13 >> 1) - 1]; j > v10; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - v10;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return -1073741562;
    v17 = (unsigned __int16)(2 * v16);
    if ( (unsigned __int16)Length > 0xFFFCu || v35 + v12 + (_DWORD)v17 > 0xFFFE )
      return -1073741562;
    v11 = (unsigned __int16)(v35 + v12 + v17);
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)(v35 + v12 + v17));
    v34 = StringRoutine;
    v19 = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    memmove(StringRoutine, v10, (unsigned int)v17);
    v20 = &v19[v17 >> 1];
    memmove(v20, Src, v35 - 2LL);
    v21 = ((unsigned __int64)v35 - 2) >> 1;
    if ( v33 )
    {
      v20[v21] = 0;
    }
    else
    {
      *(_QWORD *)&v20[v21] = *(_QWORD *)L".DLL";
      v20[v21 + 4] = aDll[4];
    }
  }
  v22 = Size + v12 + v13 + v35 + 14;
  if ( v22 > 0xFFFE )
    return -1073741562;
  v23 = Size + v12 + v13 + v35 + 14;
  v24 = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v22);
  v25 = v24;
  if ( !v24 )
    return -1073741801;
  memmove(v24, v10, (unsigned int)v13);
  v26 = (unsigned __int64)(unsigned int)v13 >> 1;
  v27 = &v25[v26];
  if ( Size )
  {
    memmove(&v25[v26], L"\\microsoft.system.package.metadata\\Application", Size);
    v27 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v27 = *(_QWORD *)L".Local";
  *((_DWORD *)v27 + 2) = *(_DWORD *)L"al";
  v28 = v27 + 6;
  *v28 = 92;
  v29 = (char *)(v28 + 1);
  memmove(v29, Src, v35 - 2LL);
  v30 = ((unsigned __int64)v35 - 2) >> 1;
  if ( v33 )
  {
    *(_WORD *)&v29[2 * v30] = 0;
  }
  else
  {
    *(_QWORD *)&v29[2 * v30] = *(_QWORD *)L".DLL";
    *(_WORD *)&v29[2 * v30 + 8] = aDll[4];
  }
  RealName->Buffer = v34;
  RealName->MaximumLength = v11;
  RealName->Length = v11;
  if ( v11 )
    RealName->Length = v11 - 2;
  LocalName->MaximumLength = v23;
  LocalName->Length = v23 - 2;
  LocalName->Buffer = v25;
  return 0;
}
