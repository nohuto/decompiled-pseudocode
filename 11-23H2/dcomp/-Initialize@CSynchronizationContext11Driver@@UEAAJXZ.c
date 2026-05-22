/*
 * XREFs of ?Initialize@CSynchronizationContext11Driver@@UEAAJXZ @ 0x1801B1B00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CSynchronizationContext11@@UEAAJXZ @ 0x1801B1960 (-Initialize@CSynchronizationContext11@@UEAAJXZ.c)
 */

__int64 __fastcall CSynchronizationContext11Driver::Initialize(void **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  char v4; // al
  __int64 *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rax
  void *v8; // rcx
  __int64 (__fastcall *v9)(__int64 *, _QWORD, __int64, GUID *, void **); // rdi
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _QWORD, void **); // rdi
  void *v12; // rcx
  unsigned int v13; // edx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v2 = CSynchronizationContext11::Initialize((CSynchronizationContext11 *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 13;
    goto LABEL_12;
  }
  v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[1] + 304LL))(this[1]);
  v5 = (__int64 *)this[1];
  v6 = this + 4;
  *((_BYTE *)this + 64) = (v4 & 8) == 0;
  v7 = *v5;
  v8 = this[4];
  this[4] = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, void **))(v7 + 544);
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v2 = v9(v5, 0LL, 2LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, this + 4);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 23;
    goto LABEL_12;
  }
  v10 = *v6;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)*v6 + 56LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 5,
    0LL);
  v2 = v11(v10, 0LL, 0x10000000LL, 0LL, this + 5);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 29;
LABEL_12:
    DoStackCaptureDirect(v2, v13);
    goto LABEL_13;
  }
  v12 = this[6];
  this[6] = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  (**(void (__fastcall ***)(_QWORD, GUID *, char *))*v6)(
    *v6,
    &GUID_ea828e37_ef99_4da2_88cd_ce3bcaffa576,
    (char *)this + 48);
LABEL_13:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v15);
  return v3;
}
