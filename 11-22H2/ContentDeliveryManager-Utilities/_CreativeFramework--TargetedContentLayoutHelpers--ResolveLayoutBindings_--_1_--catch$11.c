/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$11 @ 0x1800DD13A
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18003EF84 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CC4BC (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch_11(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  int v4; // eax

  v4 = wil::ResultFromCaughtException(a1, a2, a3);
  a2[8] = v4;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)(a2 + 116),
    v4);
  return 0LL;
}
