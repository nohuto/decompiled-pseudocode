/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006E6D8
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006DF88 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z @ 0x18006E58A (-AddMultipleAndSet@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x18006E62C (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x1800E7FB4 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 */

__int64 __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned int i; // ebx
  __int128 *v7; // r10
  unsigned int v8; // r9d
  __int128 v9; // xmm0
  __int128 *v10; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm4
  __int64 v14; // xmm0_8
  __int128 *v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 *v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  int v21; // eax
  __int64 v22; // rax
  __int128 v23; // xmm4
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // xmm1_8
  __int128 *v27; // rdx
  __int128 v28; // xmm0
  int v29; // eax
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int128 *MidPoint; // rax
  __int128 *v33; // r10
  __int128 v34; // xmm4
  __int64 v35; // r9
  __int64 v36; // xmm1_8
  __int64 v37; // rax
  __int128 v38; // xmm4
  __int64 v39; // xmm0_8
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm10_4
  float v43; // xmm7_4
  float v44; // xmm3_4
  float v45; // xmm5_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  float v48; // xmm2_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm6_4
  float v52; // xmm3_4
  _BYTE v53[24]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v54; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-B0h]
  int v56; // [rsp+60h] [rbp-A8h]
  __int128 v57; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h]
  int v59; // [rsp+80h] [rbp-88h]
  __int128 v60; // [rsp+88h] [rbp-80h]
  __int128 v61; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h]
  int v63; // [rsp+C0h] [rbp-48h]
  __int128 v64; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-30h] BYREF
  int v66; // [rsp+E0h] [rbp-28h]
  __int128 v67; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-10h]
  int v69; // [rsp+100h] [rbp-8h]

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
        MidPoint = (__int128 *)CTouchDragVisualHelper::GetMidPoint(v53, (char *)v7 + 28 * i, (char *)v7 + 28 * i + 28);
        v33 = (__int128 *)*a1;
        v34 = *MidPoint;
        v36 = *(_QWORD *)(*a1 + v35 + 16);
        LODWORD(MidPoint) = *(_DWORD *)(*a1 + v35 + 24);
        v27 = (__int128 *)(*a1 + 28LL * (i + 2));
        v57 = *(_OWORD *)(*a1 + v35);
        v31 = *v27;
        v58 = v36;
        v30 = *((_QWORD *)v27 + 2);
        v24 = (__int64)v33 + 28 * i + 84;
        v59 = (int)MidPoint;
        v29 = *((_DWORD *)v27 + 6);
        v60 = v34;
      }
      else
      {
        v24 = (__int64)v7 + 84;
        v25 = *((_DWORD *)v7 + 13);
        v26 = *(_QWORD *)((char *)v7 + 44);
        v27 = &v61;
        v60 = *v7;
        v59 = v25;
        v28 = *(__int128 *)((char *)v7 + 28);
        v29 = *((_DWORD *)v7 + 20);
        v58 = v26;
        v30 = *((_QWORD *)v7 + 9);
        v57 = v28;
        v31 = *(__int128 *)((char *)v7 + 56);
      }
      v62 = v30;
      v61 = v31;
      v63 = v29;
      v37 = CTouchDragVisualHelper::GetMidPoint(v53, v27, v24);
      v38 = *(_OWORD *)v37;
      v39 = *(_QWORD *)(v37 + 16);
      LODWORD(v37) = *(_DWORD *)(v37 + 24);
      v54 = v38;
      v56 = v37;
      v55 = v39;
    }
    else
    {
      v8 = i + 1;
      if ( i )
      {
        v12 = CTouchDragVisualHelper::GetMidPoint(v53, (char *)v7 + 28 * i, (char *)v7 + 28 * v8);
        v13 = *(_OWORD *)v12;
        v14 = *(_QWORD *)(v12 + 16);
        v69 = *(_DWORD *)(v12 + 24);
        v10 = &v67;
        v67 = v13;
        v68 = v14;
      }
      else
      {
        v9 = *v7;
        v66 = *((_DWORD *)v7 + 6);
        v10 = &v64;
        v11 = *((_QWORD *)v7 + 2);
        v64 = v9;
        v65 = v11;
      }
      v15 = (__int128 *)*a1;
      v16 = 28LL * v8;
      v60 = *v10;
      v17 = *(__int128 *)((char *)v15 + v16);
      v59 = *(_DWORD *)((char *)v15 + v16 + 24);
      v58 = *(_QWORD *)((char *)v15 + v16 + 16);
      v57 = v17;
      if ( i + 3 <= v2 )
        v18 = (__int128 *)((char *)v15 + 28 * i + 56);
      else
        v18 = &v57;
      v19 = *v18;
      v20 = *((_QWORD *)v18 + 2);
      v21 = *((_DWORD *)v18 + 6);
      v54 = v19;
      v56 = v21;
      v55 = v20;
      v22 = CTouchDragVisualHelper::GetMidPoint(v53, &v57, &v54);
      i = v2;
      v23 = *(_OWORD *)v22;
      *(_QWORD *)&v19 = *(_QWORD *)(v22 + 16);
      LODWORD(v22) = *(_DWORD *)(v22 + 24);
      v61 = v23;
      v63 = v22;
      v62 = v19;
    }
    v40 = 0.0;
    v41 = (float)(v60 - v54);
    do
    {
      v42 = 1.0 - v40;
      HIDWORD(v64) = 1056964608;
      v43 = (float)(1.0 - v40) * 3.0;
      v44 = (float)(v40 * v40) * v40;
      v45 = (float)((float)(1.0 - v40) * v43) * v40;
      v46 = (float)(1.0 - v40) * (float)(v42 * v42);
      v47 = (float)(v43 * v40) * v40;
      v48 = (float)(*((float *)&v57 + 2) * v45) + (float)(*((float *)&v60 + 2) * v46);
      *((float *)&v64 + 1) = (float)((float)((float)(*((float *)&v57 + 1) * v45) + (float)(*((float *)&v60 + 1) * v46))
                                   + (float)(*((float *)&v61 + 1) * v47))
                           + (float)(*((float *)&v54 + 1) * v44);
      v49 = (float)((float)(v40 - 1.0) * 3.0) * (float)(1.0 - v40);
      *((float *)&v64 + 2) = (float)(v48 + (float)(*((float *)&v61 + 2) * v47)) + (float)(*((float *)&v54 + 2) * v44);
      v50 = (float)((float)((float)(v42 + v42) * v40) - (float)(v40 * v40)) * 3.0;
      v51 = (float)((float)((float)((float)(v40 - 1.0) + (float)(v40 - 1.0)) * v40) + (float)(v42 * v42)) * 3.0;
      v52 = (float)(v40 * 3.0) * v40;
      LODWORD(v65) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*((float *)&v57 + 2) * v51) + (float)(*((float *)&v60 + 2) * v49))
                             + (float)(*((float *)&v61 + 2) * v50))
                     + (float)(*((float *)&v54 + 2) * v52)) ^ _xmm;
      v66 = 0;
      *((float *)&v65 + 1) = (float)((float)((float)(*((float *)&v57 + 1) * v51) + (float)(*((float *)&v60 + 1) * v49))
                                   + (float)(*((float *)&v61 + 1) * v50))
                           + (float)(*((float *)&v54 + 1) * v52);
      CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v65);
      LODWORD(v64) = v54 + (int)(float)(v41 * (float)(1.0 - v40));
      result = DynArray<TOUCH_DRAG_POINT,0>::AddMultipleAndSet(a2, (__int64)&v64);
      v40 = v40 + 0.2;
    }
    while ( v40 < 1.0 );
  }
  return result;
}
