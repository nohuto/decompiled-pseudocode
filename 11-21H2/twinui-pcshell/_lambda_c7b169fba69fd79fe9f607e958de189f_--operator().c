/*
 * XREFs of _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x1800930F8
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x1800A4864 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, __int64, __int64, int, char *); // r14
  char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  char v14; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v16[32]; // [rsp+68h] [rbp-70h] BYREF

  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int, char *))(*(_QWORD *)a2 + 24LL);
  v9 = &v14;
  if ( *(_QWORD *)(a1 + 24) )
    v9 = *(char **)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v15, a1 + 8) + 24);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v16, a1);
  return v8(a2, *(_QWORD *)(v12 + 24), a3, v11, v10, a4, v9);
}
