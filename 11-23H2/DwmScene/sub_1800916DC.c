/*
 * XREFs of sub_1800916DC @ 0x1800916DC
 * Callers:
 *     sub_180091900 @ 0x180091900 (sub_180091900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_1800914D8 @ 0x1800914D8 (sub_1800914D8.c)
 *     sub_180091564 @ 0x180091564 (sub_180091564.c)
 *     sub_1800916AC @ 0x1800916AC (sub_1800916AC.c)
 *     sub_18009195C @ 0x18009195C (sub_18009195C.c)
 *     sub_1800919A8 @ 0x1800919A8 (sub_1800919A8.c)
 *     sub_180091C08 @ 0x180091C08 (sub_180091C08.c)
 *     sub_180091EE8 @ 0x180091EE8 (sub_180091EE8.c)
 *     sub_180091F1C @ 0x180091F1C (sub_180091F1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800916DC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h]
  _QWORD *v19; // [rsp+40h] [rbp-C0h]
  __int64 *v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 *v22; // [rsp+58h] [rbp-A8h]
  _BYTE v23[184]; // [rsp+60h] [rbp-A0h] BYREF
  char v24[32]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+138h] [rbp+38h] BYREF

  v19 = a2;
  v20 = a4;
  v18 = 0;
  v8 = sub_18001C190();
  v9 = v8;
  v21 = v8;
  if ( v8 )
  {
    v22 = &v17;
    v10 = *a4;
    *a4 = 0LL;
    v17 = v10;
    v11 = sub_180091C08(v23, a3);
    v8 = sub_1800914D8(v9, v11, &v17);
  }
  sub_180091564(a2, v8);
  v18 = 1;
  *(_QWORD *)(*a2 + 8LL) = *(_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 136))(
                                        *(_QWORD *)(a1 + 136),
                                        v24);
  if ( sub_180011DE0(a3) )
  {
    v12 = sub_18001246C(v24, a3);
    v13 = (__int64 *)sub_18009195C(&v17, v12);
  }
  else
  {
    if ( !sub_180011DE0(a3 + 2) )
    {
      sub_180010DD0(v24, (__int64)"Tween options must have either value or property not null");
      sub_18001C3BC((__int64)pExceptionObject, v24, 0);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a3[2] + 8LL))(a3[2]);
    v14 = sub_18001246C(v24, a3 + 2);
    v13 = (__int64 *)sub_1800919A8(&v17, v14);
  }
  sub_1800916AC((__int64 *)(*a2 + 32LL), v13);
  sub_180091EE8(&v17);
  *(_QWORD *)v24 = a1 + 56;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 56));
  v15 = *(_QWORD **)(a1 + 32);
  if ( v15 == *(_QWORD **)(a1 + 40) )
  {
    sub_180071228((char **)(a1 + 24), *(char **)(a1 + 32), a2);
  }
  else
  {
    sub_18001246C(v15, a2);
    *(_QWORD *)(a1 + 32) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 56));
  sub_180091F1C(a4);
  return a2;
}
