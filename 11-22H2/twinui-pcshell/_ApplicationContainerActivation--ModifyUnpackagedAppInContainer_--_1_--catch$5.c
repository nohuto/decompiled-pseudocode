/*
 * XREFs of _ApplicationContainerActivation::ModifyUnpackagedAppInContainer_::_1_::catch$5 @ 0x1806310F9
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall ApplicationContainerActivation::ModifyUnpackagedAppInContainer_::_1_::catch_5(wil *a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
