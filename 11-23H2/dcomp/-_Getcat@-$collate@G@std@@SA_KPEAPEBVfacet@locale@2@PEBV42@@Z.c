/*
 * XREFs of ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18007D650
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18007D0C8 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18007D778 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall std::collate<unsigned short>::_Getcat(std::locale::facet **a1, __int64 a2)
{
  char v2; // bl
  std::locale::facet *v5; // rdi
  __int64 v6; // rax
  std::_Locinfo *v7; // rbx
  struct _Collvec *v8; // rax
  struct _Collvec v10; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v11[104]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v12[3]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp-30h]

  v2 = 0;
  if ( a1 && !*a1 )
  {
    v5 = (std::locale::facet *)operator new(0x20uLL);
    if ( v5 )
    {
      v6 = std::locale::name(a2, v12);
      if ( *(_QWORD *)(v6 + 24) >= 0x10uLL )
        v6 = *(_QWORD *)v6;
      v7 = (std::_Locinfo *)std::_Locinfo::_Locinfo((std::_Locinfo *)v11, (const char *)v6);
      std::locale::facet::facet(v5, 0LL);
      *(_QWORD *)v5 = &std::collate<unsigned short>::`vftable';
      v8 = std::_Locinfo::_Getcoll(v7, &v10);
      v2 = 3;
      *((struct _Collvec *)v5 + 1) = *v8;
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v2 & 2) != 0 )
    {
      v2 &= ~2u;
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v11);
    }
    if ( (v2 & 1) != 0 && v13 >= 0x10 )
      std::_Deallocate<16,0>(v12[0], v13 + 1);
  }
  return 1LL;
}
