/*
 * XREFs of PnpQueryDeviceRelations @ 0x140794F20
 * Callers:
 *     PipEnumerateDevice @ 0x140794D7C (PipEnumerateDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DAE9C (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryDeviceRelations @ 0x14084DDFC (PiQueryDeviceRelations.c)
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x14086EB74 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140322798 (PnpSendIrp.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return PnpSendIrp(a1, (__int64)v10, v8, a3, a4);
}
