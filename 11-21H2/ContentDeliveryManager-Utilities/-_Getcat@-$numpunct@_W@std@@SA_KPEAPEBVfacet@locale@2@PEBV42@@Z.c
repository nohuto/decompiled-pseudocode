/*
 * XREFs of ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800CAD18
 * Callers:
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x1800C99EC (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18005656C (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18005838C (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800CC648 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 */

__int64 __fastcall std::numpunct<wchar_t>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  _DWORD *v5; // rbx
  __int64 v6; // rax
  char *v7; // rdx
  std::_Locinfo *v8; // rax
  __int64 v9; // r8
  _BYTE v11[136]; // [rsp+20h] [rbp-88h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x30uLL);
    if ( v5 )
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = *(char **)(v6 + 40);
        if ( !v7 )
          v7 = (char *)(v6 + 48);
      }
      else
      {
        v7 = (char *)&word_180121FC0;
      }
      v8 = std::_Locinfo::_Locinfo((std::_Locinfo *)v11, v7);
      v4 = 1;
      v5[2] = 0;
      *(_QWORD *)v5 = &std::numpunct<wchar_t>::`vftable';
      LOBYTE(v9) = 1;
      std::numpunct<wchar_t>::_Init(v5, v8, v9);
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v11);
  }
  return 4LL;
}
