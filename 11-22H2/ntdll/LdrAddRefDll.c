/*
 * XREFs of LdrAddRefDll @ 0x18002D410
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     TppExecuteWaitCallback @ 0x18004E8C4 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18004F0D0 (TppIopExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18004F3F0 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800509C0 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A550 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     LdrpPinModule @ 0x180079308 (LdrpPinModule.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, unsigned __int64 a2)
{
  char v2; // di
  int LoadedDllByHandle; // ebx
  bool v4; // zf
  __int64 v5; // rdi
  int Count; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, &v9, &v8);
    if ( LoadedDllByHandle >= 0 )
    {
      v4 = (v2 & 1) == 0;
      v5 = v9;
      if ( v4 )
        Count = LdrpIncrementModuleLoadCount(v9);
      else
        Count = LdrpPinModule(v9);
      LoadedDllByHandle = Count;
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
