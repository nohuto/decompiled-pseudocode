/*
 * XREFs of sub_1800E0830 @ 0x1800E0830
 * Callers:
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 * Callees:
 *     _o_floor @ 0x18000C020 (_o_floor.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_1800E073C @ 0x1800E073C (sub_1800E073C.c)
 *     sub_1800E0794 @ 0x1800E0794 (sub_1800E0794.c)
 *     sub_1800E0B18 @ 0x1800E0B18 (sub_1800E0B18.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800E0830(__int64 a1)
{
  char *j; // rsi
  _QWORD *v3; // r15
  char *i; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  double v7; // xmm6_8
  double v8; // xmm1_8
  double v9; // xmm7_8
  int v10; // r14d
  int v11; // r12d
  int v12; // ecx
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 **v15; // rax
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  char *v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+C0h] [rbp+40h] BYREF
  double v22; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v23; // [rsp+D0h] [rbp+50h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 136))(*(_QWORD *)(a1 + 136), &v21);
  *(_QWORD *)&v22 = a1 + 56;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 56));
  sub_1800E073C((_QWORD *)a1, &v23, *(char **)(a1 + 8), *(char **)(a1 + 24), *(char **)(a1 + 32));
  sub_180027964((__int64 *)(a1 + 24));
  Mtx_unlock((_Mtx_t)(a1 + 56));
  v3 = *(_QWORD **)a1;
  v23 = *(_QWORD **)(a1 + 8);
  for ( i = 0LL; v3 != v23; v3 += 2 )
  {
    sub_18001246C(&v17, v3);
    LOBYTE(j) = 1;
    v5 = v17;
    if ( !sub_180057460(v17 + 168) )
    {
      v7 = (double)((int)v21 - *(_DWORD *)(v5 + 8)) / 1000000000.0 / ((double)(int)*(_QWORD *)(v5 + 16) / 1000000000.0);
      v8 = 0.0;
      v9 = 0.0;
      v10 = (int)v7;
      v11 = *(_DWORD *)(v5 + 24);
      v12 = *(_DWORD *)(v5 + 28);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( v10 < v11 )
          {
            o_floor();
            v8 = v7 - v7;
          }
          v9 = v8;
        }
      }
      else if ( v10 < v11 )
      {
        o_floor();
        v9 = v7 - v7;
      }
      LOBYTE(j) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 32) + 8LL))(
                    *(_QWORD *)(v5 + 32),
                    v6,
                    *(_QWORD *)v5);
      if ( (_BYTE)j && *(_QWORD *)(v5 + 96) )
      {
        v22 = ((double)v10 + v9) / (double)*(int *)(v5 + 24);
        v13 = *(_QWORD *)(v5 + 96);
        if ( !v13 )
        {
          std::_Xbad_function_call();
          goto LABEL_28;
        }
        (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v13 + 16LL))(v13, &v22);
      }
      if ( v10 >= v11 )
        goto LABEL_18;
    }
    if ( sub_180057460(v5 + 168) || !(_BYTE)j )
    {
LABEL_18:
      if ( *(_QWORD *)(v5 + 160) && (_BYTE)j )
        sub_180025DA4(v5 + 104);
      if ( i == v20 )
      {
        sub_180071228((char **)&v19, i, &v17);
        i = (char *)*((_QWORD *)&v19 + 1);
      }
      else
      {
        sub_18001246C(i, &v17);
        i += 16;
        *((_QWORD *)&v19 + 1) = i;
      }
    }
    if ( v18 )
      sub_180010530(v18);
  }
  for ( j = (char *)v19; j != i; j += 16 )
  {
LABEL_28:
    v14 = *(__int64 **)(a1 + 8);
    v15 = sub_1800E0794((__int64 **)&v22, *(__int64 **)a1, v14, j);
    sub_1800E0B18(a1, &v23, *v15, v14);
  }
  return sub_180013300((__int64)&v19);
}
