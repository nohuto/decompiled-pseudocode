/*
 * XREFs of ?GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x140069804
 * Callers:
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x140069BD4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsHandler::GetEndpointPropertyStore(
        CAPOEndpointNotificationsHandler *this,
        struct IPropertyStore **a2)
{
  struct IPropertyStore **v4; // rbx
  struct IPropertyStore *v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IPropertyStore **)((char *)this + 192);
  v5 = (struct IPropertyStore *)*((_QWORD *)this + 24);
  if ( !v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 9);
    v7 = *v6;
    *v4 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v7 + 32))(v6, 0LL, v4);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    v5 = *v4;
  }
  *a2 = v5;
  ((void (__fastcall *)(struct IPropertyStore *))v5->lpVtbl->AddRef)(v5);
  return 0LL;
}
