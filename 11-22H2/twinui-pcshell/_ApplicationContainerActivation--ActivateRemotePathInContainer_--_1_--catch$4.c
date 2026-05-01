/*
 * XREFs of _ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::catch$4 @ 0x18063052D
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall ApplicationContainerActivation::ActivateRemotePathInContainer_::_1_::catch_4(wil *a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
