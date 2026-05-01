/*
 * XREFs of ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x1805A651C
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805A1DC4 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@12@AEBUCRect@Geometry@@0H@Z @ 0x1805A64B0 (-GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocatio.c)
 *     SnapLayoutHelpers::RotateWindowExtent @ 0x1805A74B0 (SnapLayoutHelpers--RotateWindowExtent.c)
 */

__int64 __fastcall SnapLayoutHelpers::HandleMigrationRotation(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v8; // r8
  int v10; // edx
  bool v12; // r9
  bool v13; // al
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rcx
  __int128 v45; // xmm0
  __int64 result; // rax
  int v47; // [rsp+20h] [rbp-30h]
  int v48; // [rsp+20h] [rbp-30h]
  int v49; // [rsp+20h] [rbp-30h]
  int v50; // [rsp+20h] [rbp-30h]
  int v51; // [rsp+20h] [rbp-30h]
  int v52; // [rsp+20h] [rbp-30h]
  __int128 v53; // [rsp+30h] [rbp-20h] BYREF

  v8 = (unsigned int)(a4[3] - a4[1]);
  v10 = a4[2] - *a4;
  v53 = 0LL;
  v12 = v10 > (int)v8 && (int)(a5[3] - a5[1]) > (int)(a5[2] - *a5);
  v13 = (int)v8 > v10 && (int)(a5[2] - *a5) > (int)(a5[3] - a5[1]);
  if ( v12 )
  {
    v14 = a6;
    v15 = SnapLayoutHelpers::RotateWindowExtent((unsigned int)(a3[1] - a4[1]), a5[2], v8, a5[2] - *a5, 1, a6);
    v16 = a5[1];
    v17 = a5[3] - (unsigned int)v16;
    v18 = (unsigned int)(a4[2] - *a4);
    v19 = (unsigned int)(*a3 - *a4);
    DWORD2(v53) = v15;
    LOBYTE(v47) = 0;
    v20 = SnapLayoutHelpers::RotateWindowExtent(v19, v16, v18, v17, v47, a6);
    v21 = (unsigned int)(a4[3] - a4[1]);
    v22 = a5[2] - *a5;
    v23 = (unsigned int)(a4[3] - a3[3]);
    v24 = *a5;
    DWORD1(v53) = v20;
    LOBYTE(v48) = 0;
    v25 = SnapLayoutHelpers::RotateWindowExtent(v23, v24, v21, v22, v48, a6);
    v26 = a5[3];
    v27 = a5[3] - a5[1];
    v28 = (unsigned int)(a4[2] - *a4);
    v29 = (unsigned int)(a4[2] - a3[2]);
    LODWORD(v53) = v25;
    LOBYTE(v49) = 1;
    HIDWORD(v53) = SnapLayoutHelpers::RotateWindowExtent(v29, v26, v28, v27, v49, a6);
LABEL_13:
    a2 = dword_1806EF150[(unsigned int)SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(&v53, a5, v14)];
    goto LABEL_14;
  }
  if ( v13 )
  {
    v14 = a6;
    v30 = SnapLayoutHelpers::RotateWindowExtent((unsigned int)(a3[1] - a4[1]), *a5, v8, a5[2] - *a5, 0, a6);
    v31 = a5[3];
    v32 = a5[3] - a5[1];
    v33 = (unsigned int)(a4[2] - *a4);
    v34 = (unsigned int)(*a3 - *a4);
    LODWORD(v53) = v30;
    LOBYTE(v50) = 1;
    v35 = SnapLayoutHelpers::RotateWindowExtent(v34, v31, v33, v32, v50, a6);
    v36 = a5[2];
    v37 = a5[2] - *a5;
    v38 = (unsigned int)(a4[3] - a4[1]);
    v39 = (unsigned int)(a4[3] - a3[3]);
    HIDWORD(v53) = v35;
    LOBYTE(v51) = 1;
    v40 = SnapLayoutHelpers::RotateWindowExtent(v39, v36, v38, v37, v51, a6);
    v41 = a5[1];
    v42 = a5[3] - (unsigned int)v41;
    v43 = (unsigned int)(a4[2] - *a4);
    v44 = (unsigned int)(a4[2] - a3[2]);
    DWORD2(v53) = v40;
    LOBYTE(v52) = 0;
    DWORD1(v53) = SnapLayoutHelpers::RotateWindowExtent(v44, v41, v43, v42, v52, a6);
    goto LABEL_13;
  }
LABEL_14:
  v45 = v53;
  *(_DWORD *)(a1 + 16) = a2;
  result = a1;
  *(_OWORD *)a1 = v45;
  return result;
}
