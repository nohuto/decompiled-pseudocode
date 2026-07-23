/*
 * XREFs of PnpStartDevice @ 0x140321CD8
 * Callers:
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x140321AA4 (PoFxPrepareDevice.c)
 *     PnpSendIrp @ 0x140322A28 (PnpSendIrp.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall PnpStartDevice(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // r8d
  _QWORD v9[9]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a1;
  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  PoFxPrepareDevice(v6, 1);
  *(_DWORD *)(v6 + 156) = 1;
  memset(v9, 0, sizeof(v9));
  v9[1] = *(_QWORD *)(v6 + 416);
  v9[2] = *(_QWORD *)(v6 + 424);
  LOWORD(v9[0]) = 27;
  return PnpSendIrp(v5, (unsigned int)v9, v7, a2, a3);
}
