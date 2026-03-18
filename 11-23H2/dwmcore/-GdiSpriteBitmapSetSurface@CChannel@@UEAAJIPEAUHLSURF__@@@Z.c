/*
 * XREFs of ?GdiSpriteBitmapSetSurface@CChannel@@UEAAJIPEAUHLSURF__@@@Z @ 0x1800F2590
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapSetSurface(CChannel *this, unsigned int a2, HLSURF a3)
{
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  HLSURF v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 65);
  v8[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8[1] = a2;
  v9 = a3;
  v6 = CChannel::SendCommand(this, v8, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v6;
}
