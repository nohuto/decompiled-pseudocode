/*
 * XREFs of ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801C8E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1F48 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800B0B2C (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

void __fastcall MPCMouseProcessor::OnPromotedToPrimary(MPCMouseProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  float *v4; // rax
  float v5; // [rsp+20h] [rbp-E0h] BYREF
  int v6; // [rsp+28h] [rbp-D8h]
  _OWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v9; // [rsp+80h] [rbp-80h]
  __int128 v10; // [rsp+90h] [rbp-70h]
  __int128 v11; // [rsp+A0h] [rbp-60h]
  __int128 v12; // [rsp+B0h] [rbp-50h]

  Instance = MPCHolographicInputManager::GetInstance();
  *((_QWORD *)this + 661) = *((_QWORD *)Instance + 30);
  *((_DWORD *)this + 1324) = *((_DWORD *)Instance + 62);
  v3 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v8, v3, 0xCD0uLL);
  v7[0] = v9;
  v7[1] = v10;
  v7[2] = v11;
  v7[3] = v12;
  v4 = Windows::Foundation::Numerics::transform(&v5, (float *)this + 1322, (float *)v7);
  *(_QWORD *)((char *)this + 5300) = *(_QWORD *)v4;
  *(float *)&v4 = v4[2];
  v6 = 0;
  *((_DWORD *)this + 1327) = (_DWORD)v4;
  LODWORD(v4) = v6;
  *((_QWORD *)this + 664) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1330) = (_DWORD)v4;
  RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 472));
  *((_DWORD *)this + 1339) = 1;
}
