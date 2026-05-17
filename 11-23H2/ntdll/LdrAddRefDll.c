/*
 * XREFs of LdrAddRefDll @ 0x18002D240
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     TppExecuteWaitCallback @ 0x18004E764 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18004EF70 (TppIopExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18004F290 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180050860 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A380 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     LdrpPinModule @ 0x180079978 (LdrpPinModule.c)
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
