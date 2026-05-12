/*
 * XREFs of sub_1C0017CC0 @ 0x1C0017CC0
 * Callers:
 *     sub_1C0016C84 @ 0x1C0016C84 (sub_1C0016C84.c)
 *     sub_1C00173C4 @ 0x1C00173C4 (sub_1C00173C4.c)
 * Callees:
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C00181C8 @ 0x1C00181C8 (sub_1C00181C8.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003F448 @ 0x1C003F448 (sub_1C003F448.c)
 *     sub_1C003F4CC @ 0x1C003F4CC (sub_1C003F4CC.c)
 */

__int64 __fastcall sub_1C0017CC0(_QWORD *a1, __int64 a2, PIRP *a3, __int128 *a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v7; // si
  char v8; // r14
  PIRP *v9; // r10
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // r13
  PIRP v13; // r9
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  char *v26; // rax
  __int64 v27; // xmm0_8
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  char v33; // al
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rax
  __int64 result; // rax
  int v46; // eax
  int v47; // ebx
  unsigned __int8 v48; // cl
  _BYTE *v49; // r9
  int v50; // edx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int Status; // edx
  int v54; // ebx
  _BYTE *v56; // rcx
  _BYTE *v57; // rax
  char v58; // r14
  const char *v59; // r10
  PIRP Irp; // [rsp+50h] [rbp-B0h]
  _BYTE *v61; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  __int128 v64; // [rsp+70h] [rbp-90h]
  __int128 v65; // [rsp+80h] [rbp-80h]
  __int128 v66; // [rsp+90h] [rbp-70h]
  __int128 v67; // [rsp+A0h] [rbp-60h]
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int128 Dst; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-30h]
  __int128 v71; // [rsp+E0h] [rbp-20h]
  __int128 v72; // [rsp+F0h] [rbp-10h]
  __int128 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int128 v75; // [rsp+120h] [rbp+20h]
  __int128 v76; // [rsp+130h] [rbp+30h]
  __int128 v77; // [rsp+140h] [rbp+40h]
  __int128 v78; // [rsp+150h] [rbp+50h]
  __int128 v79; // [rsp+160h] [rbp+60h]
  __int128 v80; // [rsp+170h] [rbp+70h]
  __int128 v81; // [rsp+180h] [rbp+80h]
  __int128 v82; // [rsp+190h] [rbp+90h]
  __int128 v83; // [rsp+1A0h] [rbp+A0h]
  __int128 v84; // [rsp+1B0h] [rbp+B0h]
  __int128 v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1D0h] [rbp+D0h]
  char v88; // [rsp+238h] [rbp+138h]
  int v90; // [rsp+248h] [rbp+148h]

  v5 = *(_QWORD *)(a2 + 8);
  v61 = 0LL;
  v90 = 2;
  a5 = 0;
  v7 = 0;
  v8 = 0;
  memset_0(&Dst, 0, 0x58uLL);
  v9 = a3;
  v10 = 0;
  v11 = 0;
  v88 = 0;
  v12 = 0;
  v63 = v5;
  v13 = *a3;
  Irp = *a3;
  if ( *((_BYTE *)a4 + 2) != 40 )
  {
    v32 = *a4;
    v10 = *((_BYTE *)a4 + 5);
    v31 = a4[1];
    v11 = *((_BYTE *)a4 + 6);
    v30 = a4[2];
    v12 = *((_BYTE *)a4 + 7);
    v29 = a4[3];
    v33 = *((_BYTE *)a4 + 72);
    v28 = a4[4];
    v27 = *((_QWORD *)a4 + 10);
    v68 = *a4;
    v67 = v31;
    v66 = v30;
    v65 = v29;
    v64 = v28;
    v62 = v27;
    goto LABEL_6;
  }
  v14 = *((_QWORD *)a4 + 22);
  v15 = a4[1];
  v75 = *a4;
  v16 = a4[2];
  v76 = v15;
  v17 = a4[3];
  v77 = v16;
  v18 = a4[4];
  v78 = v17;
  v19 = a4[5];
  v79 = v18;
  v20 = a4[6];
  v80 = v19;
  v21 = a4[7];
  v81 = v20;
  v22 = a4[8];
  v82 = v21;
  v23 = a4[9];
  v83 = v22;
  v24 = a4[10];
  v84 = v23;
  v85 = v24;
  v86 = v14;
  v25 = (__int64)a4 + *((unsigned int *)a4 + 13);
  if ( *(_WORD *)v25 == 1 )
  {
    v10 = *(_BYTE *)(v25 + 8);
    v11 = *(_BYTE *)(v25 + 9);
    v12 = *(_BYTE *)(v25 + 10);
  }
  v26 = (char *)sub_1C0018028((_DWORD)a4, 0, 0, 0, 0LL, 0LL);
  v27 = v74;
  v28 = v73;
  v29 = v72;
  v30 = v71;
  v31 = v70;
  v32 = Dst;
  v13 = Irp;
  v9 = a3;
  v62 = v74;
  v64 = v73;
  v65 = v72;
  v66 = v71;
  v67 = v70;
  v68 = Dst;
  if ( v26 )
  {
    v33 = *v26;
LABEL_6:
    v88 = v33;
    goto LABEL_7;
  }
  while ( 1 )
  {
LABEL_7:
    if ( *((_BYTE *)a4 + 2) == 40 )
    {
      v34 = v76;
      *a4 = v75;
      v35 = v77;
      a4[1] = v34;
      v36 = v78;
      a4[2] = v35;
      v37 = v79;
      a4[3] = v36;
      v38 = v80;
      a4[4] = v37;
      v39 = v81;
      a4[5] = v38;
      v40 = v82;
      a4[6] = v39;
      v41 = v83;
      a4[7] = v40;
      v42 = v84;
      a4[8] = v41;
      v43 = v85;
      v44 = v86;
      a4[9] = v42;
      a4[10] = v43;
      *((_QWORD *)a4 + 22) = v44;
    }
    else
    {
      *a4 = v32;
      a4[1] = v31;
      a4[2] = v30;
      a4[3] = v29;
      a4[4] = v28;
      *((_QWORD *)a4 + 10) = v27;
    }
    result = sub_1C00181C8(v13, v9[1], a4);
    if ( (int)result < 0 )
      return result;
    v46 = *(_DWORD *)(v5 + 1320);
    if ( *((_BYTE *)a4 + 2) == 40 )
      *((_DWORD *)a4 + 10) = v46;
    else
      *((_DWORD *)a4 + 5) = v46;
    v47 = sub_1C0018124(*(PDEVICE_OBJECT *)(v5 + 8), Irp);
    if ( v47 < 0 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003F448(off_1C0093070->AttachedDevice, v11, v10, *a1, v10, v11, v12, v47);
      }
      return (unsigned int)v47;
    }
    if ( *((_BYTE *)a4 + 2) == 40 )
    {
      sub_1C0018028((_DWORD)a4, 0, 0, 0, (__int64)&v61, (__int64)&a5);
      v48 = a5;
      v49 = v61;
    }
    else
    {
      v49 = (_BYTE *)*((_QWORD *)a4 + 4);
      v48 = *((_BYTE *)a4 + 11);
      v61 = v49;
      a5 = v48;
    }
    v50 = *((unsigned __int8 *)a4 + 3);
    if ( (v50 & 0x80u) != 0 )
    {
      if ( v49 )
      {
        v7 = 0;
        if ( v48 )
        {
          v56 = &v49[v48];
          v57 = v49 + 8;
          if ( (unsigned __int8)((*v49 & 0x7F) - 114) <= 1u )
          {
            if ( v57 > v56 )
              goto LABEL_16;
            v58 = v49[1];
          }
          else
          {
            if ( v57 > v56 )
              goto LABEL_16;
            v58 = v49[2];
          }
          v7 = 1;
          v8 = v58 & 0xF;
        }
      }
    }
LABEL_16:
    v51 = v50 & 0xFFFFFF3F;
    if ( (unsigned int)v51 <= 0x21 && (v52 = 0x300000580LL, _bittest64(&v52, v51)) || v7 && v8 == 5 )
    {
      Status = -1073741810;
LABEL_28:
      v13 = Irp;
      goto LABEL_22;
    }
    v13 = Irp;
    if ( (_BYTE)v50 != 18 )
    {
      Status = Irp->IoStatus.Status;
      v54 = Status;
      if ( Status >= 0
        || Status == -1073741808
        || Status == -1073741810
        || off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
        || (HIDWORD(off_1C0093070->Timer) & 0x4000) == 0
        || BYTE1(off_1C0093070->Timer) < 4u )
      {
        goto LABEL_22;
      }
      v59 = "retried";
      if ( !v90 )
        v59 = "not retried";
      sub_1C003F4CC(off_1C0093070->AttachedDevice, v12, v11, *a1, v10, v11, v12, v88, *((_BYTE *)a4 + 3), (__int64)v59);
      Status = v54;
      goto LABEL_28;
    }
    Status = 0;
    *((_BYTE *)a4 + 3) = 1;
LABEL_22:
    if ( v90-- )
    {
      if ( Status < 0 )
      {
        v27 = v62;
        v5 = v63;
        v9 = a3;
        v28 = v64;
        v29 = v65;
        v30 = v66;
        v31 = v67;
        v32 = v68;
        if ( Status != -1073741810 )
          continue;
      }
    }
    return (unsigned int)Status;
  }
}
