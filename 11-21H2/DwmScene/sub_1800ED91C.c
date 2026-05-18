/*
 * XREFs of sub_1800ED91C @ 0x1800ED91C
 * Callers:
 *     sub_1800EE3C8 @ 0x1800EE3C8 (sub_1800EE3C8.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_1800E3AA8 @ 0x1800E3AA8 (sub_1800E3AA8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800ED91C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-A9h] BYREF
  __int128 v27; // [rsp+30h] [rbp-99h] BYREF
  __int64 v28; // [rsp+40h] [rbp-89h]
  __int64 v29; // [rsp+48h] [rbp-81h]
  _QWORD v30[2]; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v32[4]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v33[2]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v34[2]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v35[32]; // [rsp+B0h] [rbp-19h] BYREF
  char *v36; // [rsp+D0h] [rbp+7h] BYREF
  unsigned __int64 v37; // [rsp+E8h] [rbp+1Fh]

  v32[2] = (__int64)a2;
  v32[3] = (__int64)a3;
  v27 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
      if ( v8 == v7 )
      {
        v27 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v9 = sub_180016ED0(v27, v33);
  v10 = *v9;
  v11 = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  v30[0] = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v10;
  v30[1] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v11;
  sub_180010910((__int64)v30);
  sub_180010910((__int64)v33);
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 104);
  }
  v28 = *(_QWORD *)(a1 + 96);
  v29 = v12;
  sub_180018704((__int64)v32);
  v13 = *a3;
  v26 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  sub_1800E3AA8(v32[0], &v26, 5u);
  v14 = (__int64 *)sub_18002850C(v27);
  v15 = sub_180017558(v14, v34);
  v16 = *v15;
  v17 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v31[0] = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v16;
  v31[1] = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v17;
  sub_180010910((__int64)v31);
  sub_180010910((__int64)v34);
  v18 = *(_QWORD *)(a1 + 128);
  v19 = sub_18002B9EC(a1, (__int64 *)&v36);
  v20 = (__int64 *)sub_18001DC84((__int64)v35, v19);
  sub_18002BC44(v18, v20);
  if ( v37 >= 0x10 )
    sub_180010884(v36, v37 + 1);
  sub_18005D638(*(_QWORD *)(a1 + 128), (_QWORD *)(a1 + 96));
  v21 = *(_QWORD *)(a1 + 112);
  v22 = *a2;
  if ( v21 != *a2 )
  {
    if ( v22 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*a2);
      v21 = *(_QWORD *)(a1 + 112);
    }
    *(_QWORD *)(a1 + 112) = v22;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  sub_180010910((__int64)v32);
  result = sub_180010910((__int64)&v27);
  v24 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return result;
}
