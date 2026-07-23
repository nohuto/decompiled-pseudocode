/*
 * XREFs of sub_1402E0AC4 @ 0x1402E0AC4
 * Callers:
 *     sub_1405EC854 @ 0x1405EC854 (sub_1405EC854.c)
 *     sub_1405ECB04 @ 0x1405ECB04 (sub_1405ECB04.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075EF9C @ 0x14075EF9C (sub_14075EF9C.c)
 *     sub_1407648E4 @ 0x1407648E4 (sub_1407648E4.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_14078AF40 @ 0x14078AF40 (sub_14078AF40.c)
 *     sub_14078C7F4 @ 0x14078C7F4 (sub_14078C7F4.c)
 *     sub_14078C9E8 @ 0x14078C9E8 (sub_14078C9E8.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 *     sub_1407D4D5C @ 0x1407D4D5C (sub_1407D4D5C.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_14082E2BC @ 0x14082E2BC (sub_14082E2BC.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_140854E78 @ 0x140854E78 (sub_140854E78.c)
 *     sub_140855034 @ 0x140855034 (sub_140855034.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_1409A00F0 @ 0x1409A00F0 (sub_1409A00F0.c)
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     sub_1409B8A0C @ 0x1409B8A0C (sub_1409B8A0C.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E0AC4(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( !a1 || a2 > 0x7FFFFFFF )
  {
    result = 3221225485LL;
LABEL_11:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  for ( i = a2; i; --i )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = i == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( i )
      *a3 = a2 - i;
    else
      *a3 = 0LL;
  }
  if ( !i )
    goto LABEL_11;
  return result;
}
