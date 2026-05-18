/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800DBBE8
 * Callers:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x18001EF28 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18001F018 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  std::_Fac_node *v2; // rax

  v2 = (std::_Fac_node *)operator new(0x10uLL);
  if ( v2 )
  {
    *(_QWORD *)v2 = qword_1801D3DA0;
    *((_QWORD *)v2 + 1) = a1;
  }
  qword_1801D3DA0 = v2;
}
