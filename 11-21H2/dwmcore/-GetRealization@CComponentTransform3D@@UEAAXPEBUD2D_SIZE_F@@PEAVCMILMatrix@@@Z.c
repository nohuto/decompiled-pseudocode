/*
 * XREFs of ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800D27C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18020B538 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180260E04 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x180260E94 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm5_4
  float v6; // xmm4_4
  __int128 v7; // xmm1
  char v8; // si
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v17; // xmm1_4
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // xmm0_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  __int64 v23; // r8
  __int64 v24; // r9
  float v25; // [rsp+28h] [rbp-19h] BYREF
  int v26; // [rsp+2Ch] [rbp-15h]
  int v27; // [rsp+30h] [rbp-11h]
  int v28; // [rsp+34h] [rbp-Dh]
  _BYTE v29[64]; // [rsp+38h] [rbp-9h] BYREF
  int v30; // [rsp+78h] [rbp+37h]

  if ( *((_BYTE *)this + 300) )
  {
    CComponentTransform3D::GetScaleRotationTranslationRealization(this, a3);
  }
  else
  {
    v5 = 0.0;
    v6 = 0.0;
    if ( a2 )
    {
      v5 = *((float *)this + 40) * a2->width;
      v6 = *((float *)this + 41) * a2->height;
    }
    v7 = *(_OWORD *)((char *)this + 252);
    v8 = 0;
    v9 = *(_OWORD *)((char *)this + 268);
    v10 = *(_OWORD *)((char *)this + 284);
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 236);
    *((_OWORD *)a3 + 1) = v7;
    *((_OWORD *)a3 + 2) = v9;
    *((_OWORD *)a3 + 3) = v10;
    *((_DWORD *)a3 + 16) = 0;
    v11 = *((float *)this + 42);
    if ( v11 != 0.0 || *((float *)this + 43) != 0.0 || *((float *)this + 44) != 0.0 || v5 != 0.0 || v6 != 0.0 )
    {
      CMILMatrix::Translate(
        a3,
        COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 + v5) ^ _xmm),
        COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 + *((float *)this + 43)) ^ _xmm),
        COERCE_FLOAT(*((_DWORD *)this + 44) ^ _xmm));
      v8 = 1;
    }
    v12 = *((float *)this + 46);
    if ( COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(LODWORD(v12) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.0000011920929 )
    {
      CMILMatrix::Translate(a3, *((float *)this + 45), v12, *((float *)this + 47));
    }
    v13 = *((float *)this + 51);
    if ( v13 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
      CMILMatrix::Scale(a3, v13, *((float *)this + 52), *((float *)this + 53));
    v14 = *((float *)this + 58);
    if ( v14 != 0.0 )
    {
      v16 = *((float *)this + 48);
      v17 = *((_DWORD *)this + 49);
      v30 = 0;
      v25 = v16;
      v27 = *((_DWORD *)this + 50);
      v26 = v17;
      CMILMatrix::SetRotation((CMILMatrix *)v29, (const struct Windows::Foundation::Numerics::float3 *)&v25, v14);
      CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v29, v18, v19);
    }
    v15 = *((float *)this + 54);
    if ( v15 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
    {
      v20 = *((_DWORD *)this + 55);
      v30 = 0;
      v26 = v20;
      v21 = *((_DWORD *)this + 57);
      v25 = v15;
      v22 = *((_DWORD *)this + 56);
      v28 = v21;
      v27 = v22;
      CMILMatrix::SetRotation((CMILMatrix *)v29, (const struct Windows::Foundation::Numerics::quaternion *)&v25);
      CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v29, v23, v24);
    }
    if ( v8 )
      CMILMatrix::Translate(a3, *((float *)this + 42), *((float *)this + 43), *((float *)this + 44));
  }
}
