/*
 * XREFs of ?GetBufferInfo@CSynchronizationContext11@@UEAAJPEAUIUnknown@@PEAUFlipContentBufferFormatInfo@@PEAU_LUID@@PEAPEAX@Z @ 0x1801B1670
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSynchronizationContext11::GetBufferInfo(
        CSynchronizationContext11 *this,
        struct IUnknown *a2,
        struct FlipContentBufferFormatInfo *a3,
        struct _LUID *a4,
        void **a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int64 *); // rdi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  HANDLE v15; // rax
  unsigned int v16; // edx
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+80h] [rbp-80h]
  _BYTE v26[296]; // [rsp+90h] [rbp-70h] BYREF
  struct _LUID v27; // [rsp+1B8h] [rbp+B8h]

  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  hObject = 0LL;
  v19 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
         &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 71;
  }
  else
  {
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
           v19,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v22);
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 72;
    }
    else
    {
      v9 = v19;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v19 + 104LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &hObject,
        0LL);
      v7 = v10(v9, 0LL, 0x10000000LL, 0LL, &hObject);
      v8 = v7;
      if ( v7 < 0 )
      {
        v16 = 73;
      }
      else
      {
        v11 = v19;
        v12 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v19 + 48LL);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v7 = v12(v11, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v21);
        v8 = v7;
        if ( v7 < 0 )
        {
          v16 = 76;
        }
        else
        {
          v13 = v21;
          v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 56LL);
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v7 = v14(v13, &v20);
          v8 = v7;
          if ( v7 < 0 )
          {
            v16 = 77;
          }
          else
          {
            v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 64LL))(v20, v26);
            v8 = v7;
            if ( v7 >= 0 )
            {
              (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 80LL))(v22, v23);
              *(_DWORD *)a3 = v24;
              *((_BYTE *)a3 + 4) = (v25 & 0x100000) != 0;
              *a4 = v27;
              v15 = hObject;
              hObject = 0LL;
              *a5 = v15;
              goto LABEL_21;
            }
            v16 = 78;
          }
        }
      }
    }
  }
  DoStackCaptureDirect(v7, v16);
LABEL_21:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v22);
  return v8;
}
