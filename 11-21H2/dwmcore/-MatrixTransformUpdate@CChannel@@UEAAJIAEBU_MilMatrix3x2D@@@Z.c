/*
 * XREFs of ?MatrixTransformUpdate@CChannel@@UEAAJIAEBU_MilMatrix3x2D@@@Z @ 0x180073F80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::MatrixTransformUpdate(CChannel *this, unsigned int a2, const struct _MilMatrix3x2D *a3)
{
  __int64 v6; // rax
  float *v7; // rcx
  double v8; // xmm0_8
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+24h] [rbp-24h] BYREF
  __int64 v13; // [rsp+34h] [rbp-14h]
  int v14; // [rsp+3Ch] [rbp-Ch]
  char *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 107);
  v6 = 0LL;
  v11 = 486;
  v13 = 0LL;
  v12 = 0LL;
  LODWORD(v12) = a2;
  v7 = (float *)&v12 + 1;
  v14 = 0;
  do
  {
    v8 = *(&a3->S_11 + v6++);
    *v7++ = v8;
  }
  while ( v6 < 6 );
  v9 = CChannel::SendCommand(this, &v11, 0x20u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v9;
}
