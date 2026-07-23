/*
 * XREFs of sub_14095FD08 @ 0x14095FD08
 * Callers:
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_1403C1214 @ 0x1403C1214 (sub_1403C1214.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140573A60 @ 0x140573A60 (sub_140573A60.c)
 */

__int64 __fastcall sub_14095FD08(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // r14d
  int v7; // ebp
  __int64 v8; // rax
  char v9; // al
  int v10; // r15d
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned __int16 *v13; // r14
  unsigned int v14; // ebp
  unsigned __int8 v15; // di
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // r9
  unsigned int v19; // r12d
  __int64 v20; // r11
  __int64 *v21; // rbp
  unsigned __int8 v22; // si
  unsigned __int8 v23; // r14
  unsigned __int8 *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r11
  unsigned __int8 *v28; // rcx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // al
  unsigned __int8 v32; // al
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // cl
  unsigned __int8 *v39; // r12
  unsigned __int16 v40; // ax
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r9
  __int16 v43; // ax
  __int64 v44; // r10
  char v45; // r11
  unsigned int i; // edi
  unsigned int v47; // edi
  unsigned __int16 *v48; // rcx
  __int64 v49; // r12
  unsigned __int8 *v50; // rbp
  unsigned __int8 v51; // al
  unsigned __int16 *v52; // rcx
  unsigned __int8 v53; // al
  int v54; // eax
  unsigned int v55; // edi
  unsigned __int8 v57; // [rsp+20h] [rbp-98h]
  char v58; // [rsp+23h] [rbp-95h]
  unsigned __int16 v59; // [rsp+24h] [rbp-94h]
  unsigned __int8 v60; // [rsp+28h] [rbp-90h]
  unsigned int v61; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v62; // [rsp+30h] [rbp-88h]
  int v63; // [rsp+34h] [rbp-84h]
  int v64; // [rsp+38h] [rbp-80h]
  unsigned __int8 *v65; // [rsp+40h] [rbp-78h]
  __int64 v66; // [rsp+48h] [rbp-70h]
  __int64 v67; // [rsp+50h] [rbp-68h]
  __int64 v68; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v69; // [rsp+60h] [rbp-58h]
  unsigned __int8 v73; // [rsp+D8h] [rbp+20h]

  v3 = qword_140C2BD60;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = dword_140D0509C;
  v7 = dword_140D068FC;
  v8 = *(unsigned int *)(qword_140C2BD60 + 20);
  *(_QWORD *)qword_140C2BD60 = a1;
  *(_DWORD *)(v3 + 8) = a2;
  v66 = v3;
  v64 = v6;
  v63 = v7;
  v62 = v5;
  *(_QWORD *)(v3 + 12) = 0LL;
  memset((void *)(v3 + 24), 0, 1320 * v8);
  v59 = 0;
  v9 = 0;
  v58 = 0;
  v10 = 0;
  if ( v5 )
  {
    v68 = 0LL;
    v11 = v3 + 292;
    v65 = (unsigned __int8 *)&unk_140D05394;
    v67 = v3 + 292;
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (unsigned __int16 *)(v11 - 268);
      *(_WORD *)(v11 - 266) = 32;
      v69 = v13;
      *v13 = 1;
      *(_DWORD *)(v11 - 264) = 0;
      memset((void *)(v11 - 260), 0, 0x100uLL);
      *(_QWORD *)(v11 - 4) = 2097153LL;
      memset((void *)(v11 + 4), 0, 0x100uLL);
      *(_QWORD *)(v11 + 260) = 2097153LL;
      memset((void *)(v11 + 268), 0, 0x100uLL);
      *(_QWORD *)(v11 + 524) = 2097153LL;
      memset((void *)(v11 + 532), 0, 0x100uLL);
      *(_QWORD *)(v11 + 788) = 2097153LL;
      memset((void *)(v11 + 796), 0, 0x100uLL);
      v14 = dword_140D06884;
      v60 = 0;
      v15 = 0;
      v61 = dword_140D06884;
      v16 = 0;
      v73 = 0;
      v17 = 0;
      v57 = 0;
      v18 = 0;
      v19 = 0;
      if ( (_DWORD)dword_140D06884 )
      {
        v20 = a1;
        v21 = qword_140D088C0;
        v22 = 0;
        v23 = 0;
        v24 = *(unsigned __int8 **)(a1 + 8);
        do
        {
          v25 = v10 + v62 * v19 + 8LL;
          v26 = v20 + 2 * v25;
          v27 = *(_QWORD *)(*v21 + 34128);
          v28 = (unsigned __int8 *)(v26 + v25);
          v29 = v28[1];
          v30 = *v28;
          if ( v29 <= v60 )
            v29 = v60;
          v60 = v29;
          v31 = v57;
          if ( v30 > v57 )
            v31 = v30;
          v57 = v31;
          v32 = v73;
          if ( *v24 > v73 )
            v32 = *v24;
          v73 = v32;
          if ( v27 )
          {
            v33 = *(_BYTE *)(v27 + 4LL * (unsigned __int8)v10 + 6);
            v34 = v33;
            if ( v33 && (!v16 || v16 > v33) )
            {
              v16 = *(_BYTE *)(v27 + 4LL * (unsigned __int8)v10 + 6);
              v34 = v16;
            }
          }
          else
          {
            v34 = 0;
          }
          v35 = v22;
          if ( v34 > v22 )
            v35 = v34;
          v22 = v35;
          if ( v27 )
          {
            v36 = *(_BYTE *)(v27 + 4LL * (unsigned __int8)v10 + 7);
            v37 = v36;
            if ( v36 && (!v18 || v18 > v36) )
            {
              v18 = *(_BYTE *)(v27 + 4LL * (unsigned __int8)v10 + 7);
              v37 = v18;
            }
          }
          else
          {
            v37 = 0;
          }
          v20 = a1;
          v38 = v23;
          if ( v37 > v23 )
            v38 = v37;
          ++v19;
          ++v24;
          ++v21;
          v23 = v38;
        }
        while ( v19 < (unsigned int)dword_140D06884 );
        v13 = v69;
        v12 = v68;
        v14 = dword_140D06884;
        v15 = v57;
        v17 = v22;
        v3 = v66;
      }
      v39 = v65;
      *(v65 - 8) = v16;
      *v65 = v18;
      v40 = sub_140573A60(v17, v16);
      *(_WORD *)((char *)&unk_140D053AC + v12 - 16) = v40;
      if ( v40 > v59 )
      {
        v59 = v40;
        v58 = v10;
      }
      v43 = sub_140573A60(v41, v42);
      *(_WORD *)(v44 + v12) = v43;
      if ( v45 || v15 )
        break;
      for ( i = 0; i < v14; ++i )
        KeAddProcessorAffinityEx(v13, i);
      sub_140300030((__int64)(v13 + 132), v13[133], v13);
      sub_140300030((__int64)(v13 + 264), v13[265], v13);
      sub_140300030((__int64)(v13 + 396), v13[397], v13);
      sub_140300030((__int64)(v13 + 528), v13[529], v13);
      *(_DWORD *)(v3 + 12) = a2;
      *(_DWORD *)(v3 + 16) = v73 != 0;
LABEL_54:
      v11 = v67 + 1320;
      v65 = v39 + 1;
      v12 += 2LL;
      v67 += 1320LL;
      v68 = v12;
      if ( ++v10 >= v62 )
      {
        v9 = v58;
        v7 = v63;
        v6 = v64;
        goto LABEL_56;
      }
    }
    *(_DWORD *)(v3 + 16) = 1;
    v47 = 0;
    if ( !v14 )
      goto LABEL_54;
    v48 = v13 + 528;
    while ( 1 )
    {
      v49 = *(_QWORD *)(a1 + 16);
      v50 = (unsigned __int8 *)(a1 + 2 * (v10 + v62 * v47 + 8LL) + v10 + v62 * v47 + 8LL);
      if ( v50[1] >= *(_BYTE *)(v49 + v12 + 1) )
      {
        KeAddProcessorAffinityEx(v13, v47);
        if ( v50[1] == v60 )
          KeAddProcessorAffinityEx(v13 + 132, v47);
        v48 = v13 + 528;
      }
      if ( !v50[2] )
        KeAddProcessorAffinityEx(v48, v47);
      if ( v73 )
      {
        v53 = *(_BYTE *)(v49 + v12);
        dword_140D06C30 = 1;
        if ( *v50 < v53 )
          goto LABEL_52;
        KeAddProcessorAffinityEx(v13 + 264, v47);
        if ( *v50 != v57 )
          goto LABEL_52;
        v52 = v13 + 396;
      }
      else
      {
        v51 = *(_BYTE *)(v49 + v12 + 1);
        if ( v51 && v50[1] >= v51 )
          goto LABEL_52;
        KeAddProcessorAffinityEx(v13 + 264, v47);
        KeAddProcessorAffinityEx(v13 + 396, v47);
        v52 = v13 + 528;
      }
      KeAddProcessorAffinityEx(v52, v47);
LABEL_52:
      ++v47;
      v48 = v13 + 528;
      if ( v47 >= v61 )
      {
        v3 = v66;
        v39 = v65;
        goto LABEL_54;
      }
    }
  }
LABEL_56:
  byte_140D053BC = v9;
  KeGenericCallDpc((__int64)sub_140568D20, v3);
  v54 = dword_140D068FC;
  v55 = 0;
  *a3 = dword_140D068FC;
  for ( dword_140D0509C = v54 != 0 ? dword_140D05184 : 0; v55 < (unsigned int)dword_140D06884; ++v55 )
    sub_1403C1214(qword_140D088C0[v55]);
  if ( v6 != dword_140D0509C || v7 != dword_140D068FC )
    return 1;
  return v4;
}
