/*
 * XREFs of ?SetButtonRoutingPolicy@BamoPenEventsDispatcherPrincipalImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180191954
 * Callers:
 *     ?Thunk_SetButtonRoutingPolicy_16@?$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180192090 (-Thunk_SetButtonRoutingPolicy_16@-$IPenEventsDispatcherPrincipal_Receive@VBamoPenEventsDispatche.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800424A4 (--1-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@@Z @ 0x18018FC84 (--0-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Micro_ea_18018FC84.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsDispatcherPrincipalImpl::SetButtonRoutingPolicy(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rdi
  int v5; // ecx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // ebx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v4[5] + 36LL) == v5 )
        break;
      v4 = (_QWORD *)v4[6];
    }
    while ( v4 );
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
    (__int64)v10,
    *(_QWORD *)(*(_QWORD *)(v4[5] + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))a1);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v6, a2);
  v8 = v7;
  if ( v7 != -2018375668 && v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1C5,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v10[0]);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(v10);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1C9,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
