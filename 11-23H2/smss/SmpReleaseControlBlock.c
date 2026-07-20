/*
 * XREFs of SmpReleaseControlBlock @ 0x14000696C
 * Callers:
 *     SmpStopCsr @ 0x140001840 (SmpStopCsr.c)
 *     SmpFinalizeClientContext @ 0x140003134 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 *     SmpDestroyControlBlock @ 0x140003AD4 (SmpDestroyControlBlock.c)
 *     SmpStartCsr @ 0x140003C50 (SmpStartCsr.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SmpReleaseControlBlock(char *BaseAddress)
{
  signed __int32 v2; // eax
  bool v3; // cc
  BOOLEAN result; // al
  void *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  __int128 v8; // xmm1
  _OWORD v9[2]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v10; // [rsp+60h] [rbp-148h]
  int v11; // [rsp+68h] [rbp-140h]
  int v12; // [rsp+6Ch] [rbp-13Ch]
  int v13; // [rsp+70h] [rbp-138h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 1, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    v5 = (void *)*((_QWORD *)BaseAddress + 6);
    if ( v5 )
    {
      if ( (*BaseAddress & 1) == 0 && *((_QWORD *)BaseAddress + 9) != SmpUniqueProcessId )
      {
        v7 = *((_DWORD *)BaseAddress + 2);
        v8 = *((_OWORD *)BaseAddress + 5);
        v9[0] = *((_OWORD *)BaseAddress + 4);
        v10 = *((_QWORD *)BaseAddress + 12);
        v9[1] = v8;
        v11 = 5;
        v12 = -1073741823;
        v13 = v7;
        ((void (__fastcall *)(__int64, __int64, _OWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))NtAlpcSendWaitReceivePort)(
          SmpApiConnectionPort,
          0x10000LL,
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      RtlAcquireSRWLockExclusive(&SmpControlLock);
      RtlDeleteNoSplay((PRTL_SPLAY_LINKS)(BaseAddress + 104), &SmpControlBlockRoot);
      RtlReleaseSRWLockExclusive(&SmpControlLock, v6);
      NtClose(v5);
    }
    NtClose(*((HANDLE *)BaseAddress + 4));
    NtClose(*((HANDLE *)BaseAddress + 5));
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *((PVOID *)BaseAddress + 2));
    NtClose(*((HANDLE *)BaseAddress + 3));
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
