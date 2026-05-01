/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x180737688
 * Callers:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1803E2B74 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x18064B2FC (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 *     ??$use_facet@V?$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1806E10D0 (--$use_facet@V-$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  std::_Fac_node **v2; // rax
  std::_Fac_node *v3; // rdx

  v2 = (std::_Fac_node **)operator new(0x10uLL);
  v3 = qword_18098D708;
  qword_18098D708 = (std::_Fac_node *)v2;
  *v2 = v3;
  v2[1] = a1;
}
