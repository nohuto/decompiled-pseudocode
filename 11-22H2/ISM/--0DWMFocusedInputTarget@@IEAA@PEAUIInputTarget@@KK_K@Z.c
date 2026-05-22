/*
 * XREFs of ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x180027568
 * Callers:
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x180027AE0 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 * Callees:
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180027D9C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::DWMFocusedInputTarget(
        DWMFocusedInputTarget *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *(_QWORD *)this = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 4) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 5) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 7) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 16) = a3;
  *((_DWORD *)this + 17) = a4;
  *((_QWORD *)this + 9) = a5;
  *((_QWORD *)this + 10) = 0LL;
  v9 = 0LL;
  a5 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IInputTarget *, GUID *, unsigned __int64 *))a2)(
      a2,
      &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea,
      &a5);
    v9 = a5;
  }
  if ( v9 )
  {
    v10 = (char *)(*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v16);
    v11 = 0LL;
    if ( &v15 != v10 )
    {
      v11 = *(_QWORD *)v10;
      *(_QWORD *)v10 = 0LL;
    }
    v12 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v9 = a5;
  }
  if ( v9 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( !*((_QWORD *)this + 10) )
    DWMFocusedInputTarget::PopulateInputSiteFromViewId(this);
  return this;
}
