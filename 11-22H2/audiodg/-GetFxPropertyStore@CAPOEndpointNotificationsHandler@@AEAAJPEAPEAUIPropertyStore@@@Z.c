/*
 * XREFs of ?GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x140071BC4
 * Callers:
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400721F4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOEndpointNotificationsHandler::GetFxPropertyStore(
        CAPOEndpointNotificationsHandler *this,
        struct IPropertyStore **a2)
{
  struct IPropertyStore **v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, struct IPropertyStore **); // rbp
  struct IPropertyStore *v9; // rcx
  struct IPropertyStore *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct IPropertyStore **)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
  {
    v13 = 0LL;
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5))(
           *((_QWORD *)this + 5),
           &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
           &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 64LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v13);
      return v5;
    }
    v7 = v13;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v13 + 40LL);
    v9 = *v3;
    *v3 = 0LL;
    if ( v9 )
      ((void (__fastcall *)(struct IPropertyStore *))v9->lpVtbl->Release)(v9);
    v4 = v8(v7, 0LL, v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 65LL;
      goto LABEL_8;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v13);
  }
  v11 = *v3;
  *a2 = *v3;
  ((void (__fastcall *)(struct IPropertyStore *))v11->lpVtbl->AddRef)(v11);
  return 0LL;
}
