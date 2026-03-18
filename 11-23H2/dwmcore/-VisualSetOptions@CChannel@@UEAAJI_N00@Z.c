/*
 * XREFs of ?VisualSetOptions@CChannel@@UEAAJI_N00@Z @ 0x18002B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOptions(CChannel *this, unsigned int a2, char a3, unsigned __int8 a4, bool a5)
{
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]
  __int16 v13; // [rsp+29h] [rbp-1Fh]
  bool v14; // [rsp+2Bh] [rbp-1Dh]
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v15, this);
  CChannel::CheckHandle(this, a2, 196LL);
  v11[0] = 409;
  v14 = a5;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  v9 = CChannel::SendCommand(this, v11, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v15);
  return v9;
}
