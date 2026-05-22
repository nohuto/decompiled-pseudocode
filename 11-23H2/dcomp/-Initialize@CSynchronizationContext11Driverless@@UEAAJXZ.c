/*
 * XREFs of ?Initialize@CSynchronizationContext11Driverless@@UEAAJXZ @ 0x1801B1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CSynchronizationContext11@@UEAAJXZ @ 0x1801B1960 (-Initialize@CSynchronizationContext11@@UEAAJXZ.c)
 */

__int64 __fastcall CSynchronizationContext11Driverless::Initialize(void **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v4; // rsi
  void *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 (__fastcall *v8)(__int64 *, _QWORD, _QWORD, GUID *, void **); // r15
  __int64 *v9; // rsi
  void *v10; // rcx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, void **); // r15
  __int64 *v13; // rbx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64 *, _QWORD, _QWORD, GUID *, void **); // r15
  void *v17; // rsi
  __int64 (__fastcall *v18)(void *, _QWORD, __int64, _QWORD, void **); // rdi
  unsigned int v19; // edx
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v25[320]; // [rsp+58h] [rbp-B0h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v2 = CSynchronizationContext11::Initialize((CSynchronizationContext11 *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 19;
    goto LABEL_25;
  }
  v2 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))this[1])(
         this[1],
         &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
         &v23);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 22;
    goto LABEL_25;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v23 + 56LL))(
         v23,
         &v22);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 23;
    goto LABEL_25;
  }
  v2 = (**v22)(v22, &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e, &v21);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 24;
    goto LABEL_25;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 144LL))(v21, v25);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 25;
    goto LABEL_25;
  }
  v4 = (__int64 *)this[1];
  v5 = this[6];
  v6 = *v4;
  v7 = ~v25[304] & 8;
  this[6] = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, GUID *, void **))(v6 + 544);
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  v2 = v8(v4, 0LL, v7, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, this + 6);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 35;
    goto LABEL_25;
  }
  v9 = (__int64 *)this[2];
  v10 = this[7];
  v11 = *v9;
  this[7] = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64 *, void **))(v11 + 120);
  if ( v10 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  v2 = v12(v9, this + 7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 38;
    goto LABEL_25;
  }
  v13 = (__int64 *)this[1];
  v14 = this[4];
  v15 = *v13;
  this[4] = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, GUID *, void **))(v15 + 544);
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  v2 = v16(v13, 0LL, v7 | 2, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, this + 4);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 44;
    goto LABEL_25;
  }
  v17 = this[4];
  v18 = *(__int64 (__fastcall **)(void *, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v17 + 56LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 5,
    0LL);
  v2 = v18(v17, 0LL, 0x10000000LL, 0LL, this + 5);
  v3 = v2;
  if ( v2 < 0 )
  {
    v19 = 50;
LABEL_25:
    DoStackCaptureDirect(v2, v19);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v24);
  return v3;
}
