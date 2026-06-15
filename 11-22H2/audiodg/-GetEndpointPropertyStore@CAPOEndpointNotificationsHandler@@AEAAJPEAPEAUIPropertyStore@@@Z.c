/*
 * XREFs of ?GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x140071B28
 * Callers:
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400721F4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsHandler::GetEndpointPropertyStore(
        CAPOEndpointNotificationsHandler *this,
        struct IPropertyStore **a2)
{
  struct IPropertyStore **v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  struct IPropertyStore *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct IPropertyStore **)((char *)this + 168);
  if ( *((_QWORD *)this + 21)
    || (v4 = (__int64 *)*((_QWORD *)this + 5),
        v5 = *v4,
        *v3 = 0LL,
        v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v5 + 32))(v4, 0LL, v3),
        v7 = v6,
        v6 >= 0) )
  {
    v9 = *v3;
    *a2 = *v3;
    ((void (__fastcall *)(struct IPropertyStore *))v9->lpVtbl->AddRef)(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
