/*
 * XREFs of ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x1801F19E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800CA740 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnPromotedToPrimary(MPCGamepadProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  float *v4; // rax
  float v5[4]; // [rsp+20h] [rbp-D28h] BYREF
  _OWORD v6[4]; // [rsp+30h] [rbp-D18h] BYREF
  _BYTE v7[16]; // [rsp+70h] [rbp-CD8h] BYREF
  __int128 v8; // [rsp+80h] [rbp-CC8h]
  __int128 v9; // [rsp+90h] [rbp-CB8h]
  __int128 v10; // [rsp+A0h] [rbp-CA8h]
  __int128 v11; // [rsp+B0h] [rbp-C98h]

  Instance = MPCHolographicInputManager::GetInstance();
  *((_QWORD *)this + 523) = *((_QWORD *)Instance + 30);
  *((_DWORD *)this + 1048) = *((_DWORD *)Instance + 62);
  v3 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v7, v3, 0xCD0uLL);
  v6[0] = v8;
  v6[1] = v9;
  v6[2] = v10;
  v6[3] = v11;
  v4 = Windows::Foundation::Numerics::transform(v5, (float *)this + 1046, (float *)v6);
  *(_QWORD *)((char *)this + 4196) = *(_QWORD *)v4;
  *(float *)&v4 = v4[2];
  *((_OWORD *)this + 264) = 0LL;
  *((_DWORD *)this + 1051) = (_DWORD)v4;
}
