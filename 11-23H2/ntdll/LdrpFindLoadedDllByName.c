/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180029A40
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029988 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x18002AECC (LdrpFindLoadedDllInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E26C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByName @ 0x180077840 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     LdrpGetBaseNameFromFullName @ 0x180029F48 (LdrpGetBaseNameFromFullName.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v8; // rbp
  int v9; // ebx
  int v10; // r9d
  unsigned __int16 *i; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  char v14; // cl
  _QWORD **v15; // rdi
  _QWORD *v16; // r14
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int CurrentServiceSessionId; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v30; // rcx
  char *v31; // rcx
  unsigned __int8 v32; // dl
  int v33; // r9d
  char *v34; // rcx
  unsigned __int8 v35; // al
  __int64 v36; // [rsp+20h] [rbp-48h]
  _BYTE v37[16]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a1;
  if ( !a1 )
  {
    LdrpGetBaseNameFromFullName(a2, v37);
    v8 = (unsigned __int16 *)v37;
  }
  v9 = 0;
  v10 = *v8 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)v8 + 1); v10; v9 = (unsigned __int16)v12 + 65599 * v9 )
  {
    v12 = *i++;
    --v10;
    if ( (unsigned int)v12 >= 0x61 )
    {
      if ( (unsigned int)v12 > 0x7A )
      {
        if ( qword_180184808 && (unsigned __int16)v12 >= 0xC0u )
          LOWORD(v12) = *(_WORD *)(qword_180184808
                                 + 2
                                 * ((v12 & 0xF)
                                  + *(unsigned __int16 *)(qword_180184808
                                                        + 2LL
                                                        * (((unsigned __int8)v12 >> 4)
                                                         + (unsigned int)*(unsigned __int16 *)(qword_180184808
                                                                                             + 2 * (v12 >> 8))))))
                      + v12;
      }
      else
      {
        LOWORD(v12) = v12 - 32;
      }
    }
  }
  if ( !v9 )
    v9 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v14 = 0;
  v15 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v9 & 0x1F));
  v16 = *v15;
  if ( *v15 == v15 )
  {
LABEL_37:
    v19 = -1073741515;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v17 = (volatile signed __int32 *)(v16 - 14);
    if ( v9 != *((_DWORD *)v16 + 38) || (a3 & 8) != 0 && (v17[26] & 1) == 0 )
      goto LABEL_27;
    if ( !a2 )
      break;
    LOBYTE(v13) = 1;
    v14 = RtlEqualUnicodeString(a2, v17 + 18, v13);
    if ( v14 )
      goto LABEL_17;
LABEL_27:
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
      goto LABEL_19;
  }
  if ( (v17[26] & 0x10000000) != 0 || (LOBYTE(v13) = 1, !(unsigned __int8)RtlEqualUnicodeString(v8, v17 + 22, v13)) )
  {
    v14 = 0;
    goto LABEL_27;
  }
  v14 = 1;
LABEL_17:
  v18 = *((_QWORD *)v17 + 19);
  if ( *(_DWORD *)(v18 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v18 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v17 + 69);
  *(_QWORD *)a4 = v17;
LABEL_19:
  if ( !v14 )
    goto LABEL_37;
  v19 = 0;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
LABEL_22:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId(v21, v20, v22, v23);
  if ( a2 )
  {
    if ( CurrentServiceSessionId )
      v30 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v30 = 2147353476LL;
    if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v31 = (unsigned int)RtlGetCurrentServiceSessionId(v30, v25, v26, v27)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v31 & 0x20) != 0 )
      {
        v32 = 0;
        v36 = a2;
        if ( v19 < 0 )
          v32 = 3;
        v33 = v32;
LABEL_62:
        LdrpLogEtwEvent(5280, 0, 0, v33, v36, 0LL);
      }
    }
  }
  else
  {
    if ( CurrentServiceSessionId )
      v28 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v28 = 2147353476LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v34 = (unsigned int)RtlGetCurrentServiceSessionId(v28, v25, v26, v27)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v34 & 0x20) != 0 )
      {
        v35 = 0;
        v36 = (__int64)v8;
        if ( v19 < 0 )
          v35 = 3;
        v33 = v35;
        goto LABEL_62;
      }
    }
  }
  return (unsigned int)v19;
}
