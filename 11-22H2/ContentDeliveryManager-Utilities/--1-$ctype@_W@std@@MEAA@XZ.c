/*
 * XREFs of ??1?$ctype@_W@std@@MEAA@XZ @ 0x1800532D4
 * Callers:
 *     ??_G?$ctype@_W@std@@MEAAPEAXI@Z @ 0x180054880 (--_G-$ctype@_W@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::ctype<wchar_t>::~ctype<wchar_t>(__int64 a1)
{
  bool v1; // zf
  void **result; // rax

  v1 = *(_DWORD *)(a1 + 32) == 0;
  *(_QWORD *)a1 = &std::ctype<unsigned short>::`vftable';
  if ( !v1 )
    free(*(void **)(a1 + 24));
  free(*(void **)(a1 + 40));
  result = &std::_Facet_base::`vftable';
  *(_QWORD *)a1 = &std::_Facet_base::`vftable';
  return result;
}
