/*
 * XREFs of ?RequestGripStatusForPanel@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJPEBUHeatPanelInfo@@@Z @ 0x1801828BC
 * Callers:
 *     ?Thunk_RequestGripStatusForPanel_203@?$IHeatGripServicePrincipal_Receive@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180182AA0 (-Thunk_RequestGripStatusForPanel_203@-$IHeatGripServicePrincipal_Receive@VBamoHeatGripServicePri.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoHeatGripServicePrincipalImpl@1@@Z @ 0x1801821EC (--0-$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801822E8 (--1-$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoHeatGripServicePrincipalImpl::RequestGripStatusForPanel(
        BamoImpl::BamoHeatGripServicePrincipalImpl *this,
        const struct HeatPanelInfo *a2)
{
  _QWORD *v4; // rdi
  int v5; // ecx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // ebx
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v4[5] + 36LL) == v5 )
        break;
      v4 = (_QWORD *)v4[6];
    }
    while ( v4 );
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>(
    (__int64)v10,
    *(_QWORD *)(*(_QWORD *)(v4[5] + 24LL) + 32LL),
    (__int64)this);
  v7 = (*(__int64 (__fastcall **)(char *, __int64, const struct HeatPanelInfo *))(*((_QWORD *)this - 2) + 96LL))(
         (char *)this - 16,
         v6,
         a2);
  v8 = v7;
  if ( v7 != -2018375668 && v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5FE3,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v10[0]);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::~CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>((__int64)v10);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FE7,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
