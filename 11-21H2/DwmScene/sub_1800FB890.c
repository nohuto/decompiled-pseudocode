/*
 * XREFs of sub_1800FB890 @ 0x1800FB890
 * Callers:
 *     sub_1800FBAC4 @ 0x1800FBAC4 (sub_1800FBAC4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_1800318A0 @ 0x1800318A0 (sub_1800318A0.c)
 */

void __fastcall sub_1800FB890(__int64 *a1, char *a2, char *a3, char *a4)
{
  char *v4; // r13
  char *v5; // rbp
  unsigned __int64 v6; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  _QWORD *v18; // r15
  _QWORD *v19; // r8
  char *v20; // rcx
  __int64 v21; // r14
  char *v22; // rdx
  char *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (char *)*a1;
  v5 = (char *)a1[1];
  v6 = (a4 - a3) >> 4;
  if ( v6 )
  {
    v11 = a1[2];
    if ( v6 <= (v11 - (__int64)v5) >> 4 )
    {
      v21 = 16 * v6;
      v22 = (char *)a1[1];
      if ( v6 >= (v5 - a2) >> 4 )
      {
        a1[1] = (__int64)sub_18001292C(a2, v22, &a2[v21]);
        v27 = (__int64)v5;
      }
      else
      {
        v23 = &v5[-v21];
        a1[1] = (__int64)sub_18001292C(&v5[-v21], v22, (_QWORD *)a1[1]);
        while ( v23 != a2 )
        {
          v24 = *((_QWORD *)v23 - 1);
          v23 -= 16;
          v25 = *(_QWORD *)v23;
          *(_QWORD *)v23 = 0LL;
          *((_QWORD *)v23 + 1) = 0LL;
          v28[0] = *(_QWORD *)&v23[v21];
          v26 = *(_QWORD *)&v23[v21 + 8];
          *(_QWORD *)&v23[v21] = v25;
          v28[1] = v26;
          *(_QWORD *)&v23[v21 + 8] = v24;
          sub_180010910((__int64)v28);
        }
        v27 = (__int64)&a2[v21];
      }
      sub_1800126E8((__int64)a2, v27);
      sub_1800318A0(a3, a4, a2);
    }
    else
    {
      v12 = 0xFFFFFFFFFFFFFFFLL;
      v13 = (v5 - v4) >> 4;
      if ( v6 > 0xFFFFFFFFFFFFFFFLL - v13 )
        sub_180012170();
      v14 = v13 + v6;
      v15 = (v11 - (__int64)v4) >> 4;
      if ( v15 <= 0xFFFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v16 = v13 + v6;
        if ( (v15 >> 1) + v15 >= v14 )
          v16 = (v15 >> 1) + v15;
        if ( v16 > 0xFFFFFFFFFFFFFFFLL )
          sub_1800120D4();
        v12 = v16;
      }
      v17 = 2 * v12;
      v18 = (_QWORD *)sub_180011088(v17 * 8);
      sub_1800318A0(a3, a4, &v18[2 * ((a2 - v4) >> 4)]);
      if ( v6 == 1 && a2 == v5 )
      {
        v19 = v18;
        v20 = v4;
      }
      else
      {
        sub_18001292C(v4, a2, v18);
        v20 = a2;
        v19 = &v18[2 * v6 + 2 * ((a2 - v4) >> 4)];
      }
      sub_18001292C(v20, v5, v19);
      if ( *a1 )
      {
        sub_1800126E8(*a1, a1[1]);
        sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      *a1 = (__int64)v18;
      a1[1] = (__int64)&v18[2 * v14];
      a1[2] = (__int64)&v18[v17];
    }
  }
}
