/*
 * XREFs of ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x140094410
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140090CF8 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::VTFromRegType(LPCWSTR lpString1, unsigned __int16 *a2)
{
  LPCWSTR *v3; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax

  v3 = (LPCWSTR *)&`ATL::CRegParser::VTFromRegType'::`2'::map;
  v5 = 0;
  while ( lstrcmpiW(lpString1, *v3) )
  {
    ++v5;
    v3 += 2;
    if ( v5 >= 4 )
      return 0LL;
  }
  result = 1LL;
  *a2 = *((_WORD *)&`ATL::CRegParser::VTFromRegType'::`2'::map + 8 * (int)v5 + 4);
  return result;
}
