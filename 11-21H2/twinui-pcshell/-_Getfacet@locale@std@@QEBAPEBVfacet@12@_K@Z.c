/*
 * XREFs of ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18058C5AC
 * Callers:
 *     ??$use_facet@V?$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805DCEAC (--$use_facet@V-$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     <none>
 */

const struct std::locale::facet *__fastcall std::locale::_Getfacet(std::locale *this, unsigned __int64 a2)
{
  __int64 v3; // rdx
  const struct std::locale::facet *result; // rax
  __int64 v5; // rax

  v3 = *((_QWORD *)this + 1);
  if ( a2 >= *(_QWORD *)(v3 + 24) )
  {
    result = 0LL;
  }
  else
  {
    result = *(const struct std::locale::facet **)(*(_QWORD *)(v3 + 16) + 8 * a2);
    if ( result )
      return result;
  }
  if ( *(_BYTE *)(v3 + 36) )
  {
    v5 = std::locale::_Getgloballocale();
    if ( a2 >= *(_QWORD *)(v5 + 24) )
      return 0LL;
    else
      return *(const struct std::locale::facet **)(*(_QWORD *)(v5 + 16) + 8 * a2);
  }
  return result;
}
