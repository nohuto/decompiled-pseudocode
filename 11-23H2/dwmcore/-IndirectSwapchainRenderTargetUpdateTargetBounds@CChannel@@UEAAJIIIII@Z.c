/*
 * XREFs of ?IndirectSwapchainRenderTargetUpdateTargetBounds@CChannel@@UEAAJIIIII@Z @ 0x1801CF290
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::IndirectSwapchainRenderTargetUpdateTargetBounds(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v13[10]; // [rsp+30h] [rbp-28h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  CChannel::CheckHandle((__int64)this, a2, 86);
  v13[0] = 182;
  v13[4] = a5;
  v13[5] = a6;
  v13[1] = a2;
  v13[2] = a3;
  v13[3] = a4;
  v10 = CChannel::SendCommand(this, v13, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  return v10;
}
