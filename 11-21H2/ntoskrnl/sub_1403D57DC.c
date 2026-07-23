/*
 * XREFs of sub_1403D57DC @ 0x1403D57DC
 * Callers:
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 *     sub_140517DCC @ 0x140517DCC (sub_140517DCC.c)
 *     sub_140852B70 @ 0x140852B70 (sub_140852B70.c)
 * Callees:
 *     sub_140252050 @ 0x140252050 (sub_140252050.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252164 @ 0x140252164 (sub_140252164.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403D59D4 @ 0x1403D59D4 (sub_1403D59D4.c)
 *     sub_1403D5A7C @ 0x1403D5A7C (sub_1403D5A7C.c)
 *     sub_1403D5A9C @ 0x1403D5A9C (sub_1403D5A9C.c)
 *     sub_140510F68 @ 0x140510F68 (sub_140510F68.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_140909FA0 @ 0x140909FA0 (sub_140909FA0.c)
 *     sub_140A61798 @ 0x140A61798 (sub_140A61798.c)
 *     sub_140A61878 @ 0x140A61878 (sub_140A61878.c)
 */

__int64 __fastcall sub_1403D57DC(unsigned int a1, __int64 a2, int a3, char a4, unsigned int *a5, unsigned int a6)
{
  unsigned int *v6; // r15
  char v7; // al
  _DWORD *v8; // rsi
  unsigned int *v9; // r14
  unsigned __int64 v10; // rdx
  __int128 *v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG_PTR *v19; // r12
  __int64 v20; // rdx
  int v21; // eax
  int v23; // eax
  int v24; // r8d
  int v25; // edx
  unsigned int v26; // r12d
  _DWORD *v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+28h] [rbp-79h]
  int v33; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v34[24]; // [rsp+50h] [rbp-51h] BYREF
  __int128 v35; // [rsp+68h] [rbp-39h] BYREF
  __int128 v36; // [rsp+78h] [rbp-29h] BYREF
  __int128 v37; // [rsp+88h] [rbp-19h]
  __int64 v38; // [rsp+98h] [rbp-9h]
  int v40; // [rsp+108h] [rbp+67h]
  char v41; // [rsp+110h] [rbp+6Fh]

  v41 = a4;
  v40 = a3;
  v6 = a5;
  *(_QWORD *)v34 = 1LL;
  v35 = 0LL;
  v33 = -1;
  v7 = *((_BYTE *)a5 + 8);
  v8 = a5 + 10;
  v9 = a5 + 6;
  v10 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v36 = 0LL;
  v12 = &xmmword_140C4AD30;
  *(_OWORD *)&v34[4] = 0LL;
  *((_BYTE *)&xmmword_140C4AD30 + v10) = v7;
  v13 = -1;
  *(_QWORD *)&v36 = 0x1FFFFFFFFLL;
  v14 = a6;
  v15 = -1073741823;
  v38 = 0LL;
  LODWORD(v35) = v6[3];
  DWORD2(v35) = v6[4];
  LODWORD(v38) = v6[1];
  v16 = *v6;
  *(_QWORD *)&v34[16] = v8;
  *(_QWORD *)&v34[8] = v9;
  HIDWORD(v35) = 16;
  v37 = 0LL;
  if ( v16 )
  {
    if ( v16 != 3 )
    {
      sub_14051E038(0, 19, 2, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3003);
      return (unsigned int)v15;
    }
    if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 )
    {
      if ( (*v8 & 0x40000000) != 0 )
      {
        v13 = *v8 & 0x3FFFFFFF;
      }
      else
      {
        v23 = sub_140909B14(&v33, a6, a1);
        v15 = v23;
        if ( v23 < 0 )
        {
          sub_14051E038(0, 31, v23, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2754);
          goto LABEL_24;
        }
        v13 = v33;
      }
      v15 = sub_140252164((__int64)v12, (__int64)v34, (__int64)&v36 + 8);
      if ( v15 < 0 )
      {
        v32 = 2770;
        v24 = 1;
LABEL_33:
        v25 = 19;
LABEL_35:
        sub_14051E038(0, v25, v24, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v32);
        goto LABEL_25;
      }
      sub_1403D5A7C(v6, &v35);
      v26 = 0;
      if ( v14 )
      {
        v27 = v8;
        do
        {
          LOBYTE(v12) = 1;
          *v27 ^= (*v27 ^ (v26 + v13)) & 0x3FFFFFFF;
          v28 = *v27 & 0x3FFFFFFF;
          LODWORD(v38) = *(v27 - 9);
          sub_140510F68(v12, v28, &v35);
          ++v26;
          v27 += 22;
        }
        while ( v26 < v14 );
      }
      a3 = v40;
      a4 = v41;
    }
    if ( qword_140C4C4A8 )
    {
      v29 = sub_140A61878((_DWORD)v12, v10, a3, a4, (__int64)v6, v14);
      v15 = v29;
      if ( v29 < 0 )
      {
        v32 = 2803;
LABEL_34:
        v24 = v29;
        v25 = 31;
        goto LABEL_35;
      }
      return 0;
    }
    v21 = sub_1403D5A9C(v34, v6, v14);
    goto LABEL_12;
  }
  v17 = v6[14];
  a5 = 0LL;
  if ( (int)sub_140252380(v17, &a5) < 0 )
  {
    sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2846);
    return (unsigned int)-1073741811;
  }
  sub_140252258(&a5, &v35, (_DWORD *)&v35 + 2);
  if ( (_DWORD)v35 == 3 )
  {
    DWORD2(v35) = 0;
    BYTE4(v35) = 1;
    LODWORD(v35) = 2;
  }
  else if ( (_DWORD)v35 == 4 )
  {
    DWORD2(v35) = 0;
    BYTE4(v35) = 1;
    LODWORD(v35) = 1;
  }
  else
  {
    BYTE4(v35) = 0;
  }
  v19 = sub_140252134((int)a5);
  if ( !v19 )
  {
    sub_14051E038(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2891);
    return (unsigned int)-1073741811;
  }
  v15 = sub_140252164(v18, (__int64)v34, (__int64)&v36 + 8);
  if ( v15 < 0 )
  {
    v32 = 2906;
    v24 = 1;
    goto LABEL_33;
  }
  v15 = sub_140252050((unsigned int *)&a5, v36);
  if ( v15 < 0 )
    return (unsigned int)v15;
  sub_1403D5A7C(v6, &v35);
  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) == 0 || (unsigned int)sub_14036FA84() != 1 )
    goto LABEL_10;
  if ( (*v8 & 0x40000000) == 0 )
  {
    v30 = sub_140909B14(&v33, 1LL, a1);
    v15 = v30;
    if ( v30 >= 0 )
    {
      v13 = v33;
      *v8 ^= (v33 ^ *v8) & 0x3FFFFFFF;
      goto LABEL_51;
    }
    sub_14051E038(0, 31, v30, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2947);
LABEL_24:
    v13 = v33;
    goto LABEL_25;
  }
LABEL_51:
  sub_140510F68(0LL, *v8 & 0x3FFFFFFF, &v35);
  v31 = *v8 & 0x3FFFFFFF;
  DWORD2(v36) = 7;
  LODWORD(v37) = v31;
  v9 = v6 + 6;
LABEL_10:
  if ( qword_140C4C4A8 )
  {
    v29 = sub_140A61798(*((unsigned int *)v19 + 60), v20, &v35, v9);
    v15 = v29;
    if ( v29 < 0 )
    {
      v32 = 2978;
      goto LABEL_34;
    }
  }
  HIDWORD(v35) &= ~0x10u;
  v21 = sub_1403D59D4(v19, &a5, &v35);
LABEL_12:
  v15 = v21;
  if ( v21 >= 0 )
    return 0;
LABEL_25:
  if ( v13 != -1 && (*v8 & 0x40000000) == 0 )
    sub_140909FA0(v13, v14, *v6);
  return (unsigned int)v15;
}
