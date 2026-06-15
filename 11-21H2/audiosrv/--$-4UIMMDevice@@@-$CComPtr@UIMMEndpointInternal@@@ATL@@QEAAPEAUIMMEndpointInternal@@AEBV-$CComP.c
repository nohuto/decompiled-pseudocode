/*
 * XREFs of ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180045C90
 * Callers:
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180045B50 (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown *__fastcall ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(
        struct IUnknown **a1,
        struct IUnknown **a2)
{
  struct IUnknown *v4; // rdi
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  bool v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  if ( v5 )
  {
    if ( !v4 )
      goto LABEL_3;
    v9 = 0LL;
    v8 = 0LL;
    (**v5)(v5, &GUID_00000000_0000_0000_c000_000000000046, &v9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
      v4,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v8);
    v6 = v9 == v8;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  }
  else
  {
    if ( v4 )
    {
LABEL_3:
      v6 = 0;
      goto LABEL_4;
    }
    v6 = 1;
  }
LABEL_4:
  if ( v6 )
    return *a1;
  else
    return ATL::AtlComQIPtrAssign(a1, *a2, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
}
