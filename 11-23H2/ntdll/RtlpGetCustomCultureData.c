/*
 * XREFs of RtlpGetCustomCultureData @ 0x18010AE04
 * Callers:
 *     RtlGetParentLocaleName @ 0x180013C20 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180015570 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x18010ACB0 (RtlIsValidLocaleName.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x18010AE7C (RtlpGetCustomCultureDataFromFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010B4A8 (RtlpOpenAndMapCustomCultureFile.c)
 */

__int64 __fastcall RtlpGetCustomCultureData(__int64 a1, char a2, char a3, __int64 a4)
{
  int CustomCultureDataFromFile; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  CustomCultureDataFromFile = RtlpOpenAndMapCustomCultureFile(a1, &v11, &v12);
  if ( CustomCultureDataFromFile >= 0 )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    CustomCultureDataFromFile = RtlpGetCustomCultureDataFromFile(v11, v12, v8, v9, a4);
    NtUnmapViewOfSection();
  }
  return (unsigned int)CustomCultureDataFromFile;
}
