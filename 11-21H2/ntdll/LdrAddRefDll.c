/*
 * XREFs of LdrAddRefDll @ 0x180035130
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180024270 (TppIopExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v2; // di
  NTSTATUS LoadedDllByHandle; // ebx
  bool v4; // zf
  PVOID v5; // rdi
  NTSTATUS Count; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v8);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = (v2 & 1) == 0;
    v5 = BaseAddress;
    if ( v4 )
      Count = LdrpIncrementModuleLoadCount(BaseAddress);
    else
      Count = LdrpPinModule((__int64)BaseAddress);
    LoadedDllByHandle = Count;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
