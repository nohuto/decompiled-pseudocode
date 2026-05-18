/*
 * XREFs of sub_1800A12C4 @ 0x1800A12C4
 * Callers:
 *     sub_1800A2E10 @ 0x1800A2E10 (sub_1800A2E10.c)
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 *     sub_1800A11C8 @ 0x1800A11C8 (sub_1800A11C8.c)
 *     sub_1800A1650 @ 0x1800A1650 (sub_1800A1650.c)
 *     sub_1800A1698 @ 0x1800A1698 (sub_1800A1698.c)
 *     sub_1800A189C @ 0x1800A189C (sub_1800A189C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_1800A12C4(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  _QWORD *v19; // r14
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  void (__fastcall ***v24)(_QWORD, __int64); // rcx
  struct _Mtx_internal_imp_t *v25; // rbx
  int v26; // eax
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v31)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v32; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v34[4]; // [rsp+68h] [rbp-98h] BYREF
  char v35[8]; // [rsp+88h] [rbp-78h] BYREF
  char v36[184]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v37[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+168h] [rbp+68h] BYREF

  v34[2] = a2;
  v34[3] = a4;
  v8 = sub_18001D684();
  if ( v8 )
  {
    v32 = &v30;
    v9 = *a4;
    *a4 = 0LL;
    v30 = v9;
    v10 = sub_1800A189C(v36, a3);
    v11 = sub_1800A11C8(v8, v10, &v30);
  }
  else
  {
    v11 = 0LL;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = sub_18001D684();
  if ( v12 )
  {
    *(_DWORD *)(v12 + 8) = 1;
    *(_DWORD *)(v12 + 12) = 1;
    *(_QWORD *)v12 = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
    *(_QWORD *)(v12 + 16) = v11;
  }
  *a2 = v11;
  a2[1] = v12;
  *(_QWORD *)(*a2 + 8) = *(_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 136))(
                                      *(_QWORD *)(a1 + 136),
                                      v35);
  if ( sub_1800122C0(a3) )
  {
    v13 = *a3;
    v14 = a3[1];
    if ( v14 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
      v13 = *a3;
      v14 = a3[1];
    }
    v33[0] = v13;
    v33[1] = v14;
    v15 = (__int64 *)sub_1800A1650(&v31, v33);
    v16 = *a2;
    v17 = *v15;
    *v15 = 0LL;
    v18 = *(void (__fastcall ****)(_QWORD, __int64))(v16 + 32);
    *(_QWORD *)(v16 + 32) = v17;
    if ( v18 )
      (**v18)(v18, 1LL);
    if ( v31 )
      (**v31)(v31, 1LL);
  }
  else
  {
    v19 = a3 + 2;
    if ( !sub_1800122C0(a3 + 2) )
    {
      sub_1800113D0(v37, "Tween options must have either value or property not null");
      sub_18001D8E4((__int64)pExceptionObject, (const char *)v37, 0);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 8LL))(*v19);
    v20 = a3[3];
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = a3[3];
    }
    v34[0] = *v19;
    v34[1] = v20;
    v21 = (__int64 *)sub_1800A1698(&v32, v34);
    v22 = *a2;
    v23 = *v21;
    *v21 = 0LL;
    v24 = *(void (__fastcall ****)(_QWORD, __int64))(v22 + 32);
    *(_QWORD *)(v22 + 32) = v23;
    if ( v24 )
      (**v24)(v24, 1LL);
    if ( v32 )
      (*(void (__fastcall **)(__int64 *, __int64))*v32)(v32, 1LL);
  }
  v25 = (struct _Mtx_internal_imp_t *)(a1 + 56);
  v26 = Mtx_lock((_Mtx_t)(a1 + 56));
  if ( v26 )
    std::_Throw_C_error(v26);
  v27 = *(__int64 **)(a1 + 32);
  if ( v27 == *(__int64 **)(a1 + 40) )
  {
    sub_180012720((__int64 *)(a1 + 24), (__int64)v27, a2);
  }
  else
  {
    *v27 = 0LL;
    v27[1] = 0LL;
    v28 = a2[1];
    if ( v28 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
      v25 = (struct _Mtx_internal_imp_t *)(a1 + 56);
    }
    *v27 = *a2;
    v27[1] = a2[1];
    *(_QWORD *)(a1 + 32) += 16LL;
  }
  Mtx_unlock(v25);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a4 + 8LL))(*a4, 1LL);
  return a2;
}
