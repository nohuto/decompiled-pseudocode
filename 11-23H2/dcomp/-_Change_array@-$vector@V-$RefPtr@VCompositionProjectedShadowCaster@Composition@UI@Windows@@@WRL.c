/*
 * XREFs of ?_Change_array@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x18000E5A8
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000E4A8 (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@W.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster>>::_Change_array(
        Microsoft::WRL2::NestableRuntimeClass ***a1,
        Microsoft::WRL2::NestableRuntimeClass **a2,
        __int64 a3,
        __int64 a4)
{
  Microsoft::WRL2::NestableRuntimeClass **v4; // rdi
  Microsoft::WRL2::NestableRuntimeClass **result; // rax
  Microsoft::WRL2::NestableRuntimeClass **v10; // rbp

  v4 = *a1;
  if ( *a1 )
  {
    v10 = a1[1];
    while ( v4 != v10 )
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v4++);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = &a2[a3];
  result = &a2[a4];
  a1[2] = result;
  return result;
}
