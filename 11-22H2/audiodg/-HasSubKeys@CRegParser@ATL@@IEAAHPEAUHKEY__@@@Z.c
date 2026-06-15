/*
 * XREFs of ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x140092160
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14009365C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::HasSubKeys(ATL::CRegParser *this, HKEY a2)
{
  unsigned int v2; // ebx
  DWORD v4; // [rsp+70h] [rbp+8h] BYREF
  int v5; // [rsp+74h] [rbp+Ch]

  v5 = HIDWORD(this);
  v2 = 0;
  v4 = 0;
  if ( RegQueryInfoKeyW(a2, 0LL, 0LL, 0LL, &v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL) )
    return 0LL;
  LOBYTE(v2) = v4 != 0;
  return v2;
}
