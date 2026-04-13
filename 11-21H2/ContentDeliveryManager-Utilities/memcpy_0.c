/*
 * XREFs of memcpy_0 @ 0x180022314
 * Callers:
 *     ?do_narrow@?$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z @ 0x18000A480 (-do_narrow@-$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z.c)
 *     ?do_widen@?$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z @ 0x18000AFE0 (-do_widen@-$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z.c)
 *     _FXp_movx @ 0x18000BF30 (_FXp_movx.c)
 *     _FXp_mulx @ 0x18000C158 (_FXp_mulx.c)
 *     _Xp_movx @ 0x18000CC54 (_Xp_movx.c)
 *     _Xp_mulx @ 0x18000CE84 (_Xp_mulx.c)
 *     _LXp_mulx @ 0x18000D930 (_LXp_mulx.c)
 *     ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000E238 (--$_Getvals@_W@-$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z.c)
 *     ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180019210 (-do_out@-$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001B540 (-do_unshift@-$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     _Wcsxfrm @ 0x1800215EC (_Wcsxfrm.c)
 *     _Strxfrm @ 0x18002171C (_Strxfrm.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180031028 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180047B44 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180047FA4 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180048450 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800485B8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800486C4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180066C28 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180068B34 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180068CAC (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180069780 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069BC8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x18006BC10 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     ?xsgetn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEA_W_J@Z @ 0x18006C580 (-xsgetn@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@MEAA_JPEA_W_J@Z.c)
 *     ?xsputn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEB_W_J@Z @ 0x18006C670 (-xsputn@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@MEAA_JPEB_W_J@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x1800767FC (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18007B7FC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18007B900 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18007BA24 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18007BFA0 (-do_out@-$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18007C200 (-do_unshift@-$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x1800A3B28 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800AEF3C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800AF020 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x1800AF4AC (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800AF814 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?SHRegAllocString@@YAJPEAUHKEY__@@PEB_W1PEAPEA_W@Z @ 0x1800D18DC (-SHRegAllocString@@YAJPEAUHKEY__@@PEB_W1PEAPEA_W@Z.c)
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800E81F8 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800E84F0 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
