/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006A81A
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006A362 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z @ 0x1800E73A0 (-AddMultipleAndSet@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x1800E7444 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x1800E74D4 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned int i; // ebx
  __int128 *v7; // r10
  __int128 v8; // xmm0
  __int128 *v9; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int128 v12; // xmm4
  __int64 v13; // xmm0_8
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  int v20; // eax
  __int64 v21; // rax
  __int128 v22; // xmm4
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // xmm1_8
  __int128 *v26; // rdx
  __int128 v27; // xmm0
  int v28; // eax
  __int64 v29; // xmm1_8
  __int128 v30; // xmm0
  __int128 *MidPoint; // rax
  __int128 *v32; // r10
  __int128 v33; // xmm4
  __int64 v34; // r9
  __int64 v35; // xmm1_8
  __int64 v36; // rax
  __int128 v37; // xmm4
  __int64 v38; // xmm0_8
  float v39; // xmm11_4
  float v40; // xmm12_4
  float v41; // xmm10_4
  float v42; // xmm7_4
  float v43; // xmm3_4
  float v44; // xmm5_4
  float v45; // xmm6_4
  float v46; // xmm7_4
  float v47; // xmm2_4
  float v48; // xmm5_4
  float v49; // xmm4_4
  float v50; // xmm6_4
  float v51; // xmm3_4
  _BYTE v52[24]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h]
  int v55; // [rsp+60h] [rbp-A8h]
  __int128 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+78h] [rbp-90h]
  int v58; // [rsp+80h] [rbp-88h]
  __int128 v59; // [rsp+88h] [rbp-80h]
  __int128 v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-50h]
  int v62; // [rsp+C0h] [rbp-48h]
  __int128 v63; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-30h] BYREF
  int v65; // [rsp+E0h] [rbp-28h]
  __int128 v66; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-10h]
  int v68; // [rsp+100h] [rbp-8h]

  v2 = *((_DWORD *)a1 + 6);
  *(_DWORD *)(a2 + 24) = 0;
  result = DynArrayImpl<0>::ShrinkToSize(a2, 0x1Cu);
  for ( i = 0; i < v2; i += 2 )
  {
    v7 = (__int128 *)*a1;
    if ( i + 4 <= v2 )
    {
      if ( i )
      {
        MidPoint = (__int128 *)CTouchDragVisualHelper::GetMidPoint(v52, (char *)v7 + 28 * i, (char *)v7 + 28 * i + 28);
        v32 = (__int128 *)*a1;
        v33 = *MidPoint;
        v35 = *(_QWORD *)(*a1 + v34 + 16);
        LODWORD(MidPoint) = *(_DWORD *)(*a1 + v34 + 24);
        v26 = (__int128 *)(*a1 + 28LL * (i + 2));
        v56 = *(_OWORD *)(*a1 + v34);
        v30 = *v26;
        v57 = v35;
        v29 = *((_QWORD *)v26 + 2);
        v23 = (__int64)v32 + 28 * i + 84;
        v58 = (int)MidPoint;
        v28 = *((_DWORD *)v26 + 6);
        v59 = v33;
      }
      else
      {
        v23 = (__int64)v7 + 84;
        v24 = *((_DWORD *)v7 + 13);
        v25 = *(_QWORD *)((char *)v7 + 44);
        v26 = &v60;
        v59 = *v7;
        v58 = v24;
        v27 = *(__int128 *)((char *)v7 + 28);
        v28 = *((_DWORD *)v7 + 20);
        v57 = v25;
        v29 = *((_QWORD *)v7 + 9);
        v56 = v27;
        v30 = *(__int128 *)((char *)v7 + 56);
      }
      v61 = v29;
      v60 = v30;
      v62 = v28;
      v36 = CTouchDragVisualHelper::GetMidPoint(v52, v26, v23);
      v37 = *(_OWORD *)v36;
      v38 = *(_QWORD *)(v36 + 16);
      LODWORD(v36) = *(_DWORD *)(v36 + 24);
      v53 = v37;
      v55 = v36;
      v54 = v38;
    }
    else
    {
      if ( i )
      {
        v11 = CTouchDragVisualHelper::GetMidPoint(v52, (char *)v7 + 28 * i, (char *)v7 + 28 * i + 28);
        v7 = (__int128 *)*a1;
        v12 = *(_OWORD *)v11;
        v13 = *(_QWORD *)(v11 + 16);
        v68 = *(_DWORD *)(v11 + 24);
        v9 = &v66;
        v66 = v12;
        v67 = v13;
      }
      else
      {
        v8 = *v7;
        v65 = *((_DWORD *)v7 + 6);
        v9 = &v63;
        v10 = *((_QWORD *)v7 + 2);
        v63 = v8;
        v64 = v10;
      }
      v14 = i + 1;
      v59 = *v9;
      v15 = *(__int128 *)((char *)v7 + 28 * v14);
      v16 = *(_QWORD *)((char *)v7 + 28 * v14 + 16);
      v58 = *((_DWORD *)v7 + 7 * v14 + 6);
      v57 = v16;
      v56 = v15;
      if ( i + 3 <= v2 )
        v17 = (__int128 *)((char *)v7 + 28 * i + 56);
      else
        v17 = &v56;
      v18 = *v17;
      v19 = *((_QWORD *)v17 + 2);
      v20 = *((_DWORD *)v17 + 6);
      v53 = v18;
      v55 = v20;
      v54 = v19;
      v21 = CTouchDragVisualHelper::GetMidPoint(v52, &v56, &v53);
      i = v2;
      v22 = *(_OWORD *)v21;
      *(_QWORD *)&v18 = *(_QWORD *)(v21 + 16);
      LODWORD(v21) = *(_DWORD *)(v21 + 24);
      v60 = v22;
      v62 = v21;
      v61 = v18;
    }
    v39 = 0.0;
    v40 = (float)(v59 - v53);
    do
    {
      v41 = 1.0 - v39;
      HIDWORD(v63) = 1056964608;
      v42 = (float)(1.0 - v39) * 3.0;
      v43 = (float)(v39 * v39) * v39;
      v44 = (float)((float)(1.0 - v39) * v42) * v39;
      v45 = (float)(1.0 - v39) * (float)(v41 * v41);
      v46 = (float)(v42 * v39) * v39;
      v47 = (float)(*((float *)&v56 + 2) * v44) + (float)(*((float *)&v59 + 2) * v45);
      *((float *)&v63 + 1) = (float)((float)((float)(*((float *)&v56 + 1) * v44) + (float)(*((float *)&v59 + 1) * v45))
                                   + (float)(*((float *)&v60 + 1) * v46))
                           + (float)(*((float *)&v53 + 1) * v43);
      v48 = (float)((float)(v39 - 1.0) * 3.0) * (float)(1.0 - v39);
      *((float *)&v63 + 2) = (float)(v47 + (float)(*((float *)&v60 + 2) * v46)) + (float)(*((float *)&v53 + 2) * v43);
      v49 = (float)((float)((float)(v41 + v41) * v39) - (float)(v39 * v39)) * 3.0;
      v50 = (float)((float)((float)((float)(v39 - 1.0) + (float)(v39 - 1.0)) * v39) + (float)(v41 * v41)) * 3.0;
      v51 = (float)(v39 * 3.0) * v39;
      LODWORD(v64) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*((float *)&v56 + 2) * v50) + (float)(*((float *)&v59 + 2) * v48))
                             + (float)(*((float *)&v60 + 2) * v49))
                     + (float)(*((float *)&v53 + 2) * v51)) ^ _xmm;
      v65 = 0;
      *((float *)&v64 + 1) = (float)((float)((float)(*((float *)&v56 + 1) * v50) + (float)(*((float *)&v59 + 1) * v48))
                                   + (float)(*((float *)&v60 + 1) * v49))
                           + (float)(*((float *)&v53 + 1) * v51);
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v64);
      LODWORD(v63) = v53 + (int)(float)(v40 * (float)(1.0 - v39));
      result = DynArray<TOUCH_DRAG_POINT,0>::AddMultipleAndSet(a2, &v63);
      v39 = v39 + 0.2;
    }
    while ( v39 < 1.0 );
  }
  return result;
}
