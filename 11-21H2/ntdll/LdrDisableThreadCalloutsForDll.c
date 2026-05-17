/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007F7B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int LoadedDllByHandle; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18017A188 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v11, &v10, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v8 = v11;
      if ( !*(_WORD *)(v11 + 110) )
        *(_BYTE *)(v11 + 106) |= 4u;
      LdrpDereferenceModule(v8, v5, v6, v7);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
