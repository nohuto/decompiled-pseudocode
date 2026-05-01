/*
 * XREFs of _wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18____::_1_::catch$1 @ 0x180220D16
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
