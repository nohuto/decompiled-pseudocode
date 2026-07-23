/*
 * XREFs of NtTranslateFilePath @ 0x14083E430
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExpVerifyFilePath @ 0x14083E710 (ExpVerifyFilePath.c)
 *     ExpTranslateEfiPath @ 0x14083E820 (ExpTranslateEfiPath.c)
 *     ExpTranslateArcPath @ 0x1409FE254 (ExpTranslateArcPath.c)
 *     ExpTranslateNtPath @ 0x1409FE6EC (ExpTranslateNtPath.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  void *v6; // rsi
  KPROCESSOR_MODE v7; // dl
  unsigned __int64 p_Length; // rax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  ULONG v11; // edi
  _DWORD *Pool2; // rax
  _DWORD *v13; // r14
  char *v15; // rdx
  ULONG v16; // eax
  NTSTATUS v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  NTSTATUS v22; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  ULONG v24; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v26; // [rsp+2Ch] [rbp-5Ch]
  PVOID v27; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-38h]

  v6 = 0LL;
  v24 = 0;
  P = 0LL;
  v27 = 0LL;
  if ( dword_140C31AB0 != 2 )
    return -1073741822;
  if ( OutputType - 1 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->PreviousMode;
    PreviousMode = v7;
    p_Length = (unsigned __int64)&InputFilePath->Length;
    v9 = 0x7FFFFFFF0000LL;
    if ( v7 )
    {
      if ( p_Length >= 0x7FFFFFFF0000LL )
        p_Length = 0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)p_Length;
      v26 = *(_DWORD *)p_Length;
    }
    else
    {
      v10 = *(_DWORD *)p_Length;
      v26 = *(_DWORD *)p_Length;
    }
    if ( v10 < 0xC )
      return -1073741811;
    if ( v7 )
    {
      if ( ((unsigned __int8)InputFilePath & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (char *)InputFilePath + v10;
      if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)InputFilePath )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int64)OutputFilePathLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)OutputFilePathLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v11 = *OutputFilePathLength;
      v24 = v11;
      v16 = v11;
      if ( !OutputFilePath )
      {
        v11 = 0;
        v24 = 0;
        v16 = 0;
      }
      if ( v16 )
        ProbeForWrite(OutputFilePath, v16, 4u);
      if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return -1073741727;
      v10 = v26;
    }
    else
    {
      v11 = OutputFilePath != 0LL ? *OutputFilePathLength : 0;
      v24 = v11;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v10, 1920364101LL);
    v13 = Pool2;
    P = Pool2;
    if ( !Pool2 )
      return -1073741670;
    memmove(Pool2, InputFilePath, v10);
    v13[1] = v10;
    if ( v11 )
    {
      v6 = (void *)ExAllocatePool2(64LL, v11, 1920364101LL);
      v27 = v6;
      if ( !v6 )
      {
        ExFreePoolWithTag(v13, 0);
        P = 0LL;
        return -1073741670;
      }
    }
    else
    {
      v27 = 0LL;
    }
    v17 = ExpVerifyFilePath(v13, (char *)v13 + (unsigned int)v13[1]);
    if ( v17 >= 0 )
    {
      v18 = v13[2];
      if ( OutputType == v18 )
      {
        if ( v11 < v10 )
          v17 = -1073741789;
        else
          memmove(v6, v13, v10);
        v11 = v10;
        v24 = v10;
      }
      else
      {
        v19 = v18 - 1;
        if ( !v19 || (v20 = v19 - 1) == 0 )
        {
          v22 = ExpTranslateArcPath(v13, OutputType, v6, &v24);
          goto LABEL_40;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v22 = ExpTranslateNtPath(v13, OutputType, v6, &v24);
          goto LABEL_40;
        }
        if ( v21 == 1 )
        {
          v22 = ExpTranslateEfiPath(v13, OutputType, v6, &v24);
LABEL_40:
          v17 = v22;
          v11 = v24;
          goto LABEL_41;
        }
        v17 = -1073741811;
      }
    }
LABEL_41:
    ExFreePoolWithTag(v13, 0);
    if ( v17 >= 0 )
    {
      if ( !v6 )
      {
LABEL_46:
        *OutputFilePathLength = v11;
        return v17;
      }
      memmove(OutputFilePath, v6, v11);
    }
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      v27 = 0LL;
    }
    goto LABEL_46;
  }
  return -1073741811;
}
