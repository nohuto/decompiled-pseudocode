/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x18018CBA8
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18018DF88 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x18000DB50 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18002089C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     acosf @ 0x180101880 (acosf.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801857E8 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333333@Z @ 0x180188D48 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     TransformPoint @ 0x18018F1A8 (TransformPoint.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180260344 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180260B3C (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x180260CF0 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        CMILMatrix *this,
        __int64 a2,
        CMILMatrix *a3,
        CMILMatrix *a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  float v10; // xmm6_4
  struct CMILMatrix *v11; // rdi
  char v12; // al
  CMILMatrix *v13; // r14
  char v14; // al
  __int128 v15; // xmm0
  int v16; // xmm1_4
  int v17; // xmm8_4
  int v18; // xmm9_4
  int v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  const struct DEVICE_INFO *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // xmm0_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // [rsp+148h] [rbp-80h] BYREF
  int v48; // [rsp+14Ch] [rbp-7Ch]
  int v49; // [rsp+150h] [rbp-78h] BYREF
  int v50; // [rsp+154h] [rbp-74h]
  int v51; // [rsp+158h] [rbp-70h] BYREF
  int v52; // [rsp+15Ch] [rbp-6Ch]
  float v53; // [rsp+160h] [rbp-68h]
  float v54; // [rsp+164h] [rbp-64h]
  int v55; // [rsp+168h] [rbp-60h] BYREF
  int v56; // [rsp+16Ch] [rbp-5Ch] BYREF
  int v57; // [rsp+170h] [rbp-58h] BYREF
  int v58; // [rsp+174h] [rbp-54h] BYREF
  int v59; // [rsp+178h] [rbp-50h] BYREF
  int v60; // [rsp+17Ch] [rbp-4Ch] BYREF
  float v61; // [rsp+180h] [rbp-48h] BYREF
  float v62; // [rsp+184h] [rbp-44h] BYREF
  int v63; // [rsp+188h] [rbp-40h] BYREF
  int v64; // [rsp+18Ch] [rbp-3Ch] BYREF
  int v65; // [rsp+190h] [rbp-38h] BYREF
  int v66; // [rsp+194h] [rbp-34h] BYREF
  int v67; // [rsp+198h] [rbp-30h] BYREF
  int v68; // [rsp+19Ch] [rbp-2Ch] BYREF
  int v69; // [rsp+1A0h] [rbp-28h] BYREF
  int v70; // [rsp+1A4h] [rbp-24h] BYREF
  int v71; // [rsp+1A8h] [rbp-20h] BYREF
  int v72; // [rsp+1ACh] [rbp-1Ch] BYREF
  int v73; // [rsp+1B0h] [rbp-18h] BYREF
  int v74; // [rsp+1B4h] [rbp-14h] BYREF
  int v75; // [rsp+1B8h] [rbp-10h] BYREF
  int v76; // [rsp+1BCh] [rbp-Ch] BYREF
  int v77; // [rsp+1C0h] [rbp-8h] BYREF
  int v78; // [rsp+1C4h] [rbp-4h] BYREF
  int v79; // [rsp+1C8h] [rbp+0h] BYREF
  int v80; // [rsp+1CCh] [rbp+4h] BYREF
  int v81; // [rsp+1D0h] [rbp+8h] BYREF
  int v82; // [rsp+1D4h] [rbp+Ch] BYREF
  _OWORD v83[4]; // [rsp+1D8h] [rbp+10h] BYREF
  char v84; // [rsp+218h] [rbp+50h]
  char v85; // [rsp+219h] [rbp+51h]
  int v86; // [rsp+2A8h] [rbp+E0h] BYREF
  int v87; // [rsp+2ACh] [rbp+E4h]
  int v88; // [rsp+2B8h] [rbp+F0h] BYREF
  int v89; // [rsp+2BCh] [rbp+F4h]
  int v90; // [rsp+2C0h] [rbp+F8h] BYREF
  char v91; // [rsp+2C4h] [rbp+FCh] BYREF

  *(_OWORD *)a3 = *(_OWORD *)this;
  v10 = 0.0;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)this + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 16);
  *(_DWORD *)a4 = 1065353216;
  *(_QWORD *)((char *)a4 + 4) = 0LL;
  *(_QWORD *)((char *)a4 + 12) = 0LL;
  *(_QWORD *)((char *)a4 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a4 + 28) = 0LL;
  *((_DWORD *)a4 + 9) = 0;
  *((_QWORD *)a4 + 5) = 1065353216LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_DWORD *)a4 + 14) = 0;
  *((_DWORD *)a4 + 15) = 1065353216;
  v11 = a5;
  v12 = *((_BYTE *)a4 + 65) & 0xD7;
  *((_BYTE *)a4 + 64) = 85;
  *((_BYTE *)a4 + 65) = v12 | 0x17;
  *(_QWORD *)v11 = 1065353216LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_DWORD *)v11 + 4) = 0;
  *(_QWORD *)((char *)v11 + 20) = 1065353216LL;
  *(_QWORD *)((char *)v11 + 28) = 0LL;
  *((_DWORD *)v11 + 9) = 0;
  *((_QWORD *)v11 + 5) = 1065353216LL;
  *((_QWORD *)v11 + 6) = 0LL;
  *((_DWORD *)v11 + 14) = 0;
  *((_DWORD *)v11 + 15) = 1065353216;
  v13 = a6;
  v14 = *((_BYTE *)v11 + 65) & 0xD7;
  *((_BYTE *)v11 + 64) = 85;
  *((_BYTE *)v11 + 65) = v14 | 0x17;
  v15 = *(_OWORD *)a3;
  LODWORD(a6) = 0;
  *(_OWORD *)v13 = v15;
  *((_OWORD *)v13 + 1) = *((_OWORD *)a3 + 1);
  *((_OWORD *)v13 + 2) = *((_OWORD *)a3 + 2);
  *((_OWORD *)v13 + 3) = *((_OWORD *)a3 + 3);
  *((_DWORD *)v13 + 16) = *((_DWORD *)a3 + 16);
  v16 = *((_DWORD *)this + 5);
  v17 = *((_DWORD *)this + 12);
  v18 = *((_DWORD *)this + 13);
  v47 = *(_DWORD *)this;
  v83[0] = _xmm;
  v48 = v16;
  v83[2] = _xmm;
  v49 = v17;
  v50 = v18;
  v83[1] = _xmm;
  LOBYTE(a5) = 0;
  v85 = v85 & 0xC0 | 0x17;
  v83[3] = _xmm;
  v84 = 85;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(this, v11, (struct CMILMatrix *)v83, (bool *)&a5);
  if ( (_BYTE)a5 )
  {
    v19 = *((_DWORD *)v11 + 5);
    v47 = *(_DWORD *)v11;
    v48 = v19;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v51, (const struct D2DMatrix *)v83);
    v51 = 0;
    v52 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v51, (const struct D2DQuaternion *)&v51);
    if ( v53 >= 0.0 )
      v20 = *(float *)&FLOAT_1_0;
    else
      v20 = FLOAT_N1_0;
    v21 = acosf(v54 * v20);
    v10 = v21 + v21;
    *(float *)&a6 = v21 + v21;
    CMILMatrix::Set2DRotation(a4, v21 + v21, 0.0, 0.0);
  }
  if ( !CMILMatrix::IsAffine<1>((__int64)this, 1) )
  {
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v47,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v49,
      (const struct Windows::Foundation::Numerics::float2 *)&v88,
      (const struct Windows::Foundation::Numerics::float2 *)&v86);
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_OWORD *)v13 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)v13 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)v13 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)v13 + 16) = *((_DWORD *)a3 + 16);
  }
  v22 = CPointerDeviceCache::Query(a2);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a3, v23, v24, v25) && *((_BYTE *)v22 + 48) )
  {
    TransformPoint((_DWORD)v22, (_DWORD)v22 + 16, v26, v27, (__int64)&v90, (__int64)&v91);
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0;
    CMILMatrix::Set2DAffineMatrix(
      v13,
      (const struct Windows::Foundation::Numerics::float2 *)&v47,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v90,
      (const struct Windows::Foundation::Numerics::float2 *)&v88,
      (const struct Windows::Foundation::Numerics::float2 *)&v86);
  }
  if ( (unsigned int)dword_1803D0EF0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      v31 = *((_DWORD *)this + 15);
      v32 = *((_DWORD *)this + 14);
      v86 = *((_DWORD *)v22 + 3);
      v88 = *((_DWORD *)v22 + 2);
      v90 = *((_DWORD *)v22 + 1);
      v55 = *(_DWORD *)v22;
      v56 = *((_DWORD *)v22 + 7);
      v57 = *((_DWORD *)v22 + 6);
      v58 = *((_DWORD *)v22 + 5);
      v59 = *((_DWORD *)v22 + 4);
      v61 = v54;
      v62 = v53;
      v63 = v52;
      v64 = v51;
      v65 = v48;
      v66 = v47;
      v67 = v50;
      v68 = v49;
      v69 = v31;
      v33 = *((_DWORD *)this + 13);
      v70 = v32;
      v34 = *((_DWORD *)this + 12);
      LODWORD(a5) = (unsigned __int8)a5;
      v71 = v33;
      v35 = *((_DWORD *)this + 11);
      v72 = v34;
      v36 = *((_DWORD *)this + 10);
      v73 = v35;
      v37 = *((_DWORD *)this + 9);
      v74 = v36;
      v38 = *((_DWORD *)this + 8);
      v75 = v37;
      v39 = *((_DWORD *)this + 7);
      v76 = v38;
      v40 = *((_DWORD *)this + 6);
      v77 = v39;
      v41 = *((_DWORD *)this + 5);
      v78 = v40;
      v42 = *((_DWORD *)this + 4);
      v79 = v41;
      v43 = *((_DWORD *)this + 3);
      v80 = v42;
      v44 = *((_DWORD *)this + 2);
      v81 = v43;
      v45 = *((_DWORD *)this + 1);
      v82 = v44;
      v46 = *(_DWORD *)this;
      v49 = v45;
      v47 = v46;
      v60 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v28,
        byte_18036AD2E,
        v29,
        v30,
        (__int64)&a5,
        (__int64)&v47,
        (__int64)&v49,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&a6,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v90,
        (__int64)&v88,
        (__int64)&v86);
    }
  }
}
