/*
 * XREFs of _GetLocaleHandleByColl @ 0x18000D91C
 * Callers:
 *     _Strcoll @ 0x180021AAC (_Strcoll.c)
 *     _Wcscoll @ 0x180021C04 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x180021D08 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E38 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
