/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122454
 * Callers:
 *     ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E6C (--1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180186ADC (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Compositio.c)
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x18018767C (-_Change_array@-$vector@V-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@.c)
 *     ??1CompObjectDiagnosticsPrincipal@@EEAA@XZ @ 0x18019C7F0 (--1CompObjectDiagnosticsPrincipal@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v3; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
