/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800DA1A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdx
  int LoadedDllByHandle; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v12, &v11, a4);
  if ( LoadedDllByHandle >= 0 )
  {
    v9 = v12;
    *(_DWORD *)(v12 + 272) = a2;
    LdrpDereferenceModule(v9, v5, v7, v8);
  }
  return (unsigned int)LoadedDllByHandle;
}
