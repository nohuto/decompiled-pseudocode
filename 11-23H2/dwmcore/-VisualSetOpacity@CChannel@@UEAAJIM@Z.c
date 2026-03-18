/*
 * XREFs of ?VisualSetOpacity@CChannel@@UEAAJIM@Z @ 0x1801D0E80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOpacity(CChannel *this, unsigned int a2, float a3)
{
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v8, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  v7[0] = 408;
  *(float *)&v7[2] = a3;
  v7[1] = a2;
  v5 = CChannel::SendCommand(this, v7, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v8);
  return v5;
}
