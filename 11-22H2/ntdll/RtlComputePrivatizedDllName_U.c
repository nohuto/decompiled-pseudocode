/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800E07E0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800E9D80 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A5980 (memmove.c)
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
  unsigned int v13; // r8d
  unsigned __int64 v14; // r14
  wchar_t *v15; // rdx
  wchar_t *j; // rcx
  __int64 v17; // rdx
  unsigned __int64 v19; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v21; // rbp
  wchar_t *v22; // r15
  unsigned __int64 v23; // rbx
  unsigned int v24; // ecx
  unsigned __int16 v25; // bp
  wchar_t *v26; // rax
  wchar_t *v27; // r15
  unsigned __int64 v28; // rbx
  wchar_t *v29; // rdi
  _WORD *v30; // rdi
  char *v31; // rdi
  unsigned __int64 v32; // rbx
  wchar_t *Src; // [rsp+20h] [rbp-58h]
  wchar_t *v34; // [rsp+28h] [rbp-50h]
  wchar_t *v35; // [rsp+30h] [rbp-48h]
  unsigned int v36; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  v35 = 0LL;
  v6 = 0LL;
  Src = Buffer;
  v7 = Buffer;
  v34 = 0LL;
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
        v34 = v9;
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
  v13 = Length + 2 * (1 - (v7 - Buffer));
  v36 = v13;
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(v14) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2 * ((unsigned __int64)(unsigned int)v14 >> 1)) == 59 )
          break;
        LODWORD(v14) = v14 + 2;
      }
      while ( (unsigned int)v14 < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
  }
  else
  {
    v14 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v10 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v10 = (wchar_t *)((char *)v10 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v15 = v10;
    for ( j = &v10[(v14 >> 1) - 1]; j > v10; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v15 = j + 1;
        break;
      }
    }
    v17 = v15 - v10;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v17) > 0xFFFE )
      return -1073741562;
    v19 = (unsigned __int16)(2 * v17);
    if ( (unsigned __int16)Length > 0xFFFCu || v13 + v12 + (_DWORD)v19 > 0xFFFE )
      return -1073741562;
    v11 = (unsigned __int16)(v13 + v12 + v19);
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)(v13 + v12 + v19));
    v35 = StringRoutine;
    v21 = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    memmove(StringRoutine, v10, (unsigned int)v19);
    v22 = &v21[v19 >> 1];
    memmove(v22, Src, v36 - 2LL);
    v13 = v36;
    v23 = ((unsigned __int64)v36 - 2) >> 1;
    if ( v34 )
    {
      v22[v23] = 0;
    }
    else
    {
      *(_QWORD *)&v22[v23] = *(_QWORD *)L".DLL";
      v22[v23 + 4] = aDll[4];
    }
  }
  v24 = Size + v12 + v14 + v13 + 14;
  if ( v24 > 0xFFFE )
    return -1073741562;
  v25 = Size + v12 + v14 + v13 + 14;
  v26 = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v24);
  v27 = v26;
  if ( !v26 )
    return -1073741801;
  memmove(v26, v10, (unsigned int)v14);
  v28 = (unsigned __int64)(unsigned int)v14 >> 1;
  v29 = &v27[v28];
  if ( Size )
  {
    memmove(&v27[v28], L"\\microsoft.system.package.metadata\\Application", Size);
    v29 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v29 = *(_QWORD *)L".Local";
  *((_DWORD *)v29 + 2) = *(_DWORD *)L"al";
  v30 = v29 + 6;
  *v30 = 92;
  v31 = (char *)(v30 + 1);
  memmove(v31, Src, v36 - 2LL);
  v32 = ((unsigned __int64)v36 - 2) >> 1;
  if ( v34 )
  {
    *(_WORD *)&v31[2 * v32] = 0;
  }
  else
  {
    *(_QWORD *)&v31[2 * v32] = *(_QWORD *)L".DLL";
    *(_WORD *)&v31[2 * v32 + 8] = aDll[4];
  }
  RealName->Buffer = v35;
  RealName->MaximumLength = v11;
  RealName->Length = v11;
  if ( v11 )
    RealName->Length = v11 - 2;
  LocalName->MaximumLength = v25;
  LocalName->Length = v25 - 2;
  LocalName->Buffer = v27;
  return 0;
}
