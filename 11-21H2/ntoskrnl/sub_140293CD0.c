/*
 * XREFs of sub_140293CD0 @ 0x140293CD0
 * Callers:
 *     sub_140293C40 @ 0x140293C40 (sub_140293C40.c)
 *     sub_1405D7FF0 @ 0x1405D7FF0 (sub_1405D7FF0.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405D837C @ 0x1405D837C (sub_1405D837C.c)
 */

__int16 __fastcall sub_140293CD0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, int a5, int a6, _DWORD *a7)
{
  unsigned int v7; // esi
  unsigned __int16 v8; // r10
  unsigned __int8 v10; // bl
  char v11; // di
  char v12; // r13
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  char v20; // r12
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // r14
  unsigned int v23; // ebx
  unsigned int v24; // esi
  bool v25; // zf
  unsigned __int16 v26; // r13
  int v27; // r11d
  unsigned __int64 v28; // rcx
  unsigned int v29; // r11d
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  unsigned int v34; // eax
  unsigned int v35; // r10d
  int v36; // r9d
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // rbx
  _DWORD *v43; // rax
  unsigned int v44; // edx
  int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // r9
  unsigned __int8 v49; // cl
  unsigned int v50; // eax
  int v51; // edi
  __int64 v52; // rax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // rax
  __int64 v58; // [rsp+20h] [rbp-28h]
  __int64 v59; // [rsp+28h] [rbp-20h] BYREF
  __int64 v60; // [rsp+30h] [rbp-18h]
  unsigned __int16 v61; // [rsp+38h] [rbp-10h]
  int v62; // [rsp+3Ah] [rbp-Eh]
  __int16 v63; // [rsp+3Eh] [rbp-Ah]
  __int64 v64; // [rsp+90h] [rbp+48h]
  unsigned __int16 v66; // [rsp+A0h] [rbp+58h]
  unsigned int v67; // [rsp+A8h] [rbp+60h] BYREF

  v66 = a3;
  v7 = a6;
  v8 = a3;
  v62 = 0;
  v10 = 0;
  v63 = 0;
  v11 = 0;
  v67 = 0;
  v12 = 0;
  v64 = a2 ^ a1;
  v61 = a3;
  v13 = 0LL;
  v59 = 0LL;
  v14 = a2 ^ a1;
  a6 = (unsigned __int16)a3;
  v15 = a2 ^ a1;
  a3 = (unsigned __int16)a3;
  while ( v15 )
  {
LABEL_3:
    a3 = v61;
    _BitScanForward64(&v16, v15);
    v60 = v15 & ~(1LL << v16);
    v67 = dword_140D105E0[64 * v61 + (unsigned __int8)v16];
    if ( v67 >= (unsigned int)dword_140D06884 )
      v17 = 0LL;
    else
      v17 = qword_140D088C0[v67];
    if ( *(_BYTE *)(v17 + 34056) )
    {
      ++v12;
      v13 |= *(_QWORD *)(v17 + 200);
    }
    else
    {
      ++v11;
    }
    v18 = *(_DWORD *)(v17 + 34008);
    if ( dword_140D05160 )
    {
      v19 = *(_DWORD *)(v17 + 34028);
      if ( v19 )
        v18 = (v19 * v18) >> 16;
    }
    v15 = v60;
    ++v10;
    v7 += v18;
  }
  while ( ++v61 < (unsigned int)(a3 + 1) )
  {
    v60 = *(_QWORD *)(8LL * v61 + 8);
    v15 = v60;
    if ( v60 )
      goto LABEL_3;
  }
  v60 = a2;
  v58 = v13;
  v61 = v8;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v67, &v59) )
  {
    v43 = (_DWORD *)sub_140348800(v67);
    v44 = v43[8502] - v43[8503];
    if ( dword_140D05160 )
    {
      v45 = v43[8507];
      if ( v45 )
        v44 = (v45 * v44) >> 16;
    }
    v7 += v44;
  }
  if ( v10 <= 1u )
    v10 = 1;
  v20 = a5;
  v21 = a4;
  if ( a4 >= v10 )
    v21 = v10;
  v22 = v21;
  if ( v21 <= 1u )
    v22 = 1;
  v23 = v7 / v10;
  v24 = v7 / v22;
  if ( !v11 )
  {
    v26 = v66;
    goto LABEL_22;
  }
  v25 = v12 == 0;
  v26 = v66;
  if ( !v25 )
  {
    v60 = v58;
    v61 = v66;
    v59 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v67, &v59) )
    {
      v46 = sub_140348800(v67);
      v14 ^= *(_QWORD *)(v46 + 200);
      v47 = sub_1405D837C(v46 + 33968, v24);
      if ( v47 <= *(_DWORD *)(v48 + 40) )
      {
        if ( !v20 )
          goto LABEL_68;
        if ( *(_DWORD *)(v48 + 44) > v47 )
          v47 = *(_DWORD *)(v48 + 44);
      }
      *(_DWORD *)(v48 + 40) = v47;
LABEL_68:
      v49 = v22 - 1;
      if ( !v22 )
        v49 = 0;
      v22 = v49;
    }
  }
LABEL_22:
  v27 = a6;
  v61 = v26;
  v28 = v14;
  v59 = 0LL;
  while ( 1 )
  {
    v29 = v27 + 1;
    if ( !v28 )
      break;
LABEL_24:
    v27 = v61;
    _BitScanForward64(&v30, v28);
    v60 = v28 & ~(1LL << v30);
    v67 = dword_140D105E0[64 * v61 + (unsigned __int8)v30];
    if ( v67 >= (unsigned int)dword_140D06884 )
      v31 = 0LL;
    else
      v31 = qword_140D088C0[v67];
    v32 = *(_DWORD *)(v31 + 34028);
    v33 = *(_DWORD *)(v31 + 34008);
    if ( v32 )
      v34 = (v33 * v32) >> 16;
    else
      v34 = *(_DWORD *)(v31 + 34008);
    if ( v23 <= v34 )
    {
      v14 ^= *(_QWORD *)(v31 + 200);
      v35 = v24;
      if ( v32 )
      {
        if ( v32 == 0x10000 )
          v35 = (unsigned __int16)v24;
        else
          v35 = (v24 << 16) / v32;
      }
      if ( v35 <= v33 )
      {
        if ( !v20 )
          goto LABEL_29;
        v50 = *(_DWORD *)(v31 + 34012);
        v28 = v60;
        if ( v50 <= v35 )
          v50 = v35;
        *(_DWORD *)(v31 + 34008) = v50;
      }
      else
      {
        v28 = v60;
        *(_DWORD *)(v31 + 34008) = v35;
      }
    }
    else
    {
LABEL_29:
      v28 = v60;
    }
  }
  while ( ++v61 < v29 )
  {
    v60 = *(_QWORD *)(8LL * v61 + 8);
    v28 = v60;
    if ( v60 )
      goto LABEL_24;
  }
  v36 = a6;
  v61 = v66;
  while ( 1 )
  {
    a5 = 0;
    if ( !v14 )
      break;
LABEL_38:
    v36 = v61;
    _BitScanForward64(&v37, v14);
    v60 = v14 & ~(1LL << v37);
    v67 = dword_140D105E0[64 * v61 + (unsigned __int8)v37];
    if ( v67 >= (unsigned int)dword_140D06884 )
      v38 = 0LL;
    else
      v38 = qword_140D088C0[v67];
    v39 = *(_DWORD *)(v38 + 34028);
    v40 = v23;
    if ( v39 )
    {
      if ( v39 == 0x10000 )
        v40 = (unsigned __int16)v23;
      else
        v40 = (v23 << 16) / v39;
    }
    v14 = v60;
    *(_DWORD *)(v38 + 34008) = v40;
  }
  while ( 1 )
  {
    LOWORD(v41) = ++v61;
    if ( v61 >= (unsigned int)(v36 + 1) )
      break;
    v60 = *(_QWORD *)(8LL * v61 + 8);
    v14 = v60;
    if ( v60 )
      goto LABEL_38;
  }
  v42 = a7;
  if ( a7 )
  {
    v51 = 0;
    v60 = v64;
    v61 = v66;
    while ( 1 )
    {
      v41 = KeEnumerateNextProcessor(&v67, &v59);
      if ( v41 )
        break;
      v52 = sub_140348800(v67);
      v53 = *(_DWORD *)(v52 + 34008);
      if ( v53 > 0x2710 )
      {
        v54 = *(_DWORD *)(v52 + 34028);
        v55 = v53 - 10000;
        if ( v54 )
          v55 = (v54 * v55) >> 16;
        v51 += v55;
      }
    }
    *v42 = v51;
  }
  if ( v20 )
  {
    v60 = a2;
    v61 = v66;
    v59 = 0LL;
    while ( 1 )
    {
      v41 = KeEnumerateNextProcessor(&v67, &v59);
      if ( v41 )
        break;
      v56 = sub_140348800(v67);
      *(_DWORD *)(v56 + 34008) = *(_DWORD *)(v56 + 34012);
    }
  }
  return v41;
}
