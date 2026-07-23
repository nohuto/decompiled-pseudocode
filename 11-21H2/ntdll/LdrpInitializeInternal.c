/*
 * XREFs of LdrpInitializeInternal @ 0x18007B218
 * Callers:
 *     LdrpInitialize @ 0x18007B1C8 (LdrpInitialize.c)
 * Callees:
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     LdrpInitializationComplete @ 0x18007B3A4 (LdrpInitializationComplete.c)
 *     LdrpWaitForInitializationComplete @ 0x18007B404 (LdrpWaitForInitializationComplete.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwCreateEvent @ 0x1800A4970 (ZwCreateEvent.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpInitializeHotPatching @ 0x1800B092A (LdrpInitializeHotPatching.c)
 *     LdrpLoadPatchedNtdll @ 0x1800E061C (LdrpLoadPatchedNtdll.c)
 */

__int64 __fastcall LdrpInitializeInternal(__int64 a1, void *a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ebx
  __int64 result; // rax
  _DWORD v7[140]; // [rsp+30h] [rbp-248h] BYREF

  v4 = _InterlockedCompareExchange(&LdrpHotPatchInitialized, 1, 0);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 == 1 )
      LdrpWaitForInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent);
  }
  else
  {
    ZwCreateEvent(&LdrpHotPatchInitCompleteEvent, 0x1F0003u, 0LL, NotificationEvent, 0);
    memset(v7, 0, 0x228uLL);
    LdrpNtdllHotPatchContext = (__int64)v7;
    LdrpInitializeHotPatching();
    if ( LdrpIsHotPatchingEnabled )
      v7[136] = LdrpLoadPatchedNtdll(a2);
    LdrpInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent, 5256LL);
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x4000) == 0 )
    LdrpInitialize(a1, a2);
  result = -(__int64)(v5 != 0);
  LdrpNtdllHotPatchContext &= result;
  return result;
}
