/*
 * XREFs of ?SetButtonRoutingPolicy@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801BDA44
 * Callers:
 *     ?Thunk_SetButtonRoutingPolicy_16@?$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801BE1E0 (-Thunk_SetButtonRoutingPolicy_16@-$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatche.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800160E8 (--1-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@@Z @ 0x18004FDDC (--0-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Micro_ea_18004FDDC.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsDispatcherPrincipalImpl::SetButtonRoutingPolicy(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v9; // rdi
  int v10; // eax
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = *(_QWORD **)(a1 + 32);
  if ( v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v5[4] + 36LL) == v6 )
        break;
      v5 = (_QWORD *)v5[5];
    }
    while ( v5 );
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
  v8 = *(_QWORD *)(v5[4] + 24LL);
  v9 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v8 + 32);
  if ( *(int *)(a1 + 8) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
      (__int64)v12,
      *(_QWORD *)(v8 + 32),
      (void (__fastcall ***)(_QWORD))a1);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v7, a2);
    v4 = v10;
    if ( v10 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, 0x87B2080C, 0);
    }
    else if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFBBB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v12[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(v12);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFBBF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
