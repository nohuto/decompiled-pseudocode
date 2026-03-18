/*
 * XREFs of ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x18006EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180070B20 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::EffectGroupUpdate(CChannel *this, unsigned int a2, double a3, int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  float v9; // xmm1_4
  unsigned int v10; // ebx
  _DWORD v12[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 56LL);
  v8 = a5;
  CChannel::CheckOptionalHandle(this, a5, 186LL);
  v12[0] = 476;
  v9 = a3;
  v12[1] = a2;
  *(float *)&v12[2] = v9;
  v12[3] = a4;
  v12[4] = v8;
  v10 = CChannel::SendCommand(this, v12, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
