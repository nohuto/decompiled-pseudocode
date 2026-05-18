/*
 * XREFs of ?SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D994
 * Callers:
 *     ?SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x1800129D0 (-SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x180015090 (-SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?SetLocalToParent@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D40C (-SetLocalToParent@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z.c)
 * Callees:
 *     Spectre::Engine::MatrixDecompose @ 0x18003CBE0 (Spectre--Engine--MatrixDecompose.c)
 *     ?SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z @ 0x18003D900 (-SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

char __fastcall Spectre::Engine::SceneNode::SetTransformMatrix(
        Spectre::Engine::SceneNode *this,
        const struct Spectre::Utils::Math::Matrix *a2)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h] BYREF

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  v10 = 0LL;
  v11 = 0;
  v8 = 0LL;
  v9 = 0;
  v14 = _xmm;
  if ( !Spectre::Engine::MatrixDecompose(
          (__int32 *)a2,
          (unsigned int *)&v8,
          (struct Spectre::Utils::Math::Quaternion *)&v14) )
    return 0;
  v12 = v8;
  v13 = v9;
  v9 = v11;
  v8 = v10;
  Spectre::Engine::SceneNode::SetTransform(this, (__int64)&v8, &v14, (__int64)&v12);
  v4 = *((_OWORD *)a2 + 2);
  v5 = *((_OWORD *)a2 + 3);
  v6 = *(_OWORD *)a2;
  *((_OWORD *)this + 15) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 14) = v6;
  *((_OWORD *)this + 16) = v4;
  *((_OWORD *)this + 17) = v5;
  *((_QWORD *)this + 44) = *((_QWORD *)this + 26);
  return 1;
}
