/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x18006F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070B20 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(
        CChannel *this,
        unsigned __int32 a2,
        __int8 a3,
        unsigned __int32 a4)
{
  unsigned int v8; // ebx
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 204LL);
  CChannel::CheckOptionalHandle(this, a4, 65LL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i8[8] = a3;
  si128.m128i_i32[3] = a4;
  v8 = CChannel::SendCommand(this, &si128, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
