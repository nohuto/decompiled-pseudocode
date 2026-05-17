/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800D9B90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 */

bool __fastcall LdrIsModuleSxsRedirected(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  int v8; // ebx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (int)LdrpFindLoadedDllByHandle(a1, &v10, 0LL, a4) >= 0 )
  {
    v8 = *(_DWORD *)(v10 + 104);
    LdrpDereferenceModule(v10, v5, v6, v7);
    return (v8 & 0x10000000) != 0;
  }
  return v4;
}
