/*
 * XREFs of sub_140A5943C @ 0x140A5943C
 * Callers:
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_14025E6B4 @ 0x14025E6B4 (sub_14025E6B4.c)
 *     sub_14025E724 @ 0x14025E724 (sub_14025E724.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_1403C1C58 @ 0x1403C1C58 (sub_1403C1C58.c)
 *     KeInitializeThreadedDpc @ 0x1403C1DA0 (KeInitializeThreadedDpc.c)
 *     sub_140A59518 @ 0x140A59518 (sub_140A59518.c)
 */

__int64 __fastcall sub_140A5943C(__int64 a1)
{
  int v1; // esi
  int v3; // ecx
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+48h] [rbp-10h]

  v1 = (int)dword_140D0502C;
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  v7 = 0;
  if ( dword_140D0516C )
  {
    sub_14025E6B4(a1 + 32320);
    sub_14025E724((_QWORD *)(a1 + 13168));
    *(_QWORD *)(a1 + 13184) = 0LL;
    *(_DWORD *)(a1 + 13192) = 0;
  }
  KeInitializeThreadedDpc((PRKDPC)(a1 + 34264), (PKDEFERRED_ROUTINE)sub_1402220E0, (PVOID)*(unsigned int *)(a1 + 36));
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34265) = 2;
  if ( !*(_QWORD *)(a1 + 34320) )
    *(_WORD *)(a1 + 34266) = v3 + 2048;
  KeInitializeTimerEx((PKTIMER)(a1 + 34328), NotificationTimer);
  sub_1403C1C58((__int64)v5, 0, v1);
  return sub_140A59518(a1, v5);
}
