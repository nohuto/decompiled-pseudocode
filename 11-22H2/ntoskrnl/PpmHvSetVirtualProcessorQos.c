/*
 * XREFs of PpmHvSetVirtualProcessorQos @ 0x1405A0144
 * Callers:
 *     PoSetProcessorQoS @ 0x140462800 (PoSetProcessorQoS.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140548ED0 (HvlpSetRegister64.c)
 *     PpmEventVpQosChange @ 0x14059C4E8 (PpmEventVpQosChange.c)
 */

BOOLEAN __fastcall PpmHvSetVirtualProcessorQos(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 34112);
  v3 = *(_QWORD *)(a1 + 35000);
  *(_DWORD *)(a1 + 34116) = v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = v2;
    *(_DWORD *)(v3 + 12) = 1;
    HvlpSetRegister64(589851, 0xFFFFFFFEuLL);
  }
  return PpmEventVpQosChange(a1);
}
