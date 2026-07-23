/*
 * XREFs of sub_14038FC10 @ 0x14038FC10
 * Callers:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_1403828A4 @ 0x1403828A4 (sub_1403828A4.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 * Callees:
 *     sub_140237E94 @ 0x140237E94 (sub_140237E94.c)
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_14038032C @ 0x14038032C (sub_14038032C.c)
 *     sub_140380900 @ 0x140380900 (sub_140380900.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_14038217C @ 0x14038217C (sub_14038217C.c)
 *     sub_1403901F0 @ 0x1403901F0 (sub_1403901F0.c)
 *     sub_1403903B8 @ 0x1403903B8 (sub_1403903B8.c)
 *     sub_14039042C @ 0x14039042C (sub_14039042C.c)
 *     sub_1403904D4 @ 0x1403904D4 (sub_1403904D4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F6054 @ 0x1405F6054 (sub_1405F6054.c)
 */

__int64 __fastcall sub_14038FC10(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v7; // r13
  __int64 v8; // rcx
  _WORD *v9; // rax
  int v10; // r12d
  _QWORD *v11; // rsi
  int v12; // ecx
  int v13; // edi
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rdi
  int *v23; // rdi
  int v24; // r9d
  int v25; // r8d
  int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // r13
  int v32; // eax
  int v33; // edx
  int *v34; // r13
  unsigned int v35; // r15d
  int v36; // eax
  int v37; // eax
  __int64 v38; // r8
  _DWORD **v40; // rax
  __int64 v41; // rax
  int v42; // eax
  int v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+24h] [rbp-DCh]
  int v45; // [rsp+28h] [rbp-D8h]
  unsigned int v46; // [rsp+2Ch] [rbp-D4h]
  unsigned int v47; // [rsp+30h] [rbp-D0h]
  unsigned int v48; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v49; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  _WORD *v53; // [rsp+60h] [rbp-A0h]
  int *v54; // [rsp+68h] [rbp-98h]
  _WORD *v55; // [rsp+70h] [rbp-90h]
  _QWORD v56[22]; // [rsp+80h] [rbp-80h] BYREF

  v7 = a3;
  v52 = a2;
  v50 = a3;
  v46 = a5;
  v51 = a4;
  memset(v56, 0, 0xA8uLL);
  v8 = *(_QWORD *)(a1 + 1032);
  v44 = 0;
  v49 = 0LL;
  v9 = (_WORD *)(v8 + 2LL * a5);
  v55 = (_WORD *)(v8 + 2 * v7);
  v53 = v9;
  if ( v55 == v9 )
    v10 = 0;
  else
    v10 = *v9 & 0x1FFF;
  v43 = v10;
  sub_1403812B0(a1, *(_QWORD *)(a1 + 760));
  v11 = (_QWORD *)(a1 + 88);
  v12 = *(_DWORD *)(a1 + 120);
  if ( (v12 & 1) != 0 )
  {
    sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
    v12 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v12 & 0xFFFFFFFE;
  **(_DWORD **)(a1 + 760) = (_DWORD)v7 << *(_DWORD *)(a1 + 812);
  v13 = sub_140380C38(a1 + 64, *(_DWORD *)(a1 + 768), a1 + 88);
  if ( v13 != -1073741818 )
  {
    sub_14039042C(a1 + 64, &v49, a1 + 88);
    v14 = v49;
    while ( 1 )
    {
      if ( v44 )
      {
        **(_DWORD **)(a1 + 760) = (_DWORD)v7 << *(_DWORD *)(a1 + 812);
        v13 = sub_140380C38(a1 + 64, *(_DWORD *)(a1 + 768), a1 + 88);
        if ( v13 == -1073741818 )
          break;
        sub_1403903B8(&v49, a1 + 64);
        sub_14039042C(a1 + 64, &v49, a1 + 88);
        v14 = v49;
      }
      if ( !v14 )
      {
LABEL_44:
        v13 = 0;
        break;
      }
      v15 = *((_QWORD *)&v49 + 1) + 4LL;
      v16 = (unsigned __int16)*(_DWORD *)v14 + 4LL;
      *((_QWORD *)&v49 + 1) = v15;
      if ( v15 >= v14 + 4 * v16 )
      {
        if ( a1 == -64 )
          v40 = 0LL;
        else
          v40 = (_DWORD **)(a1 + 80);
        if ( **v40 == -1 )
        {
          v41 = 3358LL;
          if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
            v41 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v41 = sub_1405F6054(a1 + 64, v14);
          if ( v41 == -1 )
          {
            v15 = -1LL;
            goto LABEL_12;
          }
        }
        if ( v41 )
        {
          v15 = v41 + 16;
          *(_QWORD *)&v49 = v41;
          *((_QWORD *)&v49 + 1) = v41 + 16;
          v14 = v41;
        }
        else
        {
          v15 = 0LL;
        }
      }
LABEL_12:
      if ( v15 == -1LL )
        goto LABEL_69;
      if ( !v15 )
        goto LABEL_44;
      v17 = *(_DWORD *)v15;
      v18 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)v15 & *(_DWORD *)(a1 + 460)));
      v19 = (unsigned int)(*(_DWORD *)v15 >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v20, v19);
      v48 = v17;
      v21 = *(_DWORD *)(a1 + 808);
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20)));
      LODWORD(v20) = *(_DWORD *)(a1 + 812);
      v23 = (int *)(*(unsigned int *)(a1 + 472) + v18 + v22);
      v54 = v23;
      v24 = *v23 & v21;
      if ( (unsigned int)*v23 >> v20 != (_DWORD)v7 )
        goto LABEL_44;
      v25 = *(_DWORD *)(a1 + 824);
      v26 = 4096;
      v27 = v46;
      if ( (v23[1] & 0xFFF) != 0 )
        v26 = v23[1] & 0xFFF;
      v47 = (unsigned int)(v26 + v25 + 15) >> 4;
      v28 = v25 + (-*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) & (v26 + *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) - 1));
      if ( v46 == (_DWORD)v7 || v47 + (*v53 & 0x1FFF) <= *(_DWORD *)(a1 + 816) )
      {
        v29 = v51;
      }
      else
      {
        v10 = 0;
        v44 = 0;
        v29 = v52;
        v53 = v55;
        v27 = v7;
        v51 = v52;
        v43 = 0;
        v46 = v7;
      }
      if ( v24 != v10 || (_DWORD)v7 != v27 )
      {
        if ( !v29 )
        {
          v13 = -1073741802;
          break;
        }
        memmove((void *)(v29 + (unsigned int)(16 * v10)), (const void *)(v52 + (unsigned int)(16 * v24)), v28);
        sub_1403812B0(a1, (__int64)v23);
        v30 = a1 + 96;
        v31 = a1 + 96;
        v32 = *(_DWORD *)(a1 + 112);
        v33 = v10 | (v46 << *(_DWORD *)(a1 + 812));
        v45 = v33;
        if ( v32 != -1 && v32 )
          v31 = *v11 + 16LL * (unsigned int)(v32 - 1);
        if ( *(_QWORD *)v31 == v14 )
        {
          *(_QWORD *)(v31 + 8) = *((_QWORD *)&v49 + 1);
        }
        else
        {
          sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
          if ( *(_DWORD *)(a1 + 112) == -1 )
          {
            *(_OWORD *)v31 = v49;
          }
          else
          {
            sub_140380C38(a1 + 64, *(_DWORD *)(v14 + 16), a1 + 88);
            v42 = *(_DWORD *)(a1 + 112);
            if ( v42 != -1 && v42 )
              v30 = *v11 + 16LL * (unsigned int)(v42 - 1);
            *(_QWORD *)(v30 + 8) = *((_QWORD *)&v49 + 1);
          }
          v33 = v45;
        }
        if ( v44 )
        {
LABEL_26:
          v34 = v54;
          **(_DWORD **)(a1 + 760) = *v54;
          sub_1403901F0(a1 + 64, a1 + 88, *(unsigned int *)(a1 + 768));
          sub_1403903B8(&v49, a1 + 64);
          v35 = v48;
          *v34 = v45;
          v48 = v35;
          v56[0] = &v56[5];
          v49 = 0LL;
          v56[1] = 0LL;
          v56[2] = 0LL;
          v56[4] = 0LL;
          v56[3] = 0x800000000LL;
          v13 = sub_140380900(a1 + 64, &v48, (__int64)v56);
          sub_140237E94(a1 + 64, (__int64)v56, 1);
          if ( v13 < 0 )
          {
            *v34 = **(_DWORD **)(a1 + 760);
            sub_1403901F0(a1 + 64, a1 + 88, v35);
            break;
          }
          v36 = sub_1403904D4(a1 + 64, *(unsigned int *)(a1 + 768), a1 + 88);
          v13 = v36;
          if ( v36 == -1073741818 )
            break;
          if ( v36 < 0 )
            __int2c();
          v14 = v49;
        }
        else
        {
          **(_DWORD **)(a1 + 760) = v33;
          v37 = sub_1403901F0(a1 + 64, a1 + 88, *(unsigned int *)(a1 + 768));
          if ( !v37 )
          {
            v44 = 1;
            goto LABEL_26;
          }
          if ( v37 == -1 )
          {
LABEL_69:
            v13 = -1073741818;
            break;
          }
          v38 = v48;
          *v54 = v45;
          sub_1403901F0(a1 + 64, a1 + 88, v38);
        }
        LODWORD(v7) = v50;
        if ( v50 != v46 )
        {
          sub_14038032C(a1, v50, -v47, 1);
          sub_14038032C(a1, v46, v47, 0);
        }
        v10 = v43;
      }
      v10 += v47;
      v43 = v10;
      if ( a6 && (unsigned int)sub_14038217C(a1, 0) != 2 )
      {
        v13 = -2147483634;
        break;
      }
    }
  }
  sub_1403903B8(&v49, a1 + 64);
  return (unsigned int)v13;
}
