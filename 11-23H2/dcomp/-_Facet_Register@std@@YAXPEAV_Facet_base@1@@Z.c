/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18007D864
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18007D0C8 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18007D19C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  std::_Fac_node *v2; // rax

  v2 = (std::_Fac_node *)operator new(0x10uLL);
  if ( v2 )
  {
    *(_QWORD *)v2 = qword_18021CCE0;
    *((_QWORD *)v2 + 1) = a1;
  }
  qword_18021CCE0 = v2;
}
