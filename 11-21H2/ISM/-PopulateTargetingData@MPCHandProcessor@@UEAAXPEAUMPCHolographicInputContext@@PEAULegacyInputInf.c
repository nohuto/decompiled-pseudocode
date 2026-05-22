/*
 * XREFs of ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800A7AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1F48 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1FF0 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x1800A896C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

void __fastcall MPCHandProcessor::PopulateTargetingData(
        MPCHandProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char v3; // di
  int v5; // r9d
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // r11
  float *v11; // rax
  __int64 v12; // r10
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  float *v17; // r9
  float *v18; // rax
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // xmm0_8
  int v22; // eax
  int v23; // eax
  __int64 v24; // xmm0_8
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-19h] BYREF
  float v27; // [rsp+28h] [rbp-11h]
  float v28[4]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v29; // [rsp+40h] [rbp+7h] BYREF
  __int128 v30; // [rsp+50h] [rbp+17h] BYREF
  __int128 v31; // [rsp+60h] [rbp+27h]
  __int128 v32; // [rsp+70h] [rbp+37h]
  __int128 v33; // [rsp+80h] [rbp+47h]

  v3 = 0;
  v5 = **((_DWORD **)this + 3);
  *((_DWORD *)a3 + 21) = *((_DWORD *)a3 + 265);
  *((_DWORD *)a3 + 20) = v5;
  if ( *((_BYTE *)a3 + 996) && *((_BYTE *)a3 + 997) )
  {
    v6 = *((_OWORD *)a3 + 137);
    v7 = *((_OWORD *)a3 + 138);
    v27 = *((float *)a3 + 248);
    v30 = v6;
    v8 = *((_OWORD *)a3 + 139);
    v31 = v7;
    v9 = *((_OWORD *)a3 + 140);
    v32 = v8;
    v26 = *((_QWORD *)a3 + 123);
    v33 = v9;
    Windows::Foundation::Numerics::transform(v28, (float *)&v26, (float *)&v30);
    v11 = Windows::Foundation::Numerics::transform((float *)&v26, v28, (float *)(v10 + 16));
    *(_QWORD *)(v12 + 9912) = *(_QWORD *)v11;
    *(float *)&v11 = v11[2];
    v26 = 0LL;
    *(_DWORD *)(v12 + 9920) = (_DWORD)v11;
    v13 = *(_OWORD *)((char *)a3 + 968);
    v27 = FLOAT_N1_0;
    v29 = v13;
    Windows::Foundation::Numerics::transform(v28, &v26, &v29);
    v14 = *((_OWORD *)a3 + 138);
    v30 = *((_OWORD *)a3 + 137);
    v15 = *((_OWORD *)a3 + 139);
    v31 = v14;
    v16 = *((_OWORD *)a3 + 140);
    v32 = v15;
    v33 = v16;
    Windows::Foundation::Numerics::transform_normal((float *)&v26, v28, (float *)&v30);
    v18 = Windows::Foundation::Numerics::transform_normal(v28, (float *)&v26, v17);
    *(_QWORD *)(v19 + 9900) = *(_QWORD *)v18;
    *(float *)(v19 + 9908) = v18[2];
    if ( *(_BYTE *)(v19 + 9936) )
    {
      if ( *(_BYTE *)(v19 + 9937) )
      {
        v20 = *(_DWORD *)(v19 + 9920);
        *(_QWORD *)(v19 + 9940) = *(_QWORD *)(v19 + 9912);
        v21 = *(_QWORD *)(v19 + 9900);
        *(_DWORD *)(v19 + 9948) = v20;
        v22 = *(_DWORD *)(v19 + 9908);
        *(_QWORD *)(v19 + 9952) = v21;
        *(_DWORD *)(v19 + 9960) = v22;
      }
      v23 = *(_DWORD *)(v19 + 9948);
      *(_QWORD *)(v19 + 9912) = *(_QWORD *)(v19 + 9940);
      v24 = *(_QWORD *)(v19 + 9952);
      *(_DWORD *)(v19 + 9920) = v23;
      v25 = *(_DWORD *)(v19 + 9960);
      *(_QWORD *)(v19 + 9900) = v24;
      *(_DWORD *)(v19 + 9908) = v25;
    }
    else
    {
      v3 = 1;
    }
    *(_BYTE *)(v19 + 9937) = v3;
    *((_DWORD *)a3 + 30) = *(_DWORD *)(v19 + 9912);
    *((_DWORD *)a3 + 31) = *(_DWORD *)(v19 + 9916);
    *((_DWORD *)a3 + 32) = *(_DWORD *)(v19 + 9920);
    *((_DWORD *)a3 + 33) = *(_DWORD *)(v19 + 9900);
    *((_DWORD *)a3 + 34) = *(_DWORD *)(v19 + 9904);
    *((_DWORD *)a3 + 35) = *(_DWORD *)(v19 + 9908);
    *(_BYTE *)(v19 + 9896) = 1;
  }
}
