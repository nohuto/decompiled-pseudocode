/*
 * XREFs of SmpStartCsr @ 0x140003C50
 * Callers:
 *     SmpCreateInitialSession @ 0x140010CC0 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpStopCsr @ 0x140001840 (SmpStopCsr.c)
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140003AD4 (SmpDestroyControlBlock.c)
 *     SmpAllocateControlBlock @ 0x140004110 (SmpAllocateControlBlock.c)
 *     SmpAllocateInitialCommandBuffer @ 0x14000426C (SmpAllocateInitialCommandBuffer.c)
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 *     SmpRecordControlBlock @ 0x140006898 (SmpRecordControlBlock.c)
 *     SmpReleaseControlBlock @ 0x14000696C (SmpReleaseControlBlock.c)
 *     SmpGetCoreProcessIds @ 0x1400109BC (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  __int64 v2; // rcx
  NTSTATUS CoreProcessIds; // esi
  _BYTE *v4; // rcx
  __int64 result; // rax
  __int64 ControlBlock; // rax
  _BYTE *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  int v15; // r12d
  __int64 v16; // rax
  unsigned int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE EventInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h]
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v23; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ProcessHandle; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+110h] [rbp+10h]

  memset_0(&v23, 0, 0x68uLL);
  v2 = *(unsigned int *)(a1 + 48);
  *(_OWORD *)BaseAddress = 0LL;
  if ( (unsigned int)v2 >= SmpNumberInitialSessions
    || (CoreProcessIds = SmpGetCoreProcessIds(v2, BaseAddress),
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48)),
        CoreProcessIds < 0) )
  {
    NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
    UnicodeString.Length = *(_WORD *)(a1 + 52);
    UnicodeString.MaximumLength = UnicodeString.Length;
    UnicodeString.Buffer = (PWSTR)(a1 + 56);
    ControlBlock = SmpAllocateControlBlock();
    v7 = (_BYTE *)ControlBlock;
    if ( !ControlBlock )
    {
      v8 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      result = 3221225626LL;
      SmpGlobalLog[2 * v8 + 2] = 456;
      SmpGlobalLog[2 * v8 + 3] = -1073741670;
      *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = a1;
      return result;
    }
    CoreProcessIds = SmpAllocateInitialCommandBuffer(*(_QWORD *)(ControlBlock + 24), &UnicodeString);
    if ( CoreProcessIds < 0 )
    {
      v9 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v9 + 2] = 471;
LABEL_40:
      *(_QWORD *)&SmpGlobalLog[2 * v9 + 4] = a1;
      SmpGlobalLog[2 * v9 + 3] = CoreProcessIds;
      goto LABEL_41;
    }
    CoreProcessIds = SmpExecuteCommand((int)&UnicodeString, (PRTL_USER_PROCESS_PARAMETERS)&v23);
    RtlFreeUnicodeString(&UnicodeString);
    if ( CoreProcessIds < 0 )
    {
      v9 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v9 + 2] = 491;
      goto LABEL_40;
    }
    v10 = NtQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
    CoreProcessIds = v10;
    if ( v10 < 0 )
    {
      NtTerminateProcess(ProcessHandle, v10);
      NtClose(ProcessHandle);
      NtClose(Handle);
LABEL_41:
      SmpReleaseControlBlock(v7);
      return (unsigned int)CoreProcessIds;
    }
    v12 = (_QWORD *)*((_QWORD *)v7 + 2);
    *v12 = *((_QWORD *)v7 + 4);
    v12[1] = *((_QWORD *)v7 + 5);
    *((_QWORD *)v7 + 6) = ProcessHandle;
    *((_QWORD *)v7 + 7) = v26;
    *((_DWORD *)v7 + 2) = ProcessInformation;
    v13 = ProcessInformation;
    v14 = _InterlockedIncrement(&dword_14002C618);
    if ( v14 <= SmpNumberInitialSessions )
    {
      v11 = 5LL * (v14 - 1);
      *(_DWORD *)(SmpCoreProcessIds + 40LL * (v14 - 1)) = ProcessInformation;
    }
    else
    {
      _InterlockedDecrement(&dword_14002C618);
    }
    *((_OWORD *)v7 + 4) = *(_OWORD *)a1;
    *((_OWORD *)v7 + 5) = *(_OWORD *)(a1 + 16);
    *((_QWORD *)v7 + 12) = *(_QWORD *)(a1 + 32);
    SmpRecordControlBlock(v7, v11, v13);
    CoreProcessIds = NtResumeThread(Handle, 0LL);
    NtClose(Handle);
    if ( CoreProcessIds < 0 )
    {
      if ( (*v7 & 1) == 0 )
        _InterlockedOr((volatile signed __int32 *)v7, 1u);
      SmpDestroyControlBlock((HANDLE *)v7, 1);
      goto LABEL_41;
    }
    Object[0] = *((HANDLE *)v7 + 6);
    Object[1] = *((HANDLE *)v7 + 4);
    v15 = 1;
    CoreProcessIds = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
    if ( CoreProcessIds >= 0 )
    {
      if ( CoreProcessIds )
        goto LABEL_42;
      NtQueryEvent(*((HANDLE *)v7 + 4), EventBasicInformation, EventInformation, 8u, 0LL);
      if ( !v20 )
      {
        if ( (*v7 & 1) == 0 )
          _InterlockedOr((volatile signed __int32 *)v7, 1u);
        v15 = 0;
        CoreProcessIds = -1073741823;
        goto LABEL_39;
      }
      CoreProcessIds = NtClearEvent(*((HANDLE *)v7 + 4));
    }
    else
    {
      v16 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v16 + 2] = 595;
      SmpGlobalLog[2 * v16 + 3] = CoreProcessIds;
      *(_QWORD *)&SmpGlobalLog[2 * v16 + 4] = a1;
      if ( (*v7 & 1) == 0 )
      {
        _m_prefetchw(v7);
        if ( (_InterlockedOr((volatile signed __int32 *)v7, 1u) & 1) == 0 )
          goto LABEL_39;
      }
      CoreProcessIds = 0;
    }
    if ( CoreProcessIds < 0 )
    {
LABEL_39:
      SmpDestroyControlBlock((HANDLE *)v7, v15);
      v9 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v9 + 2] = 646;
      goto LABEL_40;
    }
LABEL_42:
    SmpReleaseControlBlock(v7);
    return 259LL;
  }
  v4 = BaseAddress[0];
  if ( BaseAddress[0] && *((_DWORD *)BaseAddress[0] + 6) == 2 )
    *(_QWORD *)(a1 + 320) = *((_QWORD *)BaseAddress[0] + 6);
  else
    CoreProcessIds = -1073741823;
  if ( v4 )
    SmpDereferenceKnownSubSys(v4);
  if ( CoreProcessIds < 0 )
  {
    v29 = *(_DWORD *)(a1 + 48);
    v28 = 6;
    SmpStopCsr((__int64)v27);
    return (unsigned int)CoreProcessIds;
  }
  *(PVOID *)(a1 + 312) = BaseAddress[1];
  return 0LL;
}
