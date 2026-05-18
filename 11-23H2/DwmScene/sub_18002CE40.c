/*
 * XREFs of sub_18002CE40 @ 0x18002CE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800203CC @ 0x1800203CC (sub_1800203CC.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_18002BACC @ 0x18002BACC (sub_18002BACC.c)
 *     sub_18002C0C0 @ 0x18002C0C0 (sub_18002C0C0.c)
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_18002D584 @ 0x18002D584 (sub_18002D584.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     sub_180074220 @ 0x180074220 (sub_180074220.c)
 *     sub_1800A1558 @ 0x1800A1558 (sub_1800A1558.c)
 *     sub_1800A156C @ 0x1800A156C (sub_1800A156C.c)
 *     sub_1800A175C @ 0x1800A175C (sub_1800A175C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002CE40(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // r15
  _QWORD *v10; // rcx
  char v11; // bl
  bool v12; // si
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // r10
  char v17; // bl
  char v18; // r14
  __int64 *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v23; // [rsp+38h] [rbp-40h]
  __int64 v24[4]; // [rsp+40h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 376LL))(a1, &v22);
  result = sub_180011C50(v4, &v20);
  if ( v23 )
    result = sub_180010574(v23);
  v6 = v20;
  if ( v20 )
  {
    v7 = sub_180026618(v20);
    v8 = sub_180034094(v7, a2);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 5LL);
    if ( (_BYTE)result )
    {
      v10 = (_QWORD *)a1[48];
      v11 = 1;
      v12 = v10 && (unsigned __int8)sub_1800203CC(v10);
      v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D4628, 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D4648, 0LL);
      LOBYTE(v14) = v13;
      sub_1800A1558(*v9, v14);
      if ( v16 || v12 || *((_BYTE *)a1 + 400) )
        v11 = 0;
      LOBYTE(v15) = v11;
      result = sub_1800A156C(*v9, v15);
      if ( v13 )
      {
        sub_1800A175C(*v9);
        v17 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D4728, 0LL);
        v18 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D4748, 0LL);
        v19 = sub_18002C0C0(a1, v24);
        sub_18002BACC(a1 + 52, v19);
        result = sub_18002D584(v24);
        if ( v17 )
        {
          if ( v18 )
          {
            result = a1[53];
            if ( result != a1[52] )
              sub_180034880();
          }
          else
          {
            result = sub_180074220(a1[57], a1 + 52);
          }
        }
        if ( v12 )
          result = sub_18002C5EC((__int64)a1);
      }
    }
  }
  if ( v21 )
    return sub_180010530(v21);
  return result;
}
