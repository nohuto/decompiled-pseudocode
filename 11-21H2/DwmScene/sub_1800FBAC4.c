/*
 * XREFs of sub_1800FBAC4 @ 0x1800FBAC4
 * Callers:
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 * Callees:
 *     _o_floor @ 0x18000C030 (_o_floor.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800FB890 @ 0x1800FB890 (sub_1800FB890.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800FBAC4(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // rdi
  int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rsi
  char v6; // bl
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r15
  double v10; // xmm6_8
  double v11; // xmm1_8
  double v12; // xmm7_8
  int v13; // r14d
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  char *v26; // rax
  __int64 v27; // r12
  char *v28; // rbx
  __int64 *v29; // r15
  __int64 *v30; // rsi
  __int64 *v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r12
  char *v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+38h] [rbp-59h]
  _QWORD v41[2]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-31h] BYREF
  __int128 v44; // [rsp+70h] [rbp-21h]
  char *v45; // [rsp+80h] [rbp-11h]
  _QWORD *v47; // [rsp+100h] [rbp+6Fh]
  char *i; // [rsp+100h] [rbp+6Fh]
  __int64 v49; // [rsp+108h] [rbp+77h] BYREF
  double v50; // [rsp+110h] [rbp+7Fh] BYREF

  v1 = a1;
  v44 = 0LL;
  v2 = 0LL;
  v45 = 0LL;
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 136))(*(_QWORD *)(a1 + 136), &v49);
  v42[0] = v1 + 56;
  v3 = Mtx_lock((_Mtx_t)(v1 + 56));
  if ( v3 )
    std::_Throw_C_error(v3);
  sub_1800FB890((__int64 *)v1, *(char **)(v1 + 8), *(char **)(v1 + 24), *(char **)(v1 + 32));
  sub_1800126E8(*(_QWORD *)(v1 + 24), *(_QWORD *)(v1 + 32));
  *(_QWORD *)(v1 + 32) = *(_QWORD *)(v1 + 24);
  Mtx_unlock((_Mtx_t)(v1 + 56));
  v4 = *(_QWORD **)v1;
  v47 = v4;
  v41[0] = *(_QWORD *)(v1 + 8);
  if ( v4 == (_QWORD *)v41[0] )
    goto LABEL_47;
  while ( 1 )
  {
    v5 = v4[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v4[1];
    }
    v43[0] = *v4;
    v43[1] = v5;
    v6 = 1;
    v7 = v43[0] + 168LL;
    if ( !*(_BYTE *)sub_1800441D8(v43[0] + 168LL) )
      break;
LABEL_19:
    if ( !*(_BYTE *)sub_1800441D8(v7) && v6 )
    {
      v2 = (unsigned __int64)v45;
      v16 = *((_QWORD *)&v44 + 1);
      v17 = (char *)v44;
      goto LABEL_43;
    }
    v9 = v43[0];
LABEL_23:
    if ( *(_QWORD *)(v9 + 160) && v6 )
    {
      v18 = *(_QWORD *)(v9 + 160);
      if ( !v18 )
        goto LABEL_46;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = *((_QWORD *)&v44 + 1);
    v2 = (unsigned __int64)v45;
    if ( *((char **)&v44 + 1) == v45 )
    {
      v21 = (__int64)(*((_QWORD *)&v44 + 1) - v44) >> 4;
      if ( v21 == 0xFFFFFFFFFFFFFFFLL )
        sub_180012170();
      v40 = v21 + 1;
      v22 = (__int64)&v45[-v44] >> 4;
      if ( v22 <= 0xFFFFFFFFFFFFFFFLL - (v22 >> 1) )
      {
        v24 = (v22 >> 1) + v22;
        v23 = v21 + 1;
        if ( v24 >= v21 + 1 )
          v23 = v24;
        if ( v23 > 0xFFFFFFFFFFFFFFFLL )
          sub_1800120D4();
      }
      else
      {
        v23 = 0xFFFFFFFFFFFFFFFLL;
      }
      v25 = 16 * v23;
      v26 = (char *)sub_180011088(v25);
      v17 = v26;
      v27 = 2 * v21;
      *(_QWORD *)&v26[8 * v27] = 0LL;
      *(_QWORD *)&v26[8 * v27 + 8] = 0LL;
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v19 = *((_QWORD *)&v44 + 1);
        v9 = v43[0];
      }
      *(_QWORD *)&v26[8 * v27] = v9;
      *(_QWORD *)&v26[8 * v27 + 8] = v5;
      sub_18001292C((char *)v44, (char *)v19, v26);
      v28 = (char *)v44;
      if ( (_QWORD)v44 )
      {
        sub_1800126E8(v44, *((__int64 *)&v44 + 1));
        sub_180010884(v28, (v45 - v28) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      *(_QWORD *)&v44 = v17;
      v16 = (__int64)&v17[16 * v40];
      v2 = (unsigned __int64)&v17[v25];
      v45 = (char *)v2;
    }
    else
    {
      **((_QWORD **)&v44 + 1) = 0LL;
      v20 = (_QWORD *)(v19 + 8);
      *(_QWORD *)(v19 + 8) = 0LL;
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v2 = (unsigned __int64)v45;
        v19 = *((_QWORD *)&v44 + 1);
        v9 = v43[0];
      }
      *(_QWORD *)v19 = v9;
      *v20 = v5;
      v16 = v19 + 16;
      v17 = (char *)v44;
    }
    *((_QWORD *)&v44 + 1) = v16;
LABEL_43:
    sub_180010910((__int64)v43);
    v4 = v47 + 2;
    v47 = v4;
    if ( v4 == (_QWORD *)v41[0] )
      goto LABEL_48;
  }
  v9 = v43[0];
  v10 = (double)((int)v49 - *(_DWORD *)(v43[0] + 8LL))
      / 1000000000.0
      / ((double)(int)*(_QWORD *)(v43[0] + 16LL)
       / 1000000000.0);
  v11 = 0.0;
  v12 = 0.0;
  v2 = (unsigned int)(int)v10;
  v13 = *(_DWORD *)(v43[0] + 24LL);
  v14 = *(_DWORD *)(v43[0] + 28LL);
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( (int)v2 < v13 )
      {
        o_floor();
        v11 = v10 - v10;
      }
      v12 = v11;
    }
  }
  else if ( (int)v2 < v13 )
  {
    o_floor();
    v12 = v10 - v10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v9 + 32) + 8LL))(
         *(_QWORD *)(v9 + 32),
         v8,
         *(_QWORD *)v9);
  if ( !v6 || !*(_QWORD *)(v9 + 96) )
  {
LABEL_18:
    if ( (int)v2 >= v13 )
      goto LABEL_23;
    goto LABEL_19;
  }
  v50 = ((double)(int)v2 + v12) / (double)*(int *)(v9 + 24);
  v15 = *(_QWORD *)(v9 + 96);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 16LL))(v15, &v50);
    goto LABEL_18;
  }
  std::_Xbad_function_call();
  __debugbreak();
LABEL_46:
  std::_Xbad_function_call();
LABEL_47:
  v16 = *((_QWORD *)&v44 + 1);
  v17 = (char *)v44;
LABEL_48:
  for ( i = v17; i != (char *)v16; i += 16 )
  {
    v29 = *(__int64 **)(v1 + 8);
    v30 = *(__int64 **)v1;
    if ( *(__int64 **)v1 != v29 )
    {
      do
      {
        if ( sub_180016240(v30, i) )
          break;
        v30 += 2;
      }
      while ( v30 != v29 );
      v1 = a1;
      if ( v30 != v29 )
      {
        v31 = v30 + 2;
        if ( v30 + 2 != v29 )
        {
          do
          {
            if ( !sub_180016240(v31, i) )
            {
              v32 = *v31;
              v33 = v31[1];
              *v31 = 0LL;
              v31[1] = 0LL;
              v42[0] = *v30;
              *v30 = v32;
              v42[1] = v30[1];
              v30[1] = v33;
              sub_180010910((__int64)v42);
              v30 += 2;
            }
            v31 += 2;
          }
          while ( v31 != v29 );
          v1 = a1;
        }
      }
    }
    v34 = sub_18001287C((__int64)v30);
    v35 = v34;
    if ( (__int64 *)v34 != v29 )
    {
      v36 = *(_QWORD *)(v1 + 8);
      if ( v29 != (__int64 *)v36 )
      {
        v37 = (char *)v29 - v34;
        do
        {
          v38 = *(_QWORD *)&v37[v35];
          v39 = *(_QWORD *)&v37[v35 + 8];
          *(_QWORD *)&v37[v35] = 0LL;
          *(_QWORD *)&v37[v35 + 8] = 0LL;
          v41[0] = *(_QWORD *)v35;
          *(_QWORD *)v35 = v38;
          v41[1] = *(_QWORD *)(v35 + 8);
          *(_QWORD *)(v35 + 8) = v39;
          sub_180010910((__int64)v41);
          v35 += 16LL;
        }
        while ( &v37[v35] != (char *)v36 );
        v36 = *(_QWORD *)(v1 + 8);
      }
      sub_1800126E8(v35, v36);
      *(_QWORD *)(v1 + 8) = v35;
    }
  }
  if ( v17 )
  {
    sub_1800126E8((__int64)v17, v16);
    sub_180010884(v17, (v2 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
