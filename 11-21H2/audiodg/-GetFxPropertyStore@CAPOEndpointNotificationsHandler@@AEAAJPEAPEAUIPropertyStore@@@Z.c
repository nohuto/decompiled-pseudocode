/*
 * XREFs of ?GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x1400698A8
 * Callers:
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x140069BD4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOEndpointNotificationsHandler::GetFxPropertyStore(
        CAPOEndpointNotificationsHandler *this,
        struct IPropertyStore **a2)
{
  struct IPropertyStore **v4; // rdi
  struct IPropertyStore *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, struct IPropertyStore **); // rbp
  struct IPropertyStore *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct IPropertyStore **)((char *)this + 200);
  v5 = (struct IPropertyStore *)*((_QWORD *)this + 25);
  if ( !v5 )
  {
    v14 = 0LL;
    v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
           *((_QWORD *)this + 9),
           &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
           &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 65LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v6);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
      return v7;
    }
    v9 = v14;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v14 + 40LL);
    v11 = *v4;
    *v4 = 0LL;
    if ( v11 )
      ((void (__fastcall *)(struct IPropertyStore *))v11->lpVtbl->Release)(v11);
    v6 = v10(v9, 0LL, v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 66LL;
      goto LABEL_8;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
    v5 = *v4;
  }
  *a2 = v5;
  ((void (__fastcall *)(struct IPropertyStore *))v5->lpVtbl->AddRef)(v5);
  return 0LL;
}
