/*
 * XREFs of LdrFindEntryForAddress @ 0x180008CB0
 * Callers:
 *     LdrpIsReparsePoint @ 0x180008270 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x1800083E0 (LdrpGetDataModulePath.c)
 *     LdrInitShimEngineDynamic @ 0x1800DCF80 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180008D00 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
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
