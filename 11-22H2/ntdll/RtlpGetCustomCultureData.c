/*
 * XREFs of RtlpGetCustomCultureData @ 0x180109964
 * Callers:
 *     RtlGetParentLocaleName @ 0x180013E30 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180015780 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x180109810 (RtlIsValidLocaleName.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x1801099DC (RtlpGetCustomCultureDataFromFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010A008 (RtlpOpenAndMapCustomCultureFile.c)
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
