/*
 * XREFs of sub_1403A2E60 @ 0x1403A2E60
 * Callers:
 *     sub_1403A2630 @ 0x1403A2630 (sub_1403A2630.c)
 *     sub_1403A2670 @ 0x1403A2670 (sub_1403A2670.c)
 *     sub_1403A2A10 @ 0x1403A2A10 (sub_1403A2A10.c)
 *     sub_1403A2A38 @ 0x1403A2A38 (sub_1403A2A38.c)
 *     sub_1403A2AC0 @ 0x1403A2AC0 (sub_1403A2AC0.c)
 *     sub_1403A2C48 @ 0x1403A2C48 (sub_1403A2C48.c)
 *     sub_1403A2DF0 @ 0x1403A2DF0 (sub_1403A2DF0.c)
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 *     sub_1403B7EC0 @ 0x1403B7EC0 (sub_1403B7EC0.c)
 *     sub_1403B7FE0 @ 0x1403B7FE0 (sub_1403B7FE0.c)
 *     sub_1403CBEE0 @ 0x1403CBEE0 (sub_1403CBEE0.c)
 *     sub_1403CC080 @ 0x1403CC080 (sub_1403CC080.c)
 *     sub_1403CC230 @ 0x1403CC230 (sub_1403CC230.c)
 *     sub_1403CFB60 @ 0x1403CFB60 (sub_1403CFB60.c)
 *     sub_1403D05B0 @ 0x1403D05B0 (sub_1403D05B0.c)
 *     sub_1403D8160 @ 0x1403D8160 (sub_1403D8160.c)
 *     sub_1403D90D0 @ 0x1403D90D0 (sub_1403D90D0.c)
 *     sub_1405356F0 @ 0x1405356F0 (sub_1405356F0.c)
 *     sub_1405357B0 @ 0x1405357B0 (sub_1405357B0.c)
 *     sub_140535A60 @ 0x140535A60 (sub_140535A60.c)
 *     sub_140535B30 @ 0x140535B30 (sub_140535B30.c)
 *     sub_140535BD0 @ 0x140535BD0 (sub_140535BD0.c)
 *     sub_140535C50 @ 0x140535C50 (sub_140535C50.c)
 *     sub_140535D30 @ 0x140535D30 (sub_140535D30.c)
 *     sub_140535E70 @ 0x140535E70 (sub_140535E70.c)
 *     sub_140535FD0 @ 0x140535FD0 (sub_140535FD0.c)
 *     sub_140536000 @ 0x140536000 (sub_140536000.c)
 *     sub_140536510 @ 0x140536510 (sub_140536510.c)
 *     sub_140536590 @ 0x140536590 (sub_140536590.c)
 *     sub_1405366C0 @ 0x1405366C0 (sub_1405366C0.c)
 *     sub_140536700 @ 0x140536700 (sub_140536700.c)
 *     sub_140536750 @ 0x140536750 (sub_140536750.c)
 *     sub_140536790 @ 0x140536790 (sub_140536790.c)
 *     sub_1405367E0 @ 0x1405367E0 (sub_1405367E0.c)
 *     sub_140536820 @ 0x140536820 (sub_140536820.c)
 *     sub_140536860 @ 0x140536860 (sub_140536860.c)
 *     sub_140536960 @ 0x140536960 (sub_140536960.c)
 *     sub_1405369D0 @ 0x1405369D0 (sub_1405369D0.c)
 *     sub_1405369F0 @ 0x1405369F0 (sub_1405369F0.c)
 *     sub_140536AA0 @ 0x140536AA0 (sub_140536AA0.c)
 *     sub_140536BA0 @ 0x140536BA0 (sub_140536BA0.c)
 *     sub_140536CB0 @ 0x140536CB0 (sub_140536CB0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1403A2E60(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  result = *(_WORD **)(a1 + 88);
  if ( v2 )
  {
    if ( v2 == 1 )
      *result = a2;
    else
      *(_DWORD *)result = a2;
  }
  else
  {
    *(_BYTE *)result = a2;
  }
  return result;
}
