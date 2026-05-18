/*
 * XREFs of ?UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D910
 * Callers:
 *     ?GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA?AUVector2@Math@Utils@3@XZ @ 0x18005B994 (-GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetRenderTargetSize@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BAB8 (-GetRenderTargetSize@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetViewportActive@Camera@Engine@Spectre@@IEBA?AU?$ViewportBounds@UVector3@Math@Utils@Spectre@@@123@XZ @ 0x18005BBC0 (-GetViewportActive@Camera@Engine@Spectre@@IEBA-AU-$ViewportBounds@UVector3@Math@Utils@Spectre@@@.c)
 *     ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8 (-UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ.c)
 * Callees:
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494 (-SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z.c)
 */

void __fastcall Spectre::Engine::Camera::UpdateMatrixArray(Spectre::Engine::Camera *this)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // r10
  __int128 *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // r10
  __int128 *v34; // rax
  int v35; // r11d
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // r10
  int v40; // r11d
  __int64 v41; // rcx
  __int128 *v42; // rax
  int v43; // r11d
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // r10
  __int128 v48; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v49; // [rsp+30h] [rbp-D0h]
  __int128 v50; // [rsp+40h] [rbp-C0h]
  __int128 v51; // [rsp+50h] [rbp-B0h]
  __int128 v52; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v53; // [rsp+70h] [rbp-90h]
  __int128 v54; // [rsp+80h] [rbp-80h]
  __int128 v55; // [rsp+90h] [rbp-70h]
  _OWORD v56[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v57[4]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v58[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v59[4]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v60[4]; // [rsp+1A0h] [rbp+A0h] BYREF

  v1 = *(_OWORD *)((char *)this + 692);
  v52 = *(_OWORD *)((char *)this + 676);
  v2 = *(_OWORD *)((char *)this + 708);
  v53 = v1;
  v3 = *(_OWORD *)((char *)this + 724);
  v54 = v2;
  v4 = *(_OWORD *)((char *)this + 1252);
  v55 = v3;
  v5 = *(_OWORD *)((char *)this + 1268);
  v56[0] = v4;
  v6 = *(_OWORD *)((char *)this + 1284);
  v56[1] = v5;
  v7 = *(_OWORD *)((char *)this + 1300);
  v56[2] = v6;
  v8 = *(_OWORD *)((char *)this + 804);
  v56[3] = v7;
  v9 = *(_OWORD *)((char *)this + 820);
  v58[0] = v8;
  v10 = *(_OWORD *)((char *)this + 836);
  v58[1] = v9;
  v11 = *(_OWORD *)((char *)this + 852);
  v58[2] = v10;
  v12 = *(_OWORD *)((char *)this + 932);
  v58[3] = v11;
  v13 = *(_OWORD *)((char *)this + 948);
  v48 = v12;
  v14 = *(_OWORD *)((char *)this + 964);
  v49 = v13;
  v15 = *(_OWORD *)((char *)this + 980);
  v50 = v14;
  v16 = *(_OWORD *)((char *)this + 1124);
  v51 = v15;
  v17 = *(_OWORD *)((char *)this + 1140);
  v57[0] = v16;
  v18 = *(_OWORD *)((char *)this + 1156);
  v57[1] = v17;
  v19 = *(_OWORD *)((char *)this + 1172);
  v57[2] = v18;
  v20 = *(_OWORD *)((char *)this + 1444);
  v57[3] = v19;
  v21 = *(_OWORD *)((char *)this + 1460);
  v60[0] = v20;
  v22 = *(_OWORD *)((char *)this + 1476);
  v60[1] = v21;
  v23 = *(_OWORD *)((char *)this + 1492);
  v60[2] = v22;
  v60[3] = v23;
  Spectre::Utils::Math::operator*((__int64)v59, v60, v57);
  v24 = Spectre::Utils::Math::operator*((__int64)v60, &v52, v56);
  v25 = v24[1];
  v52 = *v24;
  v26 = v24[2];
  v53 = v25;
  v27 = v24[3];
  v54 = v26;
  v55 = v27;
  Spectre::Engine::Camera::SetTransformMatrix(v28, 0, 3, &v52);
  v29 = Spectre::Utils::Math::operator*((__int64)&v52, &v48, v56);
  v30 = v29[1];
  v48 = *v29;
  v31 = v29[2];
  v49 = v30;
  v32 = v29[3];
  v50 = v31;
  v51 = v32;
  Spectre::Engine::Camera::SetTransformMatrix(v33, 1, 3, &v48);
  v34 = Spectre::Utils::Math::operator*((__int64)&v52, v57, v58);
  v36 = v34[1];
  v48 = *v34;
  v37 = v34[2];
  v49 = v36;
  v38 = v34[3];
  v50 = v37;
  v51 = v38;
  Spectre::Engine::Camera::SetTransformMatrix(v39, v35 + 1, 0, &v48);
  v50 = v59[2];
  v51 = v59[3];
  v48 = v59[0];
  v49 = v59[1];
  Spectre::Engine::Camera::SetTransformMatrix(v41, v40 + 2, v40, &v48);
  v42 = Spectre::Utils::Math::operator*((__int64)&v52, v59, v58);
  v44 = v42[1];
  v48 = *v42;
  v45 = v42[2];
  v49 = v44;
  v46 = v42[3];
  v50 = v45;
  v51 = v46;
  Spectre::Engine::Camera::SetTransformMatrix(v47, v43 + 2, 0, &v48);
}
