/*
 * XREFs of ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x18000E478
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000E370 (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180006F18 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Wind.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
    (__int64)a3,
    (__int64)a3);
  return a3;
}
