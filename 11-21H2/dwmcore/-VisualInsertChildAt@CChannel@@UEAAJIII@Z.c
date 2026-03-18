/*
 * XREFs of ?VisualInsertChildAt@CChannel@@UEAAJIII@Z @ 0x180073150
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckParent@CChannel@@AEAAXII@Z @ 0x180073404 (-CheckParent@CChannel@@AEAAXII@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualInsertChildAt(CChannel *this, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 195LL);
  CChannel::CheckHandle(this, a3, 195LL);
  CChannel::CheckParent(this, a2, a3);
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v10[2] = a3;
  v10[3] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
