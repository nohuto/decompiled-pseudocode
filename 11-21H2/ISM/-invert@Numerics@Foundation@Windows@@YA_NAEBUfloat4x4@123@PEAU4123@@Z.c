/*
 * XREFs of ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800A1820
 * Callers:
 *     ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800A11E8 (-UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        const struct Windows::Foundation::Numerics::float4x4 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm15_4
  float v8; // xmm14_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  bool result; // al
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  float v34; // [rsp+0h] [rbp-D8h]
  float v35; // [rsp+4h] [rbp-D4h]
  float v36; // [rsp+8h] [rbp-D0h]
  float v37; // [rsp+Ch] [rbp-CCh]
  float v38; // [rsp+10h] [rbp-C8h]
  float v39; // [rsp+14h] [rbp-C4h]
  float v40; // [rsp+18h] [rbp-C0h]
  float v41; // [rsp+20h] [rbp-B8h]
  float v42; // [rsp+24h] [rbp-B4h]
  float v43; // [rsp+28h] [rbp-B0h]
  float v44; // [rsp+E0h] [rbp+8h]
  float v45; // [rsp+F0h] [rbp+18h]
  float v46; // [rsp+F8h] [rbp+20h]

  v3 = *((float *)this + 10);
  v4 = *((float *)this + 11);
  v5 = *((float *)this + 9);
  v6 = *((float *)this + 8);
  v34 = *(float *)this;
  v44 = *((float *)this + 1);
  v45 = *((float *)this + 2);
  v46 = *((float *)this + 3);
  v36 = *((float *)this + 7);
  v7 = *((float *)this + 14);
  v8 = *((float *)this + 15);
  v37 = *((float *)this + 12);
  v9 = (float)(v8 * v3) - (float)(v7 * v4);
  v43 = v6;
  v39 = *((float *)this + 13);
  v10 = (float)(v8 * v5) - (float)(v39 * v4);
  v41 = v3;
  v42 = v5;
  v11 = (float)(v7 * v5) - (float)(v39 * v3);
  v40 = *((float *)this + 4);
  v38 = *((float *)this + 5);
  v12 = (float)(v8 * v6) - (float)(v37 * v4);
  v35 = *((float *)this + 6);
  v13 = (float)(v7 * v6) - (float)(v37 * v3);
  v14 = (float)(v39 * v6) - (float)(v37 * v5);
  v15 = (float)((float)(v9 * v38) - (float)(v10 * v35)) + (float)(v11 * v36);
  LODWORD(v16) = COERCE_UNSIGNED_INT((float)((float)(v9 * v40) - (float)(v12 * v35)) + (float)(v13 * v36)) ^ _xmm;
  v17 = (float)((float)(v10 * v40) - (float)(v12 * v38)) + (float)(v14 * v36);
  LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v11 * v40) - (float)(v13 * v38)) + (float)(v14 * v35)) ^ _xmm;
  v19 = (float)((float)((float)(v16 * v44) + (float)(v15 * *(float *)this)) + (float)(v17 * v45)) + (float)(v18 * v46);
  if ( COERCE_FLOAT(LODWORD(v19) & _xmm) >= 0.00000011920929 )
  {
    v21 = 1.0 / v19;
    *(float *)a2 = (float)(1.0 / v19) * v15;
    *((float *)a2 + 4) = (float)(1.0 / v19) * v16;
    *((float *)a2 + 8) = (float)(1.0 / v19) * v17;
    *((float *)a2 + 12) = (float)(1.0 / v19) * v18;
    *((float *)a2 + 1) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 * v44) - (float)(v10 * v45)) + (float)(v11 * v46)) ^ _xmm)
                       * (float)(1.0 / v19);
    *((float *)a2 + 5) = (float)((float)((float)(v9 * v34) - (float)(v12 * v45)) + (float)(v13 * v46))
                       * (float)(1.0 / v19);
    *((float *)a2 + 9) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 * v34) - (float)(v12 * v44)) + (float)(v14 * v46)) ^ _xmm)
                       * (float)(1.0 / v19);
    v22 = (float)(v8 * v35) - (float)(v7 * v36);
    *((float *)a2 + 13) = (float)((float)((float)(v11 * v34) - (float)(v13 * v44)) + (float)(v14 * v45))
                        * (float)(1.0 / v19);
    v23 = (float)(v8 * v38) - (float)(v39 * v36);
    v24 = (float)(v7 * v38) - (float)(v39 * v35);
    v25 = (float)(v8 * v40) - (float)(v37 * v36);
    v26 = (float)(v7 * v40) - (float)(v37 * v35);
    v27 = (float)(v39 * v40) - (float)(v37 * v38);
    *((float *)a2 + 2) = (float)((float)((float)(v22 * v44) - (float)(v23 * v45)) + (float)(v24 * v46)) * v21;
    *((float *)a2 + 6) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v22 * v34) - (float)(v25 * v45)) + (float)(v26 * v46)) ^ _xmm)
                       * v21;
    *((float *)a2 + 10) = (float)((float)((float)(v23 * v34) - (float)(v25 * v44)) + (float)(v27 * v46)) * v21;
    *((float *)a2 + 14) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v24 * v34) - (float)(v26 * v44)) + (float)(v27 * v45)) ^ _xmm)
                        * v21;
    v28 = (float)(v4 * v35) - (float)(v41 * v36);
    v29 = (float)(v4 * v38) - (float)(v42 * v36);
    v30 = (float)(v41 * v38) - (float)(v42 * v35);
    v31 = (float)(v4 * v40) - (float)(v43 * v36);
    v32 = (float)(v41 * v40) - (float)(v43 * v35);
    v33 = (float)(v42 * v40) - (float)(v43 * v38);
    result = 1;
    *((float *)a2 + 3) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v28 * v44) - (float)(v29 * v45)) + (float)(v30 * v46)) ^ _xmm)
                       * v21;
    *((float *)a2 + 11) = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v29 * v34) - (float)(v31 * v44)) + (float)(v33 * v46)) ^ _xmm)
                        * v21;
    *((float *)a2 + 7) = (float)((float)((float)(v28 * v34) - (float)(v31 * v45)) + (float)(v32 * v46)) * v21;
    *((float *)a2 + 15) = (float)((float)((float)(v30 * v34) - (float)(v32 * v44)) + (float)(v33 * v45)) * v21;
  }
  else
  {
    result = 0;
    *(_DWORD *)a2 = 2143289344;
    *((_DWORD *)a2 + 1) = 2143289344;
    *((_DWORD *)a2 + 2) = 2143289344;
    *((_DWORD *)a2 + 3) = 2143289344;
    *((_DWORD *)a2 + 4) = 2143289344;
    *((_DWORD *)a2 + 5) = 2143289344;
    *((_DWORD *)a2 + 6) = 2143289344;
    *((_DWORD *)a2 + 7) = 2143289344;
    *((_DWORD *)a2 + 8) = 2143289344;
    *((_DWORD *)a2 + 9) = 2143289344;
    *((_DWORD *)a2 + 10) = 2143289344;
    *((_DWORD *)a2 + 11) = 2143289344;
    *((_DWORD *)a2 + 12) = 2143289344;
    *((_DWORD *)a2 + 13) = 2143289344;
    *((_DWORD *)a2 + 14) = 2143289344;
    *((_DWORD *)a2 + 15) = 2143289344;
  }
  return result;
}
