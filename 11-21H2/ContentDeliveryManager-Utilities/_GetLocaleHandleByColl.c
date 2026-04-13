/*
 * XREFs of _GetLocaleHandleByColl @ 0x18000D228
 * Callers:
 *     _Strcoll @ 0x180021390 (_Strcoll.c)
 *     _Wcscoll @ 0x1800214E8 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800215EC (_Wcsxfrm.c)
 *     _Strxfrm @ 0x18002171C (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
