/*
 * XREFs of LdrUnloadDll @ 0x18002D5B0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18004CF70 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18004FAA0 (RtlpTpWorkUnposted.c)
 *     LdrpGetShimEngineInterface @ 0x180079438 (LdrpGetShimEngineInterface.c)
 *     RtlWnfDllUnloadCallback @ 0x180088D60 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E19E0 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D65C (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS LoadedDllByHandle; // ebx
  char *v2; // rdi
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_1801843C8 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, &v7);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = (char *)BaseAddress;
      v3 = 1;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(BaseAddress, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          v3 = 0;
          LdrpDrainWorkQueue(0);
        }
        v2 = (char *)BaseAddress;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        if ( !v3 )
          LdrpDropLastInProgressCount(v6, v5);
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
