/*
 * XREFs of ?UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DFE8
 * Callers:
 *     ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8 (-UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ.c)
 * Callees:
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494 (-SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z.c)
 */

void __fastcall Spectre::Engine::Camera::UpdateViewProjectionMatrixStage(Spectre::Engine::Camera *this)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r10
  __int128 v13; // [rsp+20h] [rbp-69h] BYREF
  __int128 v14; // [rsp+30h] [rbp-59h]
  __int128 v15; // [rsp+40h] [rbp-49h]
  __int128 v16; // [rsp+50h] [rbp-39h]
  _OWORD v17[4]; // [rsp+60h] [rbp-29h] BYREF
  char v18[64]; // [rsp+A0h] [rbp+17h] BYREF

  v1 = *(_OWORD *)((char *)this + 628);
  v13 = *(_OWORD *)((char *)this + 612);
  v2 = *(_OWORD *)((char *)this + 644);
  v14 = v1;
  v3 = *(_OWORD *)((char *)this + 660);
  v15 = v2;
  v4 = *(_OWORD *)((char *)this + 932);
  v16 = v3;
  v5 = *(_OWORD *)((char *)this + 948);
  v17[0] = v4;
  v6 = *(_OWORD *)((char *)this + 964);
  v17[1] = v5;
  v7 = *(_OWORD *)((char *)this + 980);
  v17[2] = v6;
  v17[3] = v7;
  v8 = Spectre::Utils::Math::operator*((__int64)v18, &v13, v17);
  v9 = v8[1];
  v13 = *v8;
  v10 = v8[2];
  v14 = v9;
  v11 = v8[3];
  v15 = v10;
  v16 = v11;
  Spectre::Engine::Camera::SetTransformMatrix(v12, 0, 2, &v13);
}
