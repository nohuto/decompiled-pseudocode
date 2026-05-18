/*
 * XREFs of sub_180031324 @ 0x180031324
 * Callers:
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_1800112F0 @ 0x1800112F0 (sub_1800112F0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180031904 @ 0x180031904 (sub_180031904.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180031324(__int64 *a1, char *a2, __int64 a3, __int64 a4)
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
  __int64 v25; // rax
  volatile signed __int32 *v26; // rcx
  __int64 v27; // rdx

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
        a1[1] = (__int64)sub_1800112F0(a2, v22, &a2[v21]);
        v27 = (__int64)v5;
      }
      else
      {
        v23 = &v5[-v21];
        a1[1] = (__int64)sub_1800112F0(&v5[-v21], v22, (_QWORD *)a1[1]);
        while ( v23 != a2 )
        {
          v24 = *((_QWORD *)v23 - 1);
          v23 -= 16;
          *((_QWORD *)v23 + 1) = 0LL;
          v25 = *(_QWORD *)v23;
          *(_QWORD *)v23 = 0LL;
          v26 = *(volatile signed __int32 **)&v23[v21 + 8];
          *(_QWORD *)&v23[v21] = v25;
          *(_QWORD *)&v23[v21 + 8] = v24;
          if ( v26 && _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        }
        v27 = (__int64)&a2[v21];
      }
      sub_180011138((__int64)a2, v27);
      sub_180031904(a3, a4, a2);
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
      sub_180031904(a3, a4, &v18[2 * ((a2 - v4) >> 4)]);
      if ( v6 == 1 && a2 == v5 )
      {
        v19 = v18;
        v20 = v4;
      }
      else
      {
        sub_1800112F0(v4, a2, v18);
        v20 = a2;
        v19 = &v18[2 * v6 + 2 * ((a2 - v4) >> 4)];
      }
      sub_1800112F0(v20, v5, v19);
      if ( *a1 )
      {
        sub_180011138(*a1, a1[1]);
        sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      *a1 = (__int64)v18;
      a1[1] = (__int64)&v18[2 * v14];
      a1[2] = (__int64)&v18[v17];
    }
  }
}
