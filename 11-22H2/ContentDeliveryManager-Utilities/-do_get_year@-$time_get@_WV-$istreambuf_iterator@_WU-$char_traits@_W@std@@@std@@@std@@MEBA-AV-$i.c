/*
 * XREFs of ?do_get_year@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800D1B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x180064914 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC84 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800D0ABC (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get_year(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7)
{
  std::locale *v11; // rax
  const struct std::locale::facet *v12; // rbx
  int v13; // eax
  int *v14; // rdx
  int v15; // eax
  int v16; // ecx
  int v18; // [rsp+68h] [rbp+10h] BYREF
  char v19; // [rsp+70h] [rbp+18h] BYREF

  v11 = std::ios_base::getloc(a5, (std::locale *)&v19);
  v12 = std::use_facet<std::ctype<wchar_t>>(v11);
  std::locale::~locale((std::locale *)&v19);
  v18 = 0;
  v13 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
          a1,
          (__int64)a3,
          a4,
          0,
          2035,
          &v18,
          (__int64)v12);
  v14 = a6;
  v15 = *a6 | v13;
  *a6 = v15;
  if ( (v15 & 2) == 0 )
  {
    v16 = v18;
    if ( v18 < 1900 )
    {
      if ( v18 > 135 )
        *v14 = v15 | 2;
    }
    else
    {
      v16 = v18 - 1900;
    }
    *(_DWORD *)(a7 + 20) = v16;
  }
  *a2 = *a3;
  return a2;
}
