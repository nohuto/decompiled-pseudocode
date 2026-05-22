/*
 * XREFs of _wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c____::_1_::catch$1 @ 0x1801883B6
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180189274 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
