/*
 * XREFs of sub_14051E038 @ 0x14051E038
 * Callers:
 *     sub_140236500 @ 0x140236500 (sub_140236500.c)
 *     sub_140251DC0 @ 0x140251DC0 (sub_140251DC0.c)
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252050 @ 0x140252050 (sub_140252050.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_1403915EC @ 0x1403915EC (sub_1403915EC.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_140397D10 @ 0x140397D10 (sub_140397D10.c)
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     sub_1403AF2D8 @ 0x1403AF2D8 (sub_1403AF2D8.c)
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 *     sub_1403B6180 @ 0x1403B6180 (sub_1403B6180.c)
 *     sub_1403B85D0 @ 0x1403B85D0 (sub_1403B85D0.c)
 *     sub_1403B8644 @ 0x1403B8644 (sub_1403B8644.c)
 *     sub_1403B8DA0 @ 0x1403B8DA0 (sub_1403B8DA0.c)
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_1403D59D4 @ 0x1403D59D4 (sub_1403D59D4.c)
 *     sub_1403D5B40 @ 0x1403D5B40 (sub_1403D5B40.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     sub_1405080D4 @ 0x1405080D4 (sub_1405080D4.c)
 *     sub_140508270 @ 0x140508270 (sub_140508270.c)
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 *     sub_14050850C @ 0x14050850C (sub_14050850C.c)
 *     sub_140508F00 @ 0x140508F00 (sub_140508F00.c)
 *     sub_1405091D0 @ 0x1405091D0 (sub_1405091D0.c)
 *     sub_14051DB60 @ 0x14051DB60 (sub_14051DB60.c)
 *     sub_140523D5C @ 0x140523D5C (sub_140523D5C.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 *     sub_140A62970 @ 0x140A62970 (sub_140A62970.c)
 *     sub_140A62B5C @ 0x140A62B5C (sub_140A62B5C.c)
 *     sub_140A62EE4 @ 0x140A62EE4 (sub_140A62EE4.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 *     sub_140AF866C @ 0x140AF866C (sub_140AF866C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051E038(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  dword_140C4AD78 = a5;
  qword_140C4AD60 = a1;
  dword_140C4ADB0 = a2;
  dword_140C4AD40 = a3;
  qword_140C4AD70 = a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 300) = a2;
    *(_DWORD *)(a1 + 304) = a3;
    *(_QWORD *)(a1 + 312) = a4;
    *(_DWORD *)(a1 + 320) = a5;
  }
  return result;
}
