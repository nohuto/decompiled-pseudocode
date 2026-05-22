/*
 * XREFs of ?RequestGripStatusForPanel@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJPEBUHeatPanelInfo@@@Z @ 0x1801AF960
 * Callers:
 *     ?Thunk_RequestGripStatusForPanel_234@?$IHeatGripServicePrincipal_Receive@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180076440 (-Thunk_RequestGripStatusForPanel_234@-$IHeatGripServicePrincipal_Receive@VBamoHeatGripServicePri.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028AA0 (--1-$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoHeatGripServicePrincipalImpl@1@@Z @ 0x1801AF448 (--0-$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft_ea_1801AF448.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoHeatGripServicePrincipalImpl::RequestGripStatusForPanel(
        BamoImpl::BamoHeatGripServicePrincipalImpl *this,
        const struct HeatPanelInfo *a2)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v9; // rdi
  int v10; // eax
  int v12[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
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
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>(
      (__int64)v12,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32),
      (void (__fastcall ***)(_QWORD))this);
    v10 = (*(__int64 (__fastcall **)(char *, __int64, const struct HeatPanelInfo *))(*((_QWORD *)this - 2) + 96LL))(
            (char *)this - 16,
            v7,
            a2);
    v4 = v10;
    if ( v10 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, 0x87B2080C, 0);
    }
    else if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8F76,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v12[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::~CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>((__int64)v12);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F7A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
