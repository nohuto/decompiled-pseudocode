/*
 * XREFs of ?CheckSupport@CSynchronizationContext11@@SAJPEAUID3D11Device@@PEA_N1@Z @ 0x1801B1468
 * Callers:
 *     ?CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z @ 0x1801AEAF4 (-CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z.c)
 *     ?Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEB84 (-Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSynchronizationContext11::CheckSupport(struct ID3D11Device *a1, bool *a2, bool *a3)
{
  struct ID3D11DeviceVtbl *lpVtbl; // rax
  bool v4; // di
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[320]; // [rsp+60h] [rbp-A0h] BYREF

  lpVtbl = a1->lpVtbl;
  v4 = 0;
  v16 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct ID3D11Device *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
         &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 22;
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v14 + 56LL))(
         v14,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 23;
    goto LABEL_12;
  }
  v8 = (**v13)(v13, &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 24;
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 144LL))(v12, v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 25;
LABEL_12:
    DoStackCaptureDirect(v8, v10);
    goto LABEL_13;
  }
  *a2 = (v17[304] & 0x18) != 0;
  if ( ((int (__fastcall *)(struct ID3D11Device *, __int64, int *))a1->lpVtbl->CheckFeatureSupport)(a1, 20LL, &v15) >= 0 )
    v4 = v15 != 0;
  *a3 = v4;
LABEL_13:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v13);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v16);
  return v9;
}
