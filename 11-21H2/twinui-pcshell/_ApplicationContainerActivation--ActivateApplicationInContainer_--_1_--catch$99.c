/*
 * XREFs of _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::catch$99 @ 0x180572430
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::catch_99(wil *a1, __int64 a2)
{
  *(_DWORD *)(a2 + 76) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
