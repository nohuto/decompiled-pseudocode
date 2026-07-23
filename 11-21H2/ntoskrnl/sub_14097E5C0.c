/*
 * XREFs of sub_14097E5C0 @ 0x14097E5C0
 * Callers:
 *     <none>
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     sub_1405573A8 @ 0x1405573A8 (sub_1405573A8.c)
 */

void __fastcall sub_14097E5C0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_1405573A8(48);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 12) = -1073740023;
    *(_DWORD *)(v2 + 16) = *(_DWORD *)a1;
    *(_QWORD *)(v2 + 32) = *(_QWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(v2 + 2) = 4;
    *(_DWORD *)(v2 + 40) = v3;
    IoWriteErrorLogEntry((PVOID)v2);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
}
