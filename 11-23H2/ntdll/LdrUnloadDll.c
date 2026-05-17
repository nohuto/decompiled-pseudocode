/*
 * XREFs of LdrUnloadDll @ 0x18002D3E0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18004CE10 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18004F940 (RtlpTpWorkUnposted.c)
 *     LdrpGetShimEngineInterface @ 0x180079AA8 (LdrpGetShimEngineInterface.c)
 *     RtlWnfDllUnloadCallback @ 0x180089560 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E2D10 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D48C (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrUnloadDll(unsigned __int64 a1)
{
  int LoadedDllByHandle; // ebx
  __int64 v2; // rdi
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180187488 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v8, &v7);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = v8;
      v3 = 1;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(v8, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          v3 = 0;
          LdrpDrainWorkQueue(0);
        }
        v2 = v8;
        LdrpDecrementModuleLoadCountEx(v8, 0LL);
        if ( !v3 )
          LdrpDropLastInProgressCount(v6, v5);
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
