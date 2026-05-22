/*
 * XREFs of ?RestrictToOutput@CPresentationSurface@@UEAAJPEAUIUnknown@@@Z @ 0x1801B0410
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CPresentationSurface::RestrictToOutput(CPresentationSurface *this, struct IUnknown *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  __int64 v9; // [rsp+20h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v11[88]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+88h] [rbp-20h]

  v9 = 0LL;
  CPresentationManager::Lock(*((_QWORD *)this + 3), (__int64)&v10);
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
         &v9) < 0 )
  {
    v5 = -2147024809;
    v6 = 424;
    v7 = -2147024809;
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 56LL))(v9, v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 414;
    v7 = v4;
LABEL_7:
    DoStackCaptureDirect(v7, v6);
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 37) != (_DWORD)v12 )
  {
    *((_DWORD *)this + 37) = v12;
    *((_BYTE *)this + 76) = 1;
  }
LABEL_8:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v9);
  return v5;
}
