/*
 * XREFs of ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800B88A0
 * Callers:
 *     ?UpdateInputContext@SpatialRimDeviceCollection@@UEAAJAEAUMPCMatrix4x4@@_J1@Z @ 0x1800DC8E0 (-UpdateInputContext@SpatialRimDeviceCollection@@UEAAJAEAUMPCMatrix4x4@@_J1@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800B8E9C (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800B95F0 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800B9698 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCHolographicInputManager::UpdateInputContext(
        MPCHolographicInputManager *this,
        const struct MPCMatrix4x4 *a2,
        __int64 a3)
{
  __int128 v4; // xmm1
  const struct Windows::Foundation::Numerics::float4x4 *v5; // rdx
  Windows::Foundation::Numerics *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r10
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_OWORD *)this + 1) = *(_OWORD *)a2;
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 2);
  v4 = *((_OWORD *)a2 + 3);
  v5 = (MPCHolographicInputManager *)((char *)this + 80);
  v6 = (MPCHolographicInputManager *)((char *)this + 16);
  *((_OWORD *)v6 + 3) = v4;
  if ( !Windows::Foundation::Numerics::invert(v6, v5, v6) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1EF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v8);
  *(_QWORD *)(v9 + 8) = v8;
  *(_QWORD *)v9 = a3;
  *(_QWORD *)(v9 + 144) = 0LL;
  *(_DWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 156) = 0LL;
  *(_DWORD *)(v9 + 164) = -1082130432;
  v10 = Windows::Foundation::Numerics::transform(v16, v9 + 144, v7);
  *(_QWORD *)(v11 + 168) = *(_QWORD *)v10;
  *(_DWORD *)(v11 + 176) = *(_DWORD *)(v10 + 8);
  v14 = Windows::Foundation::Numerics::transform_normal(v16, v13, v12, v13);
  *(_QWORD *)(v15 + 180) = *(_QWORD *)v14;
  *(_DWORD *)(v15 + 188) = *(_DWORD *)(v14 + 8);
}
