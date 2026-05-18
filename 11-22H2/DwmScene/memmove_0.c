/*
 * XREFs of memmove_0 @ 0x18000CA85
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$_Copy_memmove@PEAPEAVSpectreWorld@@PEAPEAV1@@std@@YAPEAPEAVSpectreWorld@@PEAPEAV1@00@Z @ 0x180016D8C (--$_Copy_memmove@PEAPEAVSpectreWorld@@PEAPEAV1@@std@@YAPEAPEAVSpectreWorld@@PEAPEAV1@00@Z.c)
 *     ??$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEAW4123@00@Z @ 0x180016DC4 (--$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spe.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x18001CEE0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@U_String_const_ea_18001CEE0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x18001DE9C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 *     ?_Erase_noexcept@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV12@_K_K@Z @ 0x18001E604 (-_Erase_noexcept@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAAEAV12@_K_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z @ 0x18001E904 (--$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001F718 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z @ 0x18001F88C (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_KQEB_W0@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x180030AF4 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@U_String_constructor_con.c)
 *     ??$_Copy_memmove@PEBMPEAM@std@@YAPEAMPEBM0PEAM@Z @ 0x180044CE0 (--$_Copy_memmove@PEBMPEAM@std@@YAPEAMPEBM0PEAM@Z.c)
 *     ??$_Copy_memmove@PEBW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEBW4123@0PEAW4123@@Z @ 0x18004D534 (--$_Copy_memmove@PEBW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spe.c)
 *     ??$_Copy_memmove@PEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@@std@@YAPEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@00@Z @ 0x180070B74 (--$_Copy_memmove@PEAPEAVSceneNode@Engine@Spectre@@PEAPEAV123@@std@@YAPEAPEAVSceneNode@Engine@Spe.c)
 *     ??$_Copy_memmove@PEAUMessageEvent@Engine@Spectre@@PEAU123@@std@@YAPEAUMessageEvent@Engine@Spectre@@PEAU123@00@Z @ 0x180074338 (--$_Copy_memmove@PEAUMessageEvent@Engine@Spectre@@PEAU123@@std@@YAPEAUMessageEvent@Engine@Spectr.c)
 *     ??$_Copy_memmove@PEB_KPEA_K@std@@YAPEA_KPEB_K0PEA_K@Z @ 0x18007C948 (--$_Copy_memmove@PEB_KPEA_K@std@@YAPEA_KPEB_K0PEA_K@Z.c)
 *     ??$_Copy_memmove@PEAMPEAM@std@@YAPEAMPEAM00@Z @ 0x180081528 (--$_Copy_memmove@PEAMPEAM@std@@YAPEAMPEAM00@Z.c)
 *     ??$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@00@Z @ 0x180081560 (--$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValu.c)
 *     ??$_Copy_memmove@PEBTValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEBT1234@0PEAT1234@@Z @ 0x1800840E8 (--$_Copy_memmove@PEBTValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValu.c)
 *     ??$_Copy_memmove@PEAGPEAG@std@@YAPEAGPEAG00@Z @ 0x18008C8A0 (--$_Copy_memmove@PEAGPEAG@std@@YAPEAGPEAG00@Z.c)
 *     ??$_Copy_memmove@PEAEPEAE@std@@YAPEAEPEAE00@Z @ 0x18008F034 (--$_Copy_memmove@PEAEPEAE@std@@YAPEAEPEAE00@Z.c)
 *     ??$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A2C (--$_Copy_backward_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU.c)
 *     ??$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std@@YAPEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@00@Z @ 0x180094A4C (--$_Copy_memmove@PEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@PEAU1234@@std.c)
 *     ??$_Copy_memmove@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KPEAPEA_K00@Z @ 0x1800A05F4 (--$_Copy_memmove@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KPEAPEA_K00@Z.c)
 *     ??$_Copy_memmove@PEAUD3D11_SUBRESOURCE_DATA@@PEAU1@@std@@YAPEAUD3D11_SUBRESOURCE_DATA@@PEAU1@00@Z @ 0x1800CC50C (--$_Copy_memmove@PEAUD3D11_SUBRESOURCE_DATA@@PEAU1@@std@@YAPEAUD3D11_SUBRESOURCE_DATA@@PEAU1@00@.c)
 *     ??$_Copy_memmove@PEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@00@Z @ 0x1800D3834 (--$_Copy_memmove@PEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1@@std@@YAPEAUD3D11_INPUT_ELEMENT_DESC@@PEAU1.c)
 *     ??$_Copy_memmove@PEAW4D3D_FEATURE_LEVEL@@PEAW41@@std@@YAPEAW4D3D_FEATURE_LEVEL@@PEAW41@00@Z @ 0x1800DAB10 (--$_Copy_memmove@PEAW4D3D_FEATURE_LEVEL@@PEAW41@@std@@YAPEAW4D3D_FEATURE_LEVEL@@PEAW41@00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
