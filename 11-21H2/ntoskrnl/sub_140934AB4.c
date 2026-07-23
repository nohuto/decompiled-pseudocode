/*
 * XREFs of sub_140934AB4 @ 0x140934AB4
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 * Callees:
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     sub_1405573A8 @ 0x1405573A8 (sub_1405573A8.c)
 */

void __fastcall sub_140934AB4(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  PVOID v6; // r11

  v5 = sub_1405573A8(176);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 2) = 0x10000;
    *(_DWORD *)(v5 + 12) = -1073740764;
    *(_WORD *)(v5 + 6) = 48;
    *(_DWORD *)(v5 + 20) = a3;
    sub_1402D88AC((_WORD *)(v5 + 48), 64LL, *(_QWORD *)(a1 + 8), 0x3FuLL);
    IoWriteErrorLogEntry(v6);
  }
}
