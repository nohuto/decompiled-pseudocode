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

__int64 __fastcall LdrAddRefDll(int a1, __int64 a2)
{
  char v2; // di
  unsigned __int64 v3; // rdx
  int LoadedDllByHandle; // ebx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  bool v7; // zf
  __int64 v8; // rdi
  int Count; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, &v12, &v11);
    if ( LoadedDllByHandle >= 0 )
    {
      v7 = (v2 & 1) == 0;
      v8 = v12;
      if ( v7 )
        Count = LdrpIncrementModuleLoadCount(v12);
      else
        Count = LdrpPinModule(v12, v3, v5, v6);
      LoadedDllByHandle = Count;
      LdrpDereferenceModule(v8);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
