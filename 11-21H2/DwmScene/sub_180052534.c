/*
 * XREFs of sub_180052534 @ 0x180052534
 * Callers:
 *     sub_1800523E0 @ 0x1800523E0 (sub_1800523E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o__fdclass @ 0x18000BF7A (_o__fdclass.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180014564 @ 0x180014564 (sub_180014564.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028554 @ 0x180028554 (sub_180028554.c)
 *     GsDriverEntry @ 0x18004247C (GsDriverEntry.c)
 *     sub_18004EAA0 @ 0x18004EAA0 (sub_18004EAA0.c)
 *     sub_18004EBF0 @ 0x18004EBF0 (sub_18004EBF0.c)
 *     sub_18004EC70 @ 0x18004EC70 (sub_18004EC70.c)
 *     sub_180050654 @ 0x180050654 (sub_180050654.c)
 *     sub_180050984 @ 0x180050984 (sub_180050984.c)
 *     sub_1800509A0 @ 0x1800509A0 (sub_1800509A0.c)
 *     sub_18007B520 @ 0x18007B520 (sub_18007B520.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180052534(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10,
        char a11)
{
  float v14; // xmm0_4
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  char v18; // al
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  const char *v22; // r8
  __int64 v23; // rdx
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r9
  signed int v30; // r15d
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rdx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  __int64 v36; // rsi
  __int64 v37; // rdx
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  __int64 *v40; // rax
  __int64 v41; // rcx
  char v42; // r14
  float v43; // xmm6_4
  const char *v44; // r8
  unsigned __int64 **v45; // rax
  __int64 v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+28h] [rbp-E0h]
  __int64 v49; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h]
  __int64 v55; // [rsp+60h] [rbp-A8h]
  __int128 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+78h] [rbp-90h] BYREF
  __int128 v58; // [rsp+88h] [rbp-80h] BYREF
  __int128 v59; // [rsp+98h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-58h]
  __int128 v62; // [rsp+B8h] [rbp-50h]
  __int128 v63; // [rsp+C8h] [rbp-40h]
  __int128 v64; // [rsp+D8h] [rbp-30h]
  _QWORD v65[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v66[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v67; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v68[2]; // [rsp+128h] [rbp+20h] BYREF
  char *v69[3]; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v70; // [rsp+150h] [rbp+48h]
  char *v71[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v72; // [rsp+170h] [rbp+68h]

  v66[2] = a2;
  v49 = a3;
  v66[3] = a5;
  LODWORD(v47) = 0;
  v60 = *(_QWORD *)a8;
  v61 = *(_QWORD *)(a8 + 8);
  v62 = *(_OWORD *)(a8 + 16);
  v63 = *(_OWORD *)(a8 + 32);
  v64 = *(_OWORD *)(a8 + 48);
  v14 = *(float *)&v60;
  v15 = 1LL;
  v16 = 15LL;
  do
  {
    v14 = v14 + *((float *)&v60 + v15++);
    --v16;
  }
  while ( v16 );
  v17 = (__int16)o__fdclass();
  if ( *((float *)&v61 + 1) != 0.0
    || *((float *)&v62 + 3) != 0.0
    || *((float *)&v63 + 3) != 0.0
    || (v18 = 1, *((float *)&v64 + 3) != 1.0) )
  {
    v18 = 0;
  }
  if ( v17 > 0 || !v18 )
  {
    v60 = 1065353216LL;
    v61 = 0LL;
    v62 = xmmword_1801289E0;
    v63 = xmmword_1801289F0;
    v64 = xmmword_180128A00;
    v69[2] = 0LL;
    v70 = 15LL;
    LOBYTE(v69[0]) = 0;
    sub_180012190(
      (__int64 *)v69,
      "LOADED TRANSFORM IS NOT VALID Node ID=%.16X has a transform that is non-affine or not finite. Elements of the matr"
      "ix are either NaN or infinite. The matrix has been set to identity ",
      0xB5uLL);
    v56 = 0LL;
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 8);
      while ( v20 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20);
        if ( v21 == v20 )
        {
          v56 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v22 = (const char *)v69;
    if ( v70 >= 0x10 )
      v22 = v69[0];
    sub_18001F2B4(&stru_1801EA308, 4, v22, *(_QWORD *)(v56 + 368), 0, v49);
    sub_180010910((__int64)&v56);
    if ( v70 >= 0x10 )
      sub_180010884(v69[0], v70 + 1);
  }
  v57 = 0LL;
  v23 = *(_QWORD *)(a1 + 64);
  if ( v23 )
  {
    v24 = *(_DWORD *)(v23 + 8);
    while ( v24 )
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 8), v24 + 1, v24);
      if ( v25 == v24 )
      {
        v57 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  GsDriverEntry(v57, (__int64)&v60);
  sub_180010910((__int64)&v57);
  v26 = sub_180028554(v49);
  v27 = sub_18007B520(v26, a6, a4);
  v50 = a1;
  v28 = sub_18001D684();
  if ( v28 )
  {
    *(_DWORD *)(v28 + 8) = 1;
    *(_DWORD *)(v28 + 12) = 1;
    *(_QWORD *)v28 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    sub_1800509A0((_QWORD *)(v28 + 16), &v50, &v49);
  }
  else
  {
    v29 = 0LL;
  }
  v65[0] = v29 + 16;
  v65[1] = v29;
  v67 = 0LL;
  sub_18007B774(v26, a2, v27, v65, v47, v49, v50, v51, v52, v53, v54, v55);
  LODWORD(v48) = 1;
  sub_180010910((__int64)&v67);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v30 = sub_18004EC70(*a5);
    v32 = sub_18004EAA0(v31);
    sub_18001F2B4(&stru_1801EA308, 3, "MeshInstance: Vertex count %u", v30);
    sub_18001F2B4(&stru_1801EA308, 3, "MeshInstance: Index count  %u", v32);
    sub_18001F2B4(&stru_1801EA308, 3, "MeshInstance: Index per Vertex count %f", (float)((float)v32 / (float)v30), v48);
    if ( v30 )
    {
      v58 = 0LL;
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_DWORD *)(v33 + 8);
        while ( v34 )
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 8), v34 + 1, v34);
          if ( v35 == v34 )
          {
            v58 = *(_OWORD *)(a1 + 56);
            break;
          }
        }
      }
      sub_18001483C(v58, &v51);
      sub_180010910((__int64)&v58);
      v36 = v51;
      if ( !v51 )
      {
        v59 = 0LL;
        v37 = *(_QWORD *)(a1 + 64);
        if ( v37 )
        {
          v38 = *(_DWORD *)(v37 + 8);
          while ( v38 )
          {
            v39 = v38;
            v38 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 8), v38 + 1, v38);
            if ( v39 == v38 )
            {
              v59 = *(_OWORD *)(a1 + 56);
              break;
            }
          }
        }
        v40 = sub_180014564(v59, v68);
        v36 = *v40;
        v41 = v40[1];
        *v40 = 0LL;
        v40[1] = 0LL;
        v66[0] = 0LL;
        v51 = v36;
        v66[1] = v52;
        v52 = v41;
        sub_180010910((__int64)v66);
        sub_180010910((__int64)v68);
        sub_180010910((__int64)&v59);
      }
      v42 = a11;
      if ( !a11 )
        goto LABEL_58;
      v43 = *(float *)a10;
      if ( (__int16)o__fdclass() > 0 || (__int16)o__fdclass() > 0 )
      {
        v71[2] = 0LL;
        v72 = 15LL;
        LOBYTE(v71[0]) = 0;
        sub_180012190(
          (__int64 *)v71,
          "LOADED BOUNDS ARE NOT FINITE! Node ID=%.16X has a bounding box that is not finite. Elements of the bounding bo"
          "x are either NaN or infinite The Bounding will be recalculated.",
          0xADuLL);
        v44 = (const char *)v71;
        if ( v72 >= 0x10 )
          v44 = v71[0];
        sub_18001F2B4(&stru_1801EA308, 4, v44, a7);
        v42 = 0;
        if ( v72 >= 0x10 )
          sub_180010884(v71[0], v72 + 1);
        v43 = *(float *)a10;
      }
      if ( v43 == 0.0 && *(float *)(a10 + 4) == 0.0 && *(float *)(a10 + 8) == 0.0 || !v42 )
      {
LABEL_58:
        v45 = (unsigned __int64 **)sub_18004EBF0(*a5, &v53, 0);
        sub_180050654(v36, v45, v30);
        sub_180010910((__int64)&v53);
      }
      else
      {
        v53 = *a9;
        LODWORD(v54) = *((_DWORD *)a9 + 2);
        *((float *)&v54 + 1) = v43;
        v55 = *(_QWORD *)(a10 + 4);
        sub_180050984(v36, (__int64)&v53);
      }
      sub_180010910((__int64)&v51);
    }
  }
  sub_180010910((__int64)a5);
  return a2;
}
