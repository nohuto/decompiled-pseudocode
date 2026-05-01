/*
 * XREFs of GetLastError_0 @ 0x180189308
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetLastError_0()
{
  return GetLastError();
}
