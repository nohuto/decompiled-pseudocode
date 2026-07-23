/*
 * XREFs of sub_1403A8E50 @ 0x1403A8E50
 * Callers:
 *     sub_1403A8ACC @ 0x1403A8ACC (sub_1403A8ACC.c)
 * Callees:
 *     sub_1403A8BCC @ 0x1403A8BCC (sub_1403A8BCC.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403A92C0 @ 0x1403A92C0 (sub_1403A92C0.c)
 *     sub_1403A96AC @ 0x1403A96AC (sub_1403A96AC.c)
 *     sub_1403A96CC @ 0x1403A96CC (sub_1403A96CC.c)
 *     sub_1403A9744 @ 0x1403A9744 (sub_1403A9744.c)
 *     sub_1403A9E80 @ 0x1403A9E80 (sub_1403A9E80.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A8E50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 **a6,
        int *a7,
        _QWORD *a8)
{
  bool v10; // bp
  _QWORD *v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r9d
  int v21; // r11d
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r10d
  int v26; // r9d
  int v27; // eax
  int v28; // ecx
  int v29; // edi
  int v30; // r12d
  int v31; // edi
  int v32; // r15d
  int v33; // eax
  __int64 *v34; // rsi
  __int64 *v35; // rbp
  unsigned int v36; // ebx
  __int64 v37; // rsi
  int v38; // r13d
  size_t v39; // rcx
  unsigned int v40; // r12d
  _BYTE *v41; // rbx
  signed int v42; // r10d
  __int64 v43; // rdx
  _BYTE *v44; // r9
  int i; // r8d
  _BYTE *v46; // rax
  char v47; // cl
  __int64 v48; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int v53; // r9d
  int v54; // r8d
  __int64 v55; // rdx
  signed int v56; // r11d
  signed int v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  signed int v61; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v62; // [rsp+38h] [rbp-70h] BYREF
  int v63; // [rsp+40h] [rbp-68h]
  int v64; // [rsp+44h] [rbp-64h]
  __int64 v65; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v66; // [rsp+50h] [rbp-58h]
  _DWORD v67[6]; // [rsp+58h] [rbp-50h] BYREF
  signed int v68; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v69; // [rsp+C0h] [rbp+18h] BYREF
  int v70; // [rsp+C8h] [rbp+20h]

  v70 = a4;
  v69 = 0;
  v68 = 0;
  v61 = 0;
  v62 = 0LL;
  v65 = 0LL;
  v10 = (a5 & 1) != 0;
  v11 = a8;
  v12 = sub_1403A9E80(a1, a2, *(unsigned __int16 *)(a1 + 24), (unsigned int)&v65, (__int64)&v69, (__int64)a8);
  v14 = v69;
  v15 = v12;
  if ( v12 < 0 )
    goto LABEL_33;
  v16 = sub_1403A96AC(*(unsigned int *)(a1 + 14), v13);
  v17 = *(unsigned int *)(a1 + 6);
  v70 = v16;
  v19 = sub_1403A96AC(v17, v18);
  v22 = v21 - v19 + 1;
  if ( v21 == v19 )
  {
    v58 = *(_DWORD *)(17LL * (v20 + 1) + a2 + 4);
    v59 = v58 >> 6;
    if ( v58 < 0 )
      v59 |= 0xFC000000;
    v22 = v59 + 1;
    if ( (v58 & 0x20) == 0 )
      v22 = v59;
    v70 = v22;
  }
  v23 = 17LL * (v20 + 1);
  v24 = 17LL * v20;
  v25 = *(_DWORD *)(v24 + a2);
  v26 = *(_DWORD *)(v24 + a2 + 8);
  v27 = *(_DWORD *)(v23 + a2) + *(_DWORD *)(v23 + a2 + 8) - v25 - v26;
  v28 = v27 >> 6;
  if ( v27 < 0 )
    v28 |= 0xFC000000;
  v29 = v28 + 1;
  v30 = 4 * v22;
  if ( (v27 & 0x20) == 0 )
    v29 = v28;
  v64 = 4 * v22;
  v31 = 4 * v29;
  v32 = v25 + v26;
  v63 = v31;
  v67[1] = 4 * v22;
  v67[0] = v31;
  v67[2] = v31;
  if ( v10 )
  {
    v34 = qword_140D83970;
    v66 = qword_140D83970;
    v15 = sub_1403A9744(v67, 1LL, qword_140D83970, 3140LL);
    if ( v15 < 0 )
      goto LABEL_33;
    goto LABEL_10;
  }
  v33 = sub_1403A96CC(v67, 1LL, &v62, v11);
  v34 = v62;
  v15 = v33;
  if ( v33 >= 0 )
  {
    v66 = v62;
LABEL_10:
    memset((void *)v34[3], 0, *((unsigned int *)v34 + 3));
    if ( !v65 )
    {
      v60 = v70;
      *a6 = v34;
      *a7 = v60;
      return 0LL;
    }
    if ( v10 )
    {
      if ( v31 <= 104 )
      {
        v35 = qword_140D837D0;
        goto LABEL_13;
      }
    }
    else
    {
      v35 = (__int64 *)sub_1403AA258(4LL * v31);
      if ( v35 )
      {
LABEL_13:
        v36 = 0;
        v37 = v31;
        v38 = 0;
        a5 = 0;
        if ( v30 > 0 )
        {
          v39 = 4LL * v31;
          LODWORD(v62) = v70 << 6;
          while ( 1 )
          {
            memset(v35, 0, v39);
            v40 = (_DWORD)v62 + -16 * (v38 & 3) - ((unsigned int)v38 >> 2 << 6);
            if ( (_DWORD)v14 )
              break;
LABEL_20:
            v43 = 0LL;
            v44 = (_BYTE *)(v66[3] + ((unsigned __int64)v36 >> 3));
            for ( i = 128 >> (v36 & 7); v43 < v37; v44 = v46 )
            {
              if ( *((_DWORD *)v35 + v43) )
                *v44 |= i;
              LOBYTE(i) = (unsigned __int8)i >> 1;
              v46 = v44 + 1;
              v47 = i;
              if ( !(_BYTE)i )
                LOBYTE(i) = 0x80;
              ++v43;
              if ( v47 )
                v46 = v44;
            }
            v36 += v31;
            v39 = 4 * v37;
            ++v38;
            a5 = v36;
            if ( v38 >= v64 )
              goto LABEL_29;
          }
          v41 = (_BYTE *)(v65 + 24);
          while ( 1 )
          {
            sub_1403A92C0(v41 - 24, v40, &v68, &v61);
            v42 = v68;
            if ( v68 != 0x7FFFFFFF )
              break;
LABEL_18:
            v41 += 25;
            if ( !--v14 )
            {
              v36 = a5;
              v14 = v69;
              v31 = v63;
              goto LABEL_20;
            }
          }
          v50 = *((_QWORD *)v41 - 1);
          v51 = *(_DWORD *)(v50 + 12);
          v52 = v51
              + *(_DWORD *)(v50 + 4)
              - *(_DWORD *)(*((_QWORD *)v41 - 3) + 12LL)
              - *(_DWORD *)(*((_QWORD *)v41 - 3) + 4LL);
          if ( !v52 )
          {
            if ( *v41 == 1 )
              goto LABEL_60;
            v52 = v51
                + *(_DWORD *)(v50 + 4)
                - *(_DWORD *)(*((_QWORD *)v41 - 2) + 12LL)
                - *(_DWORD *)(*((_QWORD *)v41 - 2) + 4LL);
          }
          if ( v52 > 0 )
          {
            v53 = 1;
LABEL_39:
            v54 = 0;
            v55 = 0LL;
            if ( v37 <= 0 )
              goto LABEL_18;
            v56 = v61;
            while ( 1 )
            {
              v57 = v32 + ((16 * v54) & 0xFFFFFFC0) + 16 * (v54 & 3);
              if ( *v41 == 1 )
                break;
              if ( v56 != 0x7FFFFFFF )
              {
                if ( v57 < v42 || v57 > v56 )
                  goto LABEL_45;
LABEL_44:
                *((_DWORD *)v35 + v55) += v53;
                goto LABEL_45;
              }
              if ( v57 <= v42 )
                goto LABEL_44;
LABEL_45:
              ++v54;
              if ( ++v55 >= v37 )
                goto LABEL_18;
            }
            if ( v57 > v42 )
              goto LABEL_45;
            goto LABEL_44;
          }
          if ( v52 < 0 )
          {
            v53 = -1;
            goto LABEL_39;
          }
LABEL_60:
          v53 = 0;
          goto LABEL_39;
        }
LABEL_29:
        v15 = 0;
        *a6 = v66;
        *a7 = v70;
        v11 = a8;
        if ( v35 == qword_140D837D0 || *a8 )
          goto LABEL_33;
        v48 = (__int64)v35;
        goto LABEL_32;
      }
    }
    v15 = -1073741670;
  }
  if ( v34 && !*v11 )
  {
    v48 = (__int64)v34;
LABEL_32:
    sub_1403A8CB4(v48);
  }
LABEL_33:
  if ( v65 )
    sub_1403A8BCC(v65, v14, (__int64)v11);
  return (unsigned int)v15;
}
