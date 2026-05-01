/*
 * XREFs of ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x1806738A4
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1806709C0 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x180673838 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     SnapLayoutHelpers::RotateWindowExtent @ 0x1806741E4 (SnapLayoutHelpers--RotateWindowExtent.c)
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
  _DWORD *v11; // rsi
  bool v13; // r9
  bool v14; // al
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int64 result; // rax
  int v48; // [rsp+20h] [rbp-30h]
  int v49; // [rsp+20h] [rbp-30h]
  int v50; // [rsp+20h] [rbp-30h]
  int v51; // [rsp+20h] [rbp-30h]
  int v52; // [rsp+20h] [rbp-30h]
  int v53; // [rsp+20h] [rbp-30h]
  __int128 v54; // [rsp+30h] [rbp-20h] BYREF

  v8 = (unsigned int)(a4[3] - a4[1]);
  v10 = a4[2] - *a4;
  v11 = a5 + 3;
  v54 = 0LL;
  v13 = v10 > (int)v8 && (int)(*v11 - a5[1]) > (int)(a5[2] - *a5);
  v14 = (int)v8 > v10 && (int)(a5[2] - *a5) > (int)(*v11 - a5[1]);
  if ( v13 )
  {
    v15 = a6;
    v16 = SnapLayoutHelpers::RotateWindowExtent((unsigned int)(a3[1] - a4[1]), a5[2], v8, a5[2] - *a5, 1, a6);
    v17 = a5[1];
    v18 = (unsigned int)(*v11 - v17);
    v19 = (unsigned int)(a4[2] - *a4);
    v20 = (unsigned int)(*a3 - *a4);
    DWORD2(v54) = v16;
    LOBYTE(v48) = 0;
    v21 = SnapLayoutHelpers::RotateWindowExtent(v20, v17, v19, v18, v48, a6);
    v22 = (unsigned int)(a4[3] - a4[1]);
    v23 = a5[2] - *a5;
    v24 = (unsigned int)(a4[3] - a3[3]);
    v25 = *a5;
    DWORD1(v54) = v21;
    LOBYTE(v49) = 0;
    v26 = SnapLayoutHelpers::RotateWindowExtent(v24, v25, v22, v23, v49, a6);
    v27 = (unsigned int)(a4[2] - *a4);
    v28 = *v11 - a5[1];
    v29 = (unsigned int)(a4[2] - a3[2]);
    v30 = (unsigned int)*v11;
    LODWORD(v54) = v26;
    LOBYTE(v50) = 1;
    HIDWORD(v54) = SnapLayoutHelpers::RotateWindowExtent(v29, v30, v27, v28, v50, a6);
LABEL_13:
    a2 = dword_1808A3E90[(unsigned int)SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v54, a5, v15)];
    goto LABEL_14;
  }
  if ( v14 )
  {
    v15 = a6;
    v31 = SnapLayoutHelpers::RotateWindowExtent((unsigned int)(a3[1] - a4[1]), *a5, v8, a5[2] - *a5, 0, a6);
    v32 = *v11 - a5[1];
    v33 = (unsigned int)(a4[2] - *a4);
    v34 = (unsigned int)(*a3 - *a4);
    v35 = (unsigned int)*v11;
    LODWORD(v54) = v31;
    LOBYTE(v51) = 1;
    v36 = SnapLayoutHelpers::RotateWindowExtent(v34, v35, v33, v32, v51, a6);
    v37 = a5[2];
    v38 = a5[2] - *a5;
    v39 = (unsigned int)(a4[3] - a4[1]);
    v40 = (unsigned int)(a4[3] - a3[3]);
    HIDWORD(v54) = v36;
    LOBYTE(v52) = 1;
    v41 = SnapLayoutHelpers::RotateWindowExtent(v40, v37, v39, v38, v52, a6);
    v42 = a5[1];
    v43 = (unsigned int)(*v11 - v42);
    v44 = (unsigned int)(a4[2] - *a4);
    v45 = (unsigned int)(a4[2] - a3[2]);
    DWORD2(v54) = v41;
    LOBYTE(v53) = 0;
    DWORD1(v54) = SnapLayoutHelpers::RotateWindowExtent(v45, v42, v44, v43, v53, a6);
    goto LABEL_13;
  }
LABEL_14:
  v46 = v54;
  *(_DWORD *)(a1 + 16) = a2;
  result = a1;
  *(_OWORD *)a1 = v46;
  return result;
}
