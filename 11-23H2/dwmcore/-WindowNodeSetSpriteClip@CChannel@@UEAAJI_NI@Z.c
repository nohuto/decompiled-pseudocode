/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x18002BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(
        CChannel *this,
        unsigned __int32 a2,
        __int8 a3,
        unsigned __int32 a4)
{
  unsigned int v8; // ebx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle(this, a2, 204LL);
  if ( a4 )
    CChannel::CheckHandle(this, a4, 67LL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i8[8] = a3;
  si128.m128i_i32[3] = a4;
  v8 = CChannel::SendCommand(this, &si128, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
