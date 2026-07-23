/*
 * XREFs of sub_14030A6F0 @ 0x14030A6F0
 * Callers:
 *     sub_14030A3C0 @ 0x14030A3C0 (sub_14030A3C0.c)
 *     sub_14056C984 @ 0x14056C984 (sub_14056C984.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14030A6F0(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r10
  char v6; // bl
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned __int64 v14; // r9
  unsigned int v15; // esi
  __int64 v16; // rbp
  __int64 *v17; // rdi
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rbx
  __int64 v21; // r10
  unsigned __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // esi
  __int64 v29; // rbp
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // rbx
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // r11
  _QWORD *v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // r9
  __int64 v44; // r11
  unsigned __int64 v45; // rdi
  unsigned __int16 v46; // r9
  unsigned __int64 v47; // r11
  unsigned __int64 v48; // r10
  __int64 v49; // rbx
  unsigned __int64 v50; // r8
  _QWORD *v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // [rsp+0h] [rbp-78h]
  int v56; // [rsp+4h] [rbp-74h]
  unsigned int v57; // [rsp+8h] [rbp-70h]
  unsigned int v58; // [rsp+Ch] [rbp-6Ch]
  __int64 v59; // [rsp+18h] [rbp-60h]
  unsigned __int64 v60; // [rsp+20h] [rbp-58h]

  v4 = -1;
  v5 = -1LL;
  v6 = a3;
  v59 = -1LL;
  v7 = a4;
  v55 = -1;
  v8 = a2;
  v9 = a1;
  v10 = -1;
  if ( dword_140D06A20 || dword_140D06984 != DesiredTime )
  {
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v11 = 1;
    v12 = -1;
  }
  v56 = v12;
  v13 = (unsigned __int8)(v8 >> 18);
  v58 = v13;
  v57 = v11;
  while ( 2 )
  {
    v14 = -1LL;
    v60 = -1LL;
    v15 = v13;
    if ( dword_140D05038 )
    {
      if ( !v6 )
        goto LABEL_25;
      v29 = v11;
      v30 = *(_DWORD *)(qword_140D088C0[0] + 4LL * v11 + 32272);
      v31 = (unsigned __int8)(v13 - v30);
      if ( v31 > 1 )
        return 0LL;
      v32 = qword_140D088C0[0] + (v29 << 13);
      v33 = (unsigned __int8)v30;
      v34 = (v8 & 0xFFFFFFFFFFFC0000uLL) - (v31 << 18) + 0x4000000;
      v4 = 0;
LABEL_37:
      v35 = v14;
      v36 = (unsigned int)v33;
      v37 = qword_140D07E90[0] - 1;
      if ( (unsigned __int64)(unsigned int)v33 >= qword_140D07E90[0] )
        v36 = 0LL;
      while ( 1 )
      {
        if ( v37 - v36 == -1LL )
        {
          LODWORD(v40) = -1;
        }
        else
        {
          v38 = (_QWORD *)(qword_140D07E98[0] + 8 * (v36 >> 6));
          v39 = ((1LL << (v36 & 0x3F)) - 1) | ~*v38;
          if ( v39 == -1 )
          {
            while ( (unsigned __int64)++v38 <= qword_140D07E98[0] + 8 * (v37 >> 6) )
            {
              v39 = ~*v38;
              if ( *v38 )
                goto LABEL_41;
            }
LABEL_65:
            LODWORD(v40) = -1;
            goto LABEL_66;
          }
LABEL_41:
          _BitScanForward64((unsigned __int64 *)&v39, ~v39);
          v40 = v39 + (((__int64)v38 - qword_140D07E98[0]) >> 3 << 6);
          if ( v40 > v37 )
            goto LABEL_65;
          if ( v40 != -1LL )
            goto LABEL_43;
        }
LABEL_66:
        if ( !v36 )
        {
LABEL_43:
          v14 = v60;
          if ( (_DWORD)v40 == -1 )
            goto LABEL_58;
          v4 += (unsigned __int8)(v40 - v33 + 1);
          if ( v4 > v55 || v4 > 0x100 )
            goto LABEL_58;
          v41 = *(_QWORD *)(32LL * (unsigned int)v40 + v32 + 15896);
          if ( HIDWORD(v41) == -1 || v41 >= v60 )
            goto LABEL_47;
          if ( v41 >= v34 )
          {
            v14 = *(_QWORD *)(32LL * (unsigned int)v40 + v32 + 15896);
            v60 = v14;
LABEL_47:
            v33 = (unsigned __int8)(v40 + 1);
            goto LABEL_37;
          }
          v42 = (unsigned __int8)(v41 >> 18);
          if ( v42 == (_DWORD)v40 )
          {
            v14 = *(_QWORD *)(32LL * (unsigned int)v40 + v32 + 15896);
LABEL_58:
            v8 = a2;
            goto LABEL_23;
          }
          v33 = (unsigned __int8)(v40 + 1);
          v14 = (v41 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v40 - v42) << 18) & 0x3FC0000);
          if ( v14 >= v35 )
            v14 = v35;
          v60 = v14;
          goto LABEL_37;
        }
        v44 = v33 + 1;
        if ( (unsigned __int64)(v33 + 1) > qword_140D07E90[0] )
          v44 = qword_140D07E90[0];
        v37 = v44 - 1;
        v36 = 0LL;
      }
    }
    if ( v13 != (unsigned __int8)*(_DWORD *)(v9 + 4LL * v11 + 32272) )
      return 0LL;
    if ( v6 )
    {
      v4 = -1;
      v45 = v13 << 9;
      v46 = 0;
      while ( 1 )
      {
        v47 = qword_140D07E90[2 * v46];
        if ( v45 >= v47 )
          v48 = 0LL;
        else
          v48 = v15 << 9;
        v49 = qword_140D07E90[2 * v46 + 1];
        v50 = v47 - 1;
        while ( 1 )
        {
          if ( v50 - v48 == -1LL )
            goto LABEL_91;
          v51 = (_QWORD *)(v49 + 8 * (v48 >> 6));
          v52 = ~*v51;
          if ( !*v51 )
          {
            while ( (unsigned __int64)++v51 <= v49 + 8 * (v50 >> 6) )
            {
              v52 = ~*v51;
              if ( *v51 )
                goto LABEL_80;
            }
LABEL_91:
            LODWORD(v53) = -1;
            goto LABEL_92;
          }
LABEL_80:
          _BitScanForward64((unsigned __int64 *)&v52, ~v52);
          v53 = v52 + (((__int64)v51 - v49) >> 3 << 6);
          if ( v53 > v50 )
          {
            LODWORD(v53) = -1;
          }
          else if ( v53 != -1LL )
          {
            break;
          }
LABEL_92:
          if ( !v48 )
            break;
          v54 = v45 + 1;
          if ( v45 + 1 > v47 )
            v54 = qword_140D07E90[2 * v46];
          v50 = v54 - 1;
          v48 = 0LL;
        }
        if ( (_DWORD)v53 != -1 && (unsigned __int8)(((unsigned int)v53 >> 9) - v15) < v4 )
          v4 = (unsigned __int8)(((unsigned int)v53 >> 9) - v15);
        if ( ++v46 >= (unsigned __int16)word_140D05014 )
        {
          v10 = v55;
          v5 = v59;
          v9 = a1;
          v6 = a3;
          v7 = a4;
          if ( v4 == -1 )
            v14 = -1LL;
          else
            v14 = (unsigned int)dword_140D06984 + (v8 & 0xFFFFFFFFFFFC0000uLL) + (v4 << 18);
          goto LABEL_24;
        }
      }
    }
    v16 = *(_QWORD *)(v9 + 200);
    v4 = 0;
    v17 = &qword_140D07E90[2 * *(unsigned __int8 *)(v9 + 208)];
    while ( 2 )
    {
      v18 = *v17;
      v19 = (unsigned __int64)v15 << 9;
      if ( v19 >= *v17 )
        v20 = 0LL;
      else
        v20 = (unsigned __int64)v15 << 9;
      v21 = v17[1];
      v22 = v18 - 1;
      while ( 1 )
      {
        if ( v22 - v20 == -1LL )
          goto LABEL_59;
        v23 = (_QWORD *)(v21 + 8 * (v20 >> 6));
        v24 = ~*v23;
        if ( !*v23 )
        {
          while ( (unsigned __int64)++v23 <= v21 + 8 * (v22 >> 6) )
          {
            v24 = ~*v23;
            if ( *v23 )
              goto LABEL_13;
          }
LABEL_59:
          LODWORD(v25) = -1;
          goto LABEL_60;
        }
LABEL_13:
        _BitScanForward64((unsigned __int64 *)&v24, ~v24);
        v25 = v24 + (((__int64)v23 - v21) >> 3 << 6);
        if ( v25 > v22 )
        {
          LODWORD(v25) = -1;
        }
        else if ( v25 != -1LL )
        {
          break;
        }
LABEL_60:
        if ( !v20 )
          break;
        v43 = v19 + 1;
        if ( v19 + 1 > v18 )
          v43 = *v17;
        v22 = v43 - 1;
        v20 = 0LL;
      }
      if ( (_DWORD)v25 == -1 || (v26 = (unsigned int)v25 >> 9, v4 += (unsigned __int8)(v26 - v15), v4 > 0x100) )
      {
        v14 = -1LL;
      }
      else
      {
        if ( (*(_QWORD *)(((unsigned __int64)v26 << 6) + v17[1]) & v16) == 0 )
        {
          v15 = (unsigned __int8)(v26 + 1);
          continue;
        }
        v14 = (unsigned int)dword_140D06984 + (v8 & 0xFFFFFFFFFFFC0000uLL) + (v4 << 18);
      }
      break;
    }
LABEL_23:
    v10 = v55;
    v5 = v59;
    v9 = a1;
    v6 = a3;
    v7 = a4;
LABEL_24:
    v12 = v56;
LABEL_25:
    if ( v57 )
    {
      *v7 = v14;
    }
    else
    {
      v5 = v14;
      v59 = v14;
    }
    if ( v14 != -1LL && v10 >= v4 + 1 )
    {
      v10 = v4 + 1;
      v55 = v4 + 1;
    }
    v27 = v12 + v57;
    v57 = v27;
    if ( v27 < 2 )
    {
      v13 = v58;
      v11 = v27;
      continue;
    }
    return v5;
  }
}
