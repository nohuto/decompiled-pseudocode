/*
 * XREFs of sub_1403A572C @ 0x1403A572C
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140302930 @ 0x140302930 (sub_140302930.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     sub_140391800 @ 0x140391800 (sub_140391800.c)
 *     sub_1403B54DC @ 0x1403B54DC (sub_1403B54DC.c)
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 *     sub_14050C5B0 @ 0x14050C5B0 (sub_14050C5B0.c)
 *     sub_14050C764 @ 0x14050C764 (sub_14050C764.c)
 *     sub_14050D380 @ 0x14050D380 (sub_14050D380.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403A572C(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( a1 && a2 && a2 != a3 )
    return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  else
    return a1;
}
