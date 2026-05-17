/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800E1B10
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800EB0B0 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  int v4; // r10d
  char *v6; // rdx
  char *v7; // r8
  char *i; // rcx
  char *v9; // rax
  wchar_t *Buffer; // rdi
  int v11; // esi
  int v12; // r12d
  unsigned int v13; // r8d
  unsigned __int64 Length; // r14
  wchar_t *v15; // rdx
  wchar_t *j; // rcx
  __int64 v17; // rdx
  unsigned __int64 v19; // rbx
  char *StringRoutine; // rax
  char *v21; // rbp
  char *v22; // r15
  unsigned __int64 v23; // rbx
  unsigned int v24; // ecx
  __int16 v25; // bp
  char *v26; // rax
  char *v27; // r15
  unsigned __int64 v28; // rbx
  char *v29; // rdi
  _WORD *v30; // rdi
  char *v31; // rdi
  unsigned __int64 v32; // rbx
  void *Src; // [rsp+20h] [rbp-58h]
  char *v34; // [rsp+28h] [rbp-50h]
  void *v35; // [rsp+30h] [rbp-48h]
  unsigned int v36; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  v35 = 0LL;
  v6 = 0LL;
  Src = v3;
  v7 = v3;
  v34 = 0LL;
  if ( (_WORD)v4 )
  {
    for ( i = &v3[2 * ((unsigned __int64)*a1 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        v9 = i;
        if ( v6 )
          v9 = v6;
        v6 = v9;
        v34 = v9;
      }
      else if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        v7 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v11 = 0;
  v12 = v6 == 0LL ? 8 : 0;
  v13 = v4 + 2 * (1 - ((v7 - v3) >> 1));
  v36 = v13;
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2
                                                                      * ((unsigned __int64)(unsigned int)Length >> 1)) == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v15 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v15 = j + 1;
        break;
      }
    }
    v17 = v15 - Buffer;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
      return 3221225734LL;
    if ( (unsigned int)(2 * v17) > 0xFFFE )
      return 3221225734LL;
    v19 = (unsigned __int16)(2 * v17);
    if ( (unsigned __int16)v4 > 0xFFFCu || v13 + v12 + (_DWORD)v19 > 0xFFFE )
      return 3221225734LL;
    v11 = (unsigned __int16)(v13 + v12 + v19);
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned __int16)(v13 + v12 + v19));
    v35 = StringRoutine;
    v21 = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    memmove(StringRoutine, Buffer, (unsigned int)v19);
    v22 = &v21[2 * (v19 >> 1)];
    memmove(v22, Src, v36 - 2LL);
    v13 = v36;
    v23 = ((unsigned __int64)v36 - 2) >> 1;
    if ( v34 )
    {
      *(_WORD *)&v22[2 * v23] = 0;
    }
    else
    {
      *(_QWORD *)&v22[2 * v23] = *(_QWORD *)L".DLL";
      *(_WORD *)&v22[2 * v23 + 8] = aDll[4];
    }
  }
  v24 = Size + v12 + Length + v13 + 14;
  if ( v24 > 0xFFFE )
    return 3221225734LL;
  v25 = Size + v12 + Length + v13 + 14;
  v26 = (char *)NtdllpAllocateStringRoutine((unsigned __int16)v24);
  v27 = v26;
  if ( !v26 )
    return 3221225495LL;
  memmove(v26, Buffer, (unsigned int)Length);
  v28 = (unsigned __int64)(unsigned int)Length >> 1;
  v29 = &v27[2 * v28];
  if ( Size )
  {
    memmove(&v27[2 * v28], L"\\microsoft.system.package.metadata\\Application", Size);
    v29 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v29 = *(_QWORD *)L".Local";
  *((_DWORD *)v29 + 2) = *(_DWORD *)L"al";
  v30 = v29 + 12;
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
  *(_QWORD *)(a2 + 8) = v35;
  *(_WORD *)(a2 + 2) = v11;
  *(_WORD *)a2 = v11;
  if ( v11 )
    *(_WORD *)a2 = v11 - 2;
  *(_WORD *)(a3 + 2) = v25;
  *(_WORD *)a3 = v25 - 2;
  *(_QWORD *)(a3 + 8) = v27;
  return 0LL;
}
