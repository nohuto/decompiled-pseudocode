/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x1801ADCE4
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801AF054 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180007010 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1800108F4 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180023A48 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18005AB90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800713C4 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     acosf_0 @ 0x18011B53C (acosf_0.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801A6CF4 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333333@Z @ 0x1801A9EEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     TransformPoint @ 0x1801B027C (TransformPoint.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x1802701A8 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18027035C (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        CMILMatrix *this,
        __int64 a2,
        CMILMatrix *a3,
        CMILMatrix *a4,
        CMILMatrix *a5,
        CMILMatrix *a6)
{
  CMILMatrix *v10; // r14
  CMILMatrix *v11; // rdi
  __int64 v12; // r8
  float v13; // xmm6_4
  __int128 v14; // xmm1
  int v15; // xmm8_4
  int v16; // xmm9_4
  int v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  const struct DEVICE_INFO *v20; // r14
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // [rsp+148h] [rbp-80h] BYREF
  int v43; // [rsp+14Ch] [rbp-7Ch]
  int v44; // [rsp+150h] [rbp-78h] BYREF
  int v45; // [rsp+154h] [rbp-74h]
  int v46; // [rsp+158h] [rbp-70h] BYREF
  int v47; // [rsp+15Ch] [rbp-6Ch]
  float v48; // [rsp+160h] [rbp-68h]
  float v49; // [rsp+164h] [rbp-64h]
  int v50; // [rsp+168h] [rbp-60h] BYREF
  int v51; // [rsp+16Ch] [rbp-5Ch] BYREF
  int v52; // [rsp+170h] [rbp-58h] BYREF
  int v53; // [rsp+174h] [rbp-54h] BYREF
  int v54; // [rsp+178h] [rbp-50h] BYREF
  int v55; // [rsp+17Ch] [rbp-4Ch] BYREF
  float v56; // [rsp+180h] [rbp-48h] BYREF
  float v57; // [rsp+184h] [rbp-44h] BYREF
  int v58; // [rsp+188h] [rbp-40h] BYREF
  int v59; // [rsp+18Ch] [rbp-3Ch] BYREF
  int v60; // [rsp+190h] [rbp-38h] BYREF
  int v61; // [rsp+194h] [rbp-34h] BYREF
  int v62; // [rsp+198h] [rbp-30h] BYREF
  int v63; // [rsp+19Ch] [rbp-2Ch] BYREF
  int v64; // [rsp+1A0h] [rbp-28h] BYREF
  int v65; // [rsp+1A4h] [rbp-24h] BYREF
  int v66; // [rsp+1A8h] [rbp-20h] BYREF
  int v67; // [rsp+1ACh] [rbp-1Ch] BYREF
  int v68; // [rsp+1B0h] [rbp-18h] BYREF
  int v69; // [rsp+1B4h] [rbp-14h] BYREF
  int v70; // [rsp+1B8h] [rbp-10h] BYREF
  int v71; // [rsp+1BCh] [rbp-Ch] BYREF
  int v72; // [rsp+1C0h] [rbp-8h] BYREF
  int v73; // [rsp+1C4h] [rbp-4h] BYREF
  int v74; // [rsp+1C8h] [rbp+0h] BYREF
  int v75; // [rsp+1CCh] [rbp+4h] BYREF
  int v76; // [rsp+1D0h] [rbp+8h] BYREF
  int v77; // [rsp+1D4h] [rbp+Ch] BYREF
  _BYTE v78[144]; // [rsp+1D8h] [rbp+10h] BYREF
  int v79; // [rsp+2A8h] [rbp+E0h] BYREF
  int v80; // [rsp+2ACh] [rbp+E4h]
  int v81; // [rsp+2B8h] [rbp+F0h] BYREF
  int v82; // [rsp+2BCh] [rbp+F4h]
  int v83; // [rsp+2C0h] [rbp+F8h] BYREF
  char v84; // [rsp+2C4h] [rbp+FCh] BYREF

  *(_OWORD *)a3 = *(_OWORD *)this;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)this + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 16);
  CMILMatrix::SetToIdentity(a4);
  v10 = a5;
  CMILMatrix::SetToIdentity(a5);
  v11 = a6;
  v13 = 0.0;
  *(_OWORD *)a6 = *(_OWORD *)v12;
  v14 = *(_OWORD *)(v12 + 16);
  LODWORD(a6) = 0;
  *((_OWORD *)v11 + 1) = v14;
  *((_OWORD *)v11 + 2) = *(_OWORD *)(v12 + 32);
  *((_OWORD *)v11 + 3) = *(_OWORD *)(v12 + 48);
  *((_DWORD *)v11 + 16) = *(_DWORD *)(v12 + 64);
  v15 = *((_DWORD *)this + 12);
  v16 = *((_DWORD *)this + 13);
  v42 = *(_DWORD *)this;
  v43 = *((_DWORD *)this + 5);
  v44 = v15;
  v45 = v16;
  CMILMatrix::SetToIdentity((CMILMatrix *)v78);
  LOBYTE(a5) = 0;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(this, v10, (struct CMILMatrix *)v78, (bool *)&a5);
  if ( (_BYTE)a5 )
  {
    v17 = *((_DWORD *)v10 + 5);
    v42 = *(_DWORD *)v10;
    v43 = v17;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v46, (const struct D2DMatrix *)v78);
    v46 = 0;
    v47 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v46, (const struct D2DQuaternion *)&v46);
    if ( v48 >= 0.0 )
      v18 = *(float *)&FLOAT_1_0;
    else
      v18 = FLOAT_N1_0;
    v19 = acosf_0(v49 * v18);
    v13 = v19 + v19;
    *(float *)&a6 = v19 + v19;
    CMILMatrix::Set2DRotation(a4, v19 + v19, 0.0, 0.0);
  }
  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
  {
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v42,
      v13,
      (const struct Windows::Foundation::Numerics::float2 *)&v44,
      (const struct Windows::Foundation::Numerics::float2 *)&v81,
      (const struct Windows::Foundation::Numerics::float2 *)&v79);
    *(_OWORD *)v11 = *(_OWORD *)a3;
    *((_OWORD *)v11 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)v11 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)v11 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)v11 + 16) = *((_DWORD *)a3 + 16);
  }
  v20 = CPointerDeviceCache::Query(a2);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a3) && *((_BYTE *)v20 + 48) )
  {
    TransformPoint((_DWORD)v20, (_DWORD)v20 + 16, v21, v22, (__int64)&v83, (__int64)&v84);
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    CMILMatrix::Set2DAffineMatrix(
      v11,
      (const struct Windows::Foundation::Numerics::float2 *)&v42,
      v13,
      (const struct Windows::Foundation::Numerics::float2 *)&v83,
      (const struct Windows::Foundation::Numerics::float2 *)&v81,
      (const struct Windows::Foundation::Numerics::float2 *)&v79);
  }
  if ( (unsigned int)dword_1803E37D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E37D0, 2LL) )
    {
      v26 = *((_DWORD *)this + 15);
      v27 = *((_DWORD *)this + 14);
      v79 = *((_DWORD *)v20 + 3);
      v81 = *((_DWORD *)v20 + 2);
      v83 = *((_DWORD *)v20 + 1);
      v50 = *(_DWORD *)v20;
      v51 = *((_DWORD *)v20 + 7);
      v52 = *((_DWORD *)v20 + 6);
      v53 = *((_DWORD *)v20 + 5);
      v54 = *((_DWORD *)v20 + 4);
      v56 = v49;
      v57 = v48;
      v58 = v47;
      v59 = v46;
      v60 = v43;
      v61 = v42;
      v62 = v45;
      v63 = v44;
      v64 = v26;
      v28 = *((_DWORD *)this + 13);
      v65 = v27;
      v29 = *((_DWORD *)this + 12);
      LODWORD(a5) = (unsigned __int8)a5;
      v66 = v28;
      v30 = *((_DWORD *)this + 11);
      v67 = v29;
      v31 = *((_DWORD *)this + 10);
      v68 = v30;
      v32 = *((_DWORD *)this + 9);
      v69 = v31;
      v33 = *((_DWORD *)this + 8);
      v70 = v32;
      v34 = *((_DWORD *)this + 7);
      v71 = v33;
      v35 = *((_DWORD *)this + 6);
      v72 = v34;
      v36 = *((_DWORD *)this + 5);
      v73 = v35;
      v37 = *((_DWORD *)this + 4);
      v74 = v36;
      v38 = *((_DWORD *)this + 3);
      v75 = v37;
      v39 = *((_DWORD *)this + 2);
      v76 = v38;
      v40 = *((_DWORD *)this + 1);
      v77 = v39;
      v41 = *(_DWORD *)this;
      v44 = v40;
      v42 = v41;
      v55 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v23,
        byte_18037EC8F,
        v24,
        v25,
        (__int64)&a5,
        (__int64)&v42,
        (__int64)&v44,
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
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&a6,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v83,
        (__int64)&v81,
        (__int64)&v79);
    }
  }
}
