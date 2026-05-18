/*
 * XREFs of ?substr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV12@_K0@Z @ 0x18001E7BC
 * Callers:
 *     ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460 (-ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV-$basic_string@DU-$char_t.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBAX_K@Z @ 0x18001DB50 (-_Check_offset@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBAX_K@Z.c)
 */

__int64 __fastcall std::string::substr(__int64 a1, __int64 a2, unsigned __int64 a3, size_t a4)
{
  _QWORD *v7; // rbx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  v7 = (_QWORD *)a1;
  *(_BYTE *)a2 = 0;
  std::_String_val<std::_Simple_types<char>>::_Check_offset(a1, a3);
  if ( v7[2] - a3 < a4 )
    a4 = v7[2] - a3;
  if ( v7[3] >= 0x10uLL )
    v7 = (_QWORD *)*v7;
  std::string::assign((void **)a2, (char *)v7 + a3, a4);
  return a2;
}
