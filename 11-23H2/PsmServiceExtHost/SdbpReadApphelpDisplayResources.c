/*
 * XREFs of SdbpReadApphelpDisplayResources @ 0x180091E64
 * Callers:
 *     SdbpApphelpExeInfo @ 0x18009162C (SdbpApphelpExeInfo.c)
 * Callees:
 *     SdbOpenApphelpResourceFile @ 0x180091550 (SdbOpenApphelpResourceFile.c)
 *     SdbpConvertResourcesToStrings @ 0x18009193C (SdbpConvertResourcesToStrings.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180094188 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpReadApphelpDisplayResources(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // esi
  unsigned int FirstTag; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  HMODULE hLibModule[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  *(_OWORD *)hLibModule = 0LL;
  v15 = 0LL;
  v8 = 0;
  hLibModule[0] = SdbOpenApphelpResourceFile();
  if ( hLibModule[0] )
  {
    FirstTag = SdbFindFirstTag(a1, a3, 16420LL);
    if ( FirstTag )
      LODWORD(hLibModule[1]) = SdbReadDWORDTag(a1, FirstTag, 0LL);
    v10 = SdbFindFirstTag(a1, a3, 16421LL);
    if ( v10 )
      HIDWORD(hLibModule[1]) = SdbReadDWORDTag(a1, v10, 0LL);
    v11 = SdbFindFirstTag(a1, a3, 16422LL);
    if ( v11 )
      LODWORD(v15) = SdbReadDWORDTag(a1, v11, 0LL);
    v12 = SdbFindFirstTag(a1, a3, 16425LL);
    if ( v12 )
      HIDWORD(v15) = SdbReadDWORDTag(a1, v12, 0LL);
    if ( (unsigned int)SdbpConvertResourcesToStrings(a1, a2, hLibModule, a4) )
      v8 = 1;
    if ( hLibModule[0] )
      FreeLibrary(hLibModule[0]);
  }
  return v8;
}
