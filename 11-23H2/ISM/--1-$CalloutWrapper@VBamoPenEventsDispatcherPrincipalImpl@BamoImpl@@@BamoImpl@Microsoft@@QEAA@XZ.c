/*
 * XREFs of ??1?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180015888
 * Callers:
 *     ?OnDisconnectedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ @ 0x180015720 (-OnDisconnectedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?AttachClient@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18004F310 (-AttachClient@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?SetDockRoutingPolicy@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18004F444 (-SetDockRoutingPolicy@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@.c)
 *     _BamoImpl::BamoPenEventsDispatcherPrincipalImpl::SetDockRoutingPolicy_::_1_::dtor$0 @ 0x18006C036 (_BamoImpl--BamoPenEventsDispatcherPrincipalImpl--SetDockRoutingPolicy_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ @ 0x1801AF4A0 (-OnPropertiesRefreshedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoPenEventsDispatcherStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801AF50C (_BamoImpl--BamoPenEventsDispatcherStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?SetButtonRoutingPolicy@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801AFA64 (-SetButtonRoutingPolicy@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJW4RoutingPolicy@Inpu.c)
 *     _BamoImpl::BamoPenEventsDispatcherPrincipalImpl::SetButtonRoutingPolicy_::_1_::dtor$0 @ 0x1801AFB84 (_BamoImpl--BamoPenEventsDispatcherPrincipalImpl--SetButtonRoutingPolicy_--_1_--dtor$0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
        __int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( v2 )
  {
    if ( (a1[2] & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v6);
    }
  }
  v4 = *a1;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
  }
  v5 = a1[1];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
}
