/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x18018251C
 * Callers:
 *     ?CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUHeatGripReport@@@Z @ 0x180182468 (-CallGripStatusForPanelReceivedOnStub@BamoHeatGripServicePrincipalImpl@BamoImpl@@CAJPEAVBamoStub.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x1801824C0 (-GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServiceStubImpl *this,
        const struct HeatGripReport *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  _QWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v14; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+A8h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24828LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v5 = -2018375660;
    v6 = 24832LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
  if ( v5 < 0 )
  {
    v6 = 24839LL;
    goto LABEL_5;
  }
  v8 = *(_OWORD *)a2;
  v10[0] = v14;
  v9 = *((_QWORD *)a2 + 2);
  v10[1] = v15;
  v11 = v8;
  v12 = v9;
  return CoreUICallSend(v16, v10, 2LL, 42LL);
}
