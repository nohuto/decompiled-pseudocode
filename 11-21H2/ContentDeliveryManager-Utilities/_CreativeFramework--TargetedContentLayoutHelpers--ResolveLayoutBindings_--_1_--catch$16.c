/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$16 @ 0x1800F6D21
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044374 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E3A80 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch_16(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  int v4; // eax

  v4 = wil::ResultFromCaughtException(a1, a2, a3);
  a2[16] = v4;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)(a2 + 128),
    v4);
  return 0LL;
}
