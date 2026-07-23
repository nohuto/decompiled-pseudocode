/*
 * XREFs of PiCMCaptureRegistryPropertyInputData @ 0x1407C0E90
 * Callers:
 *     PiCMGetRegistryProperty @ 0x1407C0B44 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x14096AD14 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BD7C (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406D4220 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegistryPropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // al
  int UserModeCallersCopy; // edi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r12
  char *v9; // rax
  _DWORD *v10; // r15
  unsigned int v11; // r8d
  char *v12; // rax
  _DWORD *v13; // r15
  int v14; // r14d
  unsigned __int64 v16; // r8
  unsigned int v17; // r8d
  int v18; // [rsp+3Ch] [rbp-3Ch]
  char v20; // [rsp+80h] [rbp+8h]

  v18 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    v14 = 0;
    goto LABEL_25;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = a1 + a2;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x28 && *(_DWORD *)a1 == 40 )
    {
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 28);
      *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 36);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x38 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)a4 != 56 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_24;
  v8 = (_QWORD *)(a4 + 16);
  v9 = *(char **)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( !v9 )
  {
    v10 = (_DWORD *)(a4 + 24);
LABEL_40:
    if ( v9 )
    {
      if ( *v10 < 2u )
        goto LABEL_29;
    }
    else if ( *v10 )
    {
      goto LABEL_29;
    }
    goto LABEL_19;
  }
  v10 = (_DWORD *)(a4 + 24);
  v11 = *(_DWORD *)(a4 + 24);
  if ( v11 < 2 )
    goto LABEL_40;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v9, v11, 2u, v20, 1);
  if ( UserModeCallersCopy < 0 )
  {
    *v8 = 0LL;
    *v10 = 0;
  }
  else
  {
    v18 = 1;
    *(_WORD *)(*v8 + 2 * ((unsigned __int64)(unsigned int)*v10 >> 1) - 2) = 0;
  }
LABEL_19:
  v12 = *(char **)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0LL;
  if ( !v12 )
  {
    v13 = (_DWORD *)(a4 + 48);
    goto LABEL_21;
  }
  v13 = (_DWORD *)(a4 + 48);
  v17 = *(_DWORD *)(a4 + 48);
  if ( !v17 )
  {
LABEL_21:
    if ( v12 )
    {
      if ( *v13 )
        goto LABEL_23;
    }
    else if ( !*v13 )
    {
LABEL_23:
      PreviousMode = v20;
LABEL_24:
      v14 = 0;
      goto LABEL_25;
    }
LABEL_29:
    UserModeCallersCopy = -1073741811;
    goto LABEL_23;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 40), v12, v17, 1u, v20, 1);
  PreviousMode = v20;
  if ( UserModeCallersCopy < 0 )
  {
    *(_QWORD *)(a4 + 40) = 0LL;
    *v13 = 0;
    goto LABEL_24;
  }
  v14 = 1;
LABEL_25:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v18 )
      PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
    if ( v14 )
      PiControlFreeUserModeCallersBuffer(v20, *(void **)(a4 + 40));
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
  }
  return (unsigned int)UserModeCallersCopy;
}
