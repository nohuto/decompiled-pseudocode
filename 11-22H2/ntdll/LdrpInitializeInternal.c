/*
 * XREFs of LdrpInitializeInternal @ 0x180073EC8
 * Callers:
 *     LdrpInitialize @ 0x180073E78 (LdrpInitialize.c)
 * Callees:
 *     LdrpWaitForInitializationComplete @ 0x180002CAC (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     LdrpInitializationComplete @ 0x180074060 (LdrpInitializationComplete.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwCreateEvent @ 0x18009F6F0 (ZwCreateEvent.c)
 *     LdrpInitializeHotPatching @ 0x1800AD96C (LdrpInitializeHotPatching.c)
 *     LdrpLoadPatchedNtdll @ 0x1800DEF34 (LdrpLoadPatchedNtdll.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeInternal(__int64 a1, void *a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ebx
  __int64 result; // rax
  _BYTE v7[544]; // [rsp+30h] [rbp-248h] BYREF
  int PatchedNtdll; // [rsp+250h] [rbp-28h]

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
    memset_thunk_772440563353939046(v7, 0, 0x228uLL);
    LdrpNtdllHotPatchContext = (__int64)v7;
    LdrpInitializeHotPatching();
    if ( LdrpIsHotPatchingEnabled )
      PatchedNtdll = LdrpLoadPatchedNtdll(a2);
    LdrpInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent, 5256LL);
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x4000) == 0 )
    LdrpInitialize(a1, a2);
  result = -(__int64)(v5 != 0);
  LdrpNtdllHotPatchContext &= result;
  return result;
}
