/*
 * XREFs of sub_18003FE40 @ 0x18003FE40
 * Callers:
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 *     sub_180014564 @ 0x180014564 (sub_180014564.c)
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_18006A16C @ 0x18006A16C (sub_18006A16C.c)
 *     sub_18006A2D8 @ 0x18006A2D8 (sub_18006A2D8.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_180040B98 @ 0x180040B98 (sub_180040B98.c)
 *     sub_1800430C4 @ 0x1800430C4 (sub_1800430C4.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18003FE40(__int64 a1, __int64 **a2)
{
  volatile signed __int32 *v4; // rdx
  _QWORD *v5; // r12
  _QWORD *i; // rdi
  __int64 v7; // rcx
  bool v8; // bl
  __int64 v9; // rbx
  __int64 **v10; // rdx
  volatile signed __int32 *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 *v20; // rcx
  __int64 v21; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-39h] BYREF
  __int128 v24; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v27; // [rsp+60h] [rbp+7h] BYREF
  char v28; // [rsp+68h] [rbp+Fh]
  char *v29; // [rsp+70h] [rbp+17h] BYREF
  __int64 v30; // [rsp+78h] [rbp+1Fh]
  __int64 v31; // [rsp+80h] [rbp+27h]

  sub_1800436D4(a1);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v23[0] = *a2;
  v23[1] = v4;
  v5 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v5; i += 2 )
  {
    v7 = i[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = i[1];
    }
    v25[0] = *i;
    v25[1] = v7;
    v8 = sub_180016240(v23, v25);
    sub_180010910((__int64)v25);
    if ( v8 )
      break;
  }
  v9 = sub_18001287C((__int64)i);
  sub_180010910((__int64)v23);
  v10 = *(__int64 ***)(a1 + 384);
  if ( (__int64 **)v9 != v10 )
    return 0;
  if ( v10 == *(__int64 ***)(a1 + 392) )
  {
    sub_180012720((__int64 *)(a1 + 376), (__int64)v10, a2);
  }
  else
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v11 = (volatile signed __int32 *)a2[1];
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    *v10 = *a2;
    v10[1] = a2[1];
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_1800430C4(a1);
  (*(void (__fastcall **)(__int64 *))(**a2 + 104))(*a2);
  (*(void (__fastcall **)(__int64 *))(**a2 + 136))(*a2);
  v12 = sub_180040B98(a1);
  if ( v12 )
  {
    sub_180039EBC(v12, &v29);
    v13 = 0;
    v14 = v30;
    v15 = v29;
    if ( (v30 - (__int64)v29) >> 4 )
    {
      v16 = 0LL;
      do
      {
        v17 = 2 * v16;
        v18 = *(_QWORD *)&v15[8 * v17 + 8];
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          v18 = *(_QWORD *)&v15[8 * v17 + 8];
        }
        v19 = *(_QWORD *)&v15[8 * v17];
        v26[0] = v19;
        v26[1] = v18;
        sub_18002C460(v19 + 24, (__int64)&v27);
        v20 = *a2;
        v21 = **a2;
        v24 = 0LL;
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          v19 = v26[0];
        }
        *(_QWORD *)&v24 = v19;
        *((_QWORD *)&v24 + 1) = v18;
        (*(void (__fastcall **)(__int64 *, __int128 *))(v21 + 88))(v20, &v24);
        if ( v28 )
          j_LanguageEnumProc(v27);
        sub_180010910((__int64)v26);
        ++v13;
        v14 = v30;
        v15 = v29;
        v16 = v13;
      }
      while ( v13 < (unsigned __int64)((v30 - (__int64)v29) >> 4) );
    }
    if ( v15 )
    {
      sub_1800126E8((__int64)v15, v14);
      sub_180010884(v29, (v31 - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(__int64 *))(**a2 + 120))(*a2);
  return 1;
}
