/*
 * XREFs of ??0?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180050FD4
 * Callers:
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x18009023C (-ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char.c)
 *     ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664 (-ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ?_Init@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXPEBD_KH@Z @ 0x180051D7C (-_Init@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXPEBD_KH@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::istringstream::istringstream(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8

  *a1 = &std::istringstream::`vbtable';
  std::ios::ios(a1 + 18);
  std::istream::istream(a1, a1 + 2, 0LL, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::istringstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::streambuf::streambuf(a1 + 2);
  a1[2] = &std::stringbuf::`vftable';
  v4 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  std::stringbuf::_Init(a1 + 2, a2, v4, 2LL);
  return a1;
}
