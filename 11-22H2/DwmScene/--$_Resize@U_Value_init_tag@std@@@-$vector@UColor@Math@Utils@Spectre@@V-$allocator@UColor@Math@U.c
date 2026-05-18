/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F1B0
 * Callers:
 *     ?ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x18009023C (-ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char.c)
 *     ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460 (-ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV-$basic_string@DU-$char_t.c)
 *     ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664 (-ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUColor@Math@Utils@Spectre@@PEAU1234@_KAEAV?$allocator@UColor@Math@Utils@Spectre@@@0@@Z @ 0x18008F49C (--$_Uninitialized_value_construct_n@V-$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUCo.c)
 */

void __fastcall std::vector<Spectre::Utils::Math::Color>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8

  v3 = (__int64)(a1[1] - *a1) >> 4;
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      if ( a2 <= (__int64)(a1[2] - *a1) >> 4 )
      {
        v4 = std::_Uninitialized_value_construct_n<std::allocator<Spectre::Utils::Math::Color>>(a1[1], a2 - v3);
        *(_QWORD *)(v5 + 8) = v4;
      }
      else
      {
        std::vector<Spectre::Utils::Math::Color>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    a1[1] = *a1 + 16 * a2;
  }
}
