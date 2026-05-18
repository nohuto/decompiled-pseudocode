/*
 * XREFs of sub_180033400 @ 0x180033400
 * Callers:
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002634C @ 0x18002634C (sub_18002634C.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 *     sub_1800266EC @ 0x1800266EC (sub_1800266EC.c)
 *     sub_180026D64 @ 0x180026D64 (sub_180026D64.c)
 *     sub_1800271C8 @ 0x1800271C8 (sub_1800271C8.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_18002F09C @ 0x18002F09C (sub_18002F09C.c)
 *     sub_18002FE3C @ 0x18002FE3C (sub_18002FE3C.c)
 *     sub_180033930 @ 0x180033930 (sub_180033930.c)
 *     sub_1800339DC @ 0x1800339DC (sub_1800339DC.c)
 *     sub_180034328 @ 0x180034328 (sub_180034328.c)
 *     sub_18003475C @ 0x18003475C (sub_18003475C.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_180035C88 @ 0x180035C88 (sub_180035C88.c)
 *     sub_1800365A8 @ 0x1800365A8 (sub_1800365A8.c)
 *     sub_1800386F8 @ 0x1800386F8 (sub_1800386F8.c)
 *     sub_18004F904 @ 0x18004F904 (sub_18004F904.c)
 *     sub_18004FAB8 @ 0x18004FAB8 (sub_18004FAB8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180033400(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  const char *v9; // rdx
  _QWORD *i; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int j; // r14d
  __int64 v18; // rbx
  __int64 v19; // rdx
  _BOOL8 v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int k; // ebx
  _BYTE *v24; // rcx
  _QWORD *v25; // rsi
  __int64 *v26; // r14
  __int64 *m; // rbx
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-59h] BYREF
  __int64 v31; // [rsp+48h] [rbp-51h]
  __int64 v32; // [rsp+50h] [rbp-49h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h]
  _QWORD v34[3]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v35[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v36[16]; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v37[4]; // [rsp+98h] [rbp-1h] BYREF

  v30 = (_QWORD *)*a2;
  v3 = v30;
  v4 = a2[1];
  v31 = v4;
  *a2 = 0LL;
  a2[1] = 0LL;
  v29 = 0LL;
  v5 = sub_18001246C(&v32, &v30);
  sub_180034EC0(a1, 8LL, v5, &v29);
  sub_18002A0C4((__int64)(a1 + 1), (__int64)v36);
  v6 = sub_18003475C(a1);
  sub_18002A070(v6, (__int64)v35);
  v7 = sub_18001246C(&v29, &v30);
  sub_1800365A8(a1, v7);
  sub_18001DB68(
    &stru_1801C8288,
    3,
    "-----------------------------------------------------------------------------------");
  sub_18002E0A8(v37, v3 + 10);
  v8 = sub_180026650((__int64)v3);
  sub_18001DB68(&stru_1801C8288, 3, "Engine::DeleteDevice() -- removing device id %u -- %s", v8, v9);
  sub_180011B24((__int64)v37);
  sub_18002A244((__int64)(a1 + 14), (__int64)&v29);
  if ( (_QWORD *)sub_180026618((__int64)v3) == a1 )
  {
    for ( i = (_QWORD *)a1[11]; i != (_QWORD *)a1[12]; i = (_QWORD *)(v11 + 16) )
    {
      if ( sub_180015678(i, &v30) )
      {
        sub_180029FA0((__int64)&v29);
        sub_18002A0C4((__int64)(v3 + 3), (__int64)v37);
        v14 = sub_180026650((__int64)v3);
        v16 = sub_1800266EC(v15);
        for ( j = 0; j < v16; ++j )
        {
          sub_180026698((__int64)v3, &v29, j);
          v18 = v29;
          sub_18002A070(v29 + 8, (__int64)v34);
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 320LL))(v18, &v32);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 360LL))(v18, 0LL);
          sub_18002B8E0((__int64)&v32);
          sub_180010F54((__int64)v34);
          if ( *((_QWORD *)&v29 + 1) )
            sub_180010530(*((__int64 *)&v29 + 1));
        }
        sub_180015604(&v29, &v30);
        v19 = *(_QWORD *)(sub_18002F09C(a1 + 23, (__int64)v34, (__int64)&v29) + 16);
        v20 = !*(_BYTE *)(v19 + 25) && *((_QWORD *)&v29 + 1) >= *(_QWORD *)(v19 + 40);
        if ( *((_QWORD *)&v29 + 1) )
          sub_180010574(*((volatile signed __int32 **)&v29 + 1));
        if ( v20 )
        {
          sub_180015604(&v29, &v30);
          v21 = sub_18002FE3C(a1 + 23, (__int64)v34, (__int64)&v29);
          sub_18001246C(&v32, (_QWORD *)(*(_QWORD *)v21 + 48LL));
          if ( *((_QWORD *)&v29 + 1) )
            sub_180010574(*((volatile signed __int32 **)&v29 + 1));
          sub_180015604(&v29, &v30);
          sub_1800386F8(a1 + 23, &v29);
          if ( *((_QWORD *)&v29 + 1) )
            sub_180010574(*((volatile signed __int32 **)&v29 + 1));
          sub_180033930(a1, &v32);
          if ( v33 )
            sub_180010530(v33);
        }
        v22 = sub_18001246C(v34, &v30);
        sub_1800339DC(a1, v22);
        if ( sub_180026D64((__int64)v3) )
          (*(void (**)(void))(*v3 + 8LL))();
        for ( k = 0; k < v16; ++k )
        {
          sub_180026698((__int64)v3, &v29, k);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 176LL))(v29);
          if ( *((_QWORD *)&v29 + 1) )
            sub_180010530(*((__int64 *)&v29 + 1));
        }
        sub_18004FAB8(a1[64]);
        sub_18004F904(a1[64], v14);
        while ( (unsigned int)sub_1800266EC((__int64)v3) )
        {
          sub_180026698((__int64)v3, &v29, 0);
          sub_18002634C((__int64)v3, (__int64 *)&v29);
          if ( *((_QWORD *)&v29 + 1) )
            sub_180010530(*((__int64 *)&v29 + 1));
        }
        if ( sub_180026D64((__int64)v3) )
          sub_1800271C8(v24);
        sub_180010F54((__int64)v37);
        sub_18002A0C4((__int64)(a1 + 14), (__int64)v37);
        v25 = (_QWORD *)(a1[11] + 16LL * (unsigned int)sub_180034328(a1, &v30));
        v26 = (__int64 *)a1[12];
        for ( m = v25 + 2; m != v26; m += 2 )
        {
          sub_180011020(v25, m);
          v25 += 2;
        }
        v28 = *(_QWORD *)(a1[12] - 8LL);
        if ( v28 )
          sub_180010530(v28);
        a1[12] -= 16LL;
        sub_180010F54((__int64)v37);
        v29 = 0LL;
        sub_180011020(&v30, (__int64 *)&v29);
        if ( *((_QWORD *)&v29 + 1) )
          sub_180010530(*((__int64 *)&v29 + 1));
        sub_18001DB68(&stru_1801C8288, 3, "Engine::DeleteDevice() -- completed");
        sub_18001DB68(
          &stru_1801C8288,
          3,
          "-----------------------------------------------------------------------------------");
        sub_180035944(a1);
        sub_180035C88(a1);
        sub_180034F98(a1);
        sub_180010F54((__int64)v35);
        result = sub_180010F54((__int64)v36);
        v13 = v31;
        if ( !v31 )
          return result;
        return sub_180010530(v13);
      }
    }
  }
  sub_18001DB68(&stru_1801C8288, 3, "Engine::DeleteDevice() -- device is not attached to this engine");
  sub_180029FA0((__int64)&v29);
  sub_180010F54((__int64)v35);
  result = sub_180010F54((__int64)v36);
  if ( v4 )
  {
    v13 = v4;
    return sub_180010530(v13);
  }
  return result;
}
