/*
 * XREFs of sub_1800FA93C @ 0x1800FA93C
 * Callers:
 *     sub_1800F90A0 @ 0x1800F90A0 (sub_1800F90A0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800FA93C(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rbx
  _OWORD *v5; // rbp
  unsigned __int64 v6; // rbx
  _QWORD **v7; // rdi
  _QWORD *i; // rbx
  _OWORD *v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r15
  _OWORD *v17; // r14
  __int64 *v18; // r12
  _QWORD *v19; // rdx
  _OWORD *v20; // r8
  _QWORD *v21; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
LABEL_23:
      sub_180012170();
    v6 = 2 * v4;
    v5 = (_OWORD *)sub_180011088(v6 * 16);
    sub_180020570((_QWORD *)*a2, (_QWORD *)a2[1], v5);
    if ( *a2 )
    {
      sub_18001FF34(*a2, a2[1]);
      sub_180010884((char *)*a2, (a2[2] - *a2) & 0xFFFFFFFFFFFFFFE0uLL);
    }
    *a2 = (__int64)v5;
    a2[1] = (__int64)v5;
    a2[2] = (__int64)&v5[v6];
  }
  v7 = *(_QWORD ***)(a1 + 72);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (_OWORD *)a2[2];
    if ( v5 == v9 )
    {
      v10 = (__int64)v5 - *a2;
      v11 = v10 >> 5;
      if ( v10 >> 5 == 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_23;
      v12 = v11 + 1;
      v13 = ((__int64)v9 - *a2) >> 5;
      v14 = v13 >> 1;
      if ( v13 <= 0x7FFFFFFFFFFFFFFLL - (v13 >> 1) )
      {
        v15 = v11 + 1;
        if ( v14 + v13 >= v12 )
          v15 = v14 + v13;
        if ( v15 > 0x7FFFFFFFFFFFFFFLL )
          sub_1800120D4();
      }
      else
      {
        v15 = 0x7FFFFFFFFFFFFFFLL;
      }
      v16 = 2 * v15;
      v17 = (_OWORD *)sub_180011088(v16 * 16);
      v18 = (__int64 *)((char *)v17 + (v10 & 0xFFFFFFFFFFFFFFE0uLL));
      sub_1800129F4(v18, (__int64)(i + 2));
      v19 = (_QWORD *)a2[1];
      v20 = v17;
      v21 = (_QWORD *)*a2;
      if ( v5 != (_OWORD *)v19 )
      {
        sub_180020570(v21, v5, v17);
        v20 = v18 + 4;
        v19 = (_QWORD *)a2[1];
        v21 = v5;
      }
      sub_180020570(v21, v19, v20);
      if ( *a2 )
      {
        sub_18001FF34(*a2, a2[1]);
        sub_180010884((char *)*a2, (a2[2] - *a2) & 0xFFFFFFFFFFFFFFE0uLL);
      }
      *a2 = (__int64)v17;
      v5 = &v17[2 * v12];
      a2[1] = (__int64)v5;
      a2[2] = (__int64)&v17[v16];
    }
    else
    {
      sub_1800129F4((__int64 *)v5, (__int64)(i + 2));
      a2[1] += 32LL;
      v5 = (_OWORD *)a2[1];
    }
  }
  return a2;
}
