/*
 * XREFs of __chkstk @ 0x14042A4D0
 * Callers:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_14037F4B4 @ 0x14037F4B4 (sub_14037F4B4.c)
 *     sub_14037F958 @ 0x14037F958 (sub_14037F958.c)
 *     sub_140381960 @ 0x140381960 (sub_140381960.c)
 *     sub_1403819D4 @ 0x1403819D4 (sub_1403819D4.c)
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 *     sub_1403903B8 @ 0x1403903B8 (sub_1403903B8.c)
 *     sub_14039042C @ 0x14039042C (sub_14039042C.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     sub_1403E9E64 @ 0x1403E9E64 (sub_1403E9E64.c)
 *     sub_14041A410 @ 0x14041A410 (sub_14041A410.c)
 *     sub_1404608E8 @ 0x1404608E8 (sub_1404608E8.c)
 *     sub_140461038 @ 0x140461038 (sub_140461038.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     sub_14050F0A0 @ 0x14050F0A0 (sub_14050F0A0.c)
 *     sub_140526870 @ 0x140526870 (sub_140526870.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1405F5F44 @ 0x1405F5F44 (sub_1405F5F44.c)
 *     sub_1405F6054 @ 0x1405F6054 (sub_1405F6054.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 *     sub_14062CE84 @ 0x14062CE84 (sub_14062CE84.c)
 *     sub_1406375D0 @ 0x1406375D0 (sub_1406375D0.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1409D48D8 @ 0x1409D48D8 (sub_1409D48D8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _chkstk()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
  v2 = &v3;
  LOWORD(v2) = (unsigned __int16)&v3 & 0xF000;
  while ( v1 < v2 )
    v2 -= 4096;
  return result;
}
