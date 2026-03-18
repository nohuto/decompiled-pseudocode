/*
 * XREFs of ?VisualMoveChild@CChannel@@UEAAJIII@Z @ 0x180070290
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckParent@CChannel@@AEAAXII@Z @ 0x180073404 (-CheckParent@CChannel@@AEAAXII@Z.c)
 *     ?RemoveChild@CChannel@@AEAAXII@Z @ 0x180073CFC (-RemoveChild@CChannel@@AEAAXII@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualMoveChild(CChannel *this, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF
  char *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 195LL);
  CChannel::CheckHandle(this, a3, 195LL);
  CChannel::RemoveChild(this, v8, a3);
  CChannel::CheckParent(this, a2, a3);
  v11[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v11[1] = a2;
  v11[2] = a3;
  v11[3] = a4;
  v9 = CChannel::SendCommand(this, v11, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v9;
}
