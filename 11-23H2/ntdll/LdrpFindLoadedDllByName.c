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

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        char a3,
        __int64 a4,
        _DWORD *a5)
{
  PUNICODE_STRING v8; // rbp
  int v9; // ebx
  int v10; // r9d
  wchar_t *i; // r10
  unsigned __int64 v12; // rax
  BOOLEAN v13; // cl
  _QWORD **v14; // rdi
  _QWORD *v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // rax
  int v18; // ebx
  ULONG CurrentServiceSessionId; // eax
  __int64 v20; // rcx
  __int64 v22; // rcx
  char *v23; // rcx
  unsigned __int8 v24; // dl
  int v25; // r9d
  char *v26; // rcx
  unsigned __int8 v27; // al
  PUNICODE_STRING v28; // [rsp+20h] [rbp-48h]
  _BYTE v29[16]; // [rsp+30h] [rbp-38h] BYREF

  v8 = String1;
  if ( !String1 )
  {
    LdrpGetBaseNameFromFullName(a2, v29);
    v8 = (PUNICODE_STRING)v29;
  }
  v9 = 0;
  v10 = v8->Length >> 1;
  for ( i = v8->Buffer; v10; v9 = (unsigned __int16)v12 + 65599 * v9 )
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
  v13 = 0;
  v14 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v9 & 0x1F));
  v15 = *v14;
  if ( *v14 == v14 )
  {
LABEL_37:
    v18 = -1073741515;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v16 = v15 - 14;
    if ( v9 != *((_DWORD *)v15 + 38) || (a3 & 8) != 0 && (v16[13] & 1) == 0 )
      goto LABEL_27;
    if ( !a2 )
      break;
    v13 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v16 + 9), 1u);
    if ( v13 )
      goto LABEL_17;
LABEL_27:
    v15 = (_QWORD *)*v15;
    if ( v15 == v14 )
      goto LABEL_19;
  }
  if ( (v16[13] & 0x10000000) != 0 || !RtlEqualUnicodeString(v8, (PUNICODE_STRING)(v16 + 11), 1u) )
  {
    v13 = 0;
    goto LABEL_27;
  }
  v13 = 1;
LABEL_17:
  v17 = v16[19];
  if ( *(_DWORD *)(v17 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v17 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v16 + 69);
  *(_QWORD *)a4 = v16;
LABEL_19:
  if ( !v13 )
    goto LABEL_37;
  v18 = 0;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
LABEL_22:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( a2 )
  {
    if ( CurrentServiceSessionId )
      v22 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v22 = 2147353476LL;
    if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v23 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v23 & 0x20) != 0 )
      {
        v24 = 0;
        v28 = a2;
        if ( v18 < 0 )
          v24 = 3;
        v25 = v24;
LABEL_62:
        LdrpLogEtwEvent(5280, 0, 0, v25, (__int64)v28, 0LL);
      }
    }
  }
  else
  {
    if ( CurrentServiceSessionId )
      v20 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v20 = 2147353476LL;
    if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v26 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v26 & 0x20) != 0 )
      {
        v27 = 0;
        v28 = v8;
        if ( v18 < 0 )
          v27 = 3;
        v25 = v27;
        goto LABEL_62;
      }
    }
  }
  return (unsigned int)v18;
}
