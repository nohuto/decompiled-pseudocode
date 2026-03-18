/*
 * XREFs of ?VisualSetResampleMode@CChannel@@UEAAJIW4Enum@CompositionResampleMode@@@Z @ 0x1800FA2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetResampleMode(struct CChannel *a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, a1);
  CChannel::CheckHandle((__int64)a1, a2, 196);
  v8[0] = 394;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(a1, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
