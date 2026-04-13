/*
 * XREFs of ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18006703C
 * Callers:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800A8A14 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     _Getctype @ 0x180005874 (_Getctype.c)
 *     _Getcvt @ 0x180005A98 (_Getcvt.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18005656C (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18005838C (--1_Locinfo@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::ctype<wchar_t>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  char *v5; // rbx
  __int64 v6; // rax
  char *v7; // rdx
  _Cvtvec *v8; // rax
  _Ctypevec v10; // [rsp+20h] [rbp-C8h] BYREF
  _Cvtvec v11; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v12[112]; // [rsp+70h] [rbp-78h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = (char *)operator new(0x60uLL);
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
      std::_Locinfo::_Locinfo((std::_Locinfo *)v12, v7);
      v4 = 1;
      *((_DWORD *)v5 + 2) = 0;
      *(_QWORD *)v5 = &std::ctype<unsigned short>::`vftable';
      *(_Ctypevec *)(v5 + 16) = *Getctype(&v10);
      v8 = Getcvt(&v11);
      *((_OWORD *)v5 + 3) = *(_OWORD *)&v8->_Page;
      *((_OWORD *)v5 + 4) = *(_OWORD *)&v8->_Isleadbyte[4];
      *((_OWORD *)v5 + 5) = *(_OWORD *)&v8->_Isleadbyte[20];
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v12);
  }
  return 2LL;
}
