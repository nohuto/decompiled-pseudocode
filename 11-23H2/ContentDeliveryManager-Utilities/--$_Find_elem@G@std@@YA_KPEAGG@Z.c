/*
 * XREFs of ??$_Find_elem@G@std@@YA_KPEAGG@Z @ 0x18004F68C
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800609F8 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180060FC0 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x1800615DC (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B7974 (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     ?_Getffldx@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B7F3C (-_Getffldx@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x1800B8558 (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Find_elem<unsigned short>(_WORD *a1, __int16 a2)
{
  __int16 v2; // r8
  _WORD *v3; // rax

  v2 = *a1;
  v3 = a1;
  while ( v2 && v2 != a2 )
    v2 = *++v3;
  return v3 - a1;
}
