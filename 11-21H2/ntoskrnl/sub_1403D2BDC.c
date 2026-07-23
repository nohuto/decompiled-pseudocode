/*
 * XREFs of sub_1403D2BDC @ 0x1403D2BDC
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x14084E340 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D2BDC(int a1, int a2)
{
  return a1 + 72 * a2 + 108 - (((_BYTE)a1 + 72 * (_BYTE)a2 + 108 - 1) & 7u) + 111;
}
