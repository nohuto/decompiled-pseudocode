/*
 * XREFs of LdrFindEntryForAddress @ 0x180008A90
 * Callers:
 *     LdrpIsReparsePoint @ 0x1800086DC (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180008850 (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC930 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180008AE0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, _QWORD *a2)
{
  int LoadedDllByAddress; // ebx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(a1, &v6, &v5);
    if ( LoadedDllByAddress >= 0 )
    {
      *a2 = v6;
      LdrpDereferenceModule();
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)LoadedDllByAddress;
}
