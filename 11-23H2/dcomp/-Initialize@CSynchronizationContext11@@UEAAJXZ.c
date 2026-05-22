/*
 * XREFs of ?Initialize@CSynchronizationContext11@@UEAAJXZ @ 0x1801B1960
 * Callers:
 *     ?Initialize@CSynchronizationContext11Driver@@UEAAJXZ @ 0x1801B1B00 (-Initialize@CSynchronizationContext11Driver@@UEAAJXZ.c)
 *     ?Initialize@CSynchronizationContext11Driverless@@UEAAJXZ @ 0x1801B1DC0 (-Initialize@CSynchronizationContext11Driverless@@UEAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSynchronizationContext11::Initialize(CSynchronizationContext11 *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64 *); // rsi
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v1 = (_QWORD *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2);
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 1))(
         *((_QWORD *)this + 1),
         &GUID_086c0a12_48c5_4e23_862b_5a0cd18a181b,
         v1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 44;
    goto LABEL_11;
  }
  v6 = *((_QWORD *)this + 1);
  v7 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 488LL);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v7(v6, &v11);
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v11)(
         v11,
         &GUID_917600da_f58c_4c33_98d8_3e15b390fa24,
         (char *)this + 24);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 48;
LABEL_11:
    DoStackCaptureDirect(v4, v9);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v11);
  return v5;
}
