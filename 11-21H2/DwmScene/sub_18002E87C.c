/*
 * XREFs of sub_18002E87C @ 0x18002E87C
 * Callers:
 *     sub_18002F3B0 @ 0x18002F3B0 (sub_18002F3B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180013B3C @ 0x180013B3C (sub_180013B3C.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_18001FEAC @ 0x18001FEAC (sub_18001FEAC.c)
 *     sub_18002C8F0 @ 0x18002C8F0 (sub_18002C8F0.c)
 *     sub_18002C9BC @ 0x18002C9BC (sub_18002C9BC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18002E87C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char *v4; // r8
  __int64 v5; // r15
  __int64 v6; // rdi
  char **v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // rbx
  int v10; // ecx
  double v11; // xmm6_8
  char **v12; // r12
  char *v13; // rdi
  char **v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 **v19; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  char *v22; // rbx
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 k; // rax
  char *m; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  char **v33; // [rsp+38h] [rbp-69h] BYREF
  __int64 v34; // [rsp+40h] [rbp-61h]
  __int64 v35; // [rsp+48h] [rbp-59h]
  char ***v36; // [rsp+50h] [rbp-51h]
  __int64 v37; // [rsp+58h] [rbp-49h]
  __int128 v38; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-21h]
  __int128 v40; // [rsp+88h] [rbp-19h] BYREF
  __int64 v41; // [rsp+98h] [rbp-9h]
  unsigned __int64 v42; // [rsp+A0h] [rbp-1h]

  v34 = 0LL;
  *(_QWORD *)&v38 = sub_180011088(0x48uLL);
  sub_18001DE8C((__int64 *)v38, (__int64 *)&v38);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v38);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v38);
  *((_WORD *)v4 + 12) = 257;
  v33 = (char **)v4;
  v5 = *(_QWORD *)(a1 + 416);
  v6 = *(_QWORD *)(a1 + 424);
  v35 = v6;
  while ( v5 != v6 )
  {
    if ( *(_BYTE *)(v5 + 120) )
    {
      sub_18002C9BC(
        *(_QWORD **)(a1 + 384),
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderoutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v5 + 128));
      v7 = v33;
      sub_18001E104((__int64)&v33, (__int64)&v33, v33[1]);
      v7[1] = (char *)v7;
      *v7 = (char *)v7;
      v7[2] = (char *)v7;
      v34 = 0LL;
      v9 = **(__int64 ***)(v5 + 136);
      while ( !*((_BYTE *)v9 + 25) )
      {
        v10 = *((_DWORD *)v9 + 16);
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v11 = *((double *)v9 + 10) - *((double *)v9 + 9);
            v12 = v33;
            v13 = v33[1];
            *(_QWORD *)&v40 = v13;
            DWORD2(v40) = 0;
            v14 = v33;
            while ( !v13[25] )
            {
              *(_QWORD *)&v40 = v13;
              if ( (unsigned __int8)sub_18001DE04((_QWORD *)v13 + 4, v9 + 4) )
              {
                DWORD2(v40) = 0;
                v13 = (char *)*((_QWORD *)v13 + 2);
              }
              else
              {
                DWORD2(v40) = 1;
                v14 = (char **)v13;
                v13 = *(char **)v13;
              }
            }
            if ( *((_BYTE *)v14 + 25) || (unsigned __int8)sub_18001DE04(v9 + 4, v14 + 4) )
            {
              if ( v34 == 0x38E38E38E38E38ELL )
                sub_18001F56C();
              *(_QWORD *)&v38 = v12;
              v36 = &v33;
              v37 = 0LL;
              v15 = sub_180011088(0x48uLL);
              v37 = v15;
              sub_18001875C((__int64 *)(v15 + 32), (__int64)(v9 + 4));
              *(_QWORD *)(v15 + 64) = 0LL;
              sub_18001DE7C((__int64 *)v15, (__int64 *)&v38);
              sub_18001DE7C((__int64 *)(v15 + 8), (__int64 *)&v38);
              sub_18001DE7C((__int64 *)(v15 + 16), (__int64 *)&v38);
              *(_WORD *)(v15 + 24) = 0;
              v37 = 0LL;
              v38 = v40;
              v14 = (char **)sub_18001F31C(&v33, (__int64)&v38, v15);
            }
            *((double *)v14 + 8) = v11 + *((double *)v14 + 8);
          }
        }
        else if ( sub_18001DA38(v9 + 4, &qword_1801F6818) )
        {
          sub_18002C8F0(*(_QWORD **)(a1 + 384), v16, 618LL);
        }
        else
        {
          v17 = *(_QWORD **)(a1 + 384);
          sub_180013B3C(&v40, (__int64)&qword_1801F4BB8, v9 + 4);
          sub_18002C8F0(v17, v18, 623LL);
          v8 = v42;
          if ( v42 >= 0x10 )
            sub_180010884((char *)v40, v42 + 1);
        }
        v19 = (__int64 **)v9[2];
        if ( *((_BYTE *)v19 + 25) )
        {
          for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v9 = i;
          v9 = i;
        }
        else
        {
          v9 = (__int64 *)v9[2];
          for ( j = *v19; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
      }
      v22 = *v33;
      while ( !v22[25] )
      {
        v23 = sub_180013B3C(&v40, (__int64)&qword_1801F4BB8, (_QWORD *)v22 + 4);
        sub_18001FEAC((__int64)&v38, (__int64)v23, &qword_1801F6838);
        v24 = v42;
        if ( v42 >= 0x10 )
          sub_180010884((char *)v40, v42 + 1);
        v41 = 0LL;
        v42 = 15LL;
        LOBYTE(v40) = 0;
        sub_18002C8F0(*(_QWORD **)(a1 + 384), v24, 644LL);
        v8 = v39;
        if ( v39 >= 0x10 )
          sub_180010884((char *)v38, v39 + 1);
        v25 = *((_QWORD *)v22 + 2);
        if ( *(_BYTE *)(v25 + 25) )
        {
          for ( k = *((_QWORD *)v22 + 1); !*(_BYTE *)(k + 25) && v22 == *(char **)(k + 16); k = *(_QWORD *)(k + 8) )
            v22 = (char *)k;
          v22 = (char *)k;
        }
        else
        {
          v22 = (char *)*((_QWORD *)v22 + 2);
          for ( m = *(char **)v25; !m[25]; m = *(char **)m )
            v22 = m;
        }
      }
      sub_18002C8F0(*(_QWORD **)(a1 + 384), v8, 648LL);
      sub_18002C8F0(*(_QWORD **)(a1 + 384), v28, 649LL);
      sub_18002C8F0(*(_QWORD **)(a1 + 384), v29, 650LL);
      sub_18002C8F0(*(_QWORD **)(a1 + 384), v30, 651LL);
      sub_18002C8F0(*(_QWORD **)(a1 + 384), v31, 652LL);
      v4 = (char *)v33;
      v6 = v35;
    }
    v5 += 152LL;
  }
  sub_18001E104((__int64)&v33, (__int64)&v33, *((char **)v4 + 1));
  return sub_180010884((char *)v33, 0x48uLL);
}
