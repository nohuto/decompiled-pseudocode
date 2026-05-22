/*
 * XREFs of ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801B98CC
 * Callers:
 *     ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x1801B93B8 (-CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?UIAHitTestResponse@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@@Z @ 0x1801B9870 (-UIAHitTestResponse@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestStubImpl::UIAHitTestResponse(
        BamoImpl::BamoUIAHitTestStubImpl *this,
        const struct _GUID *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm0
  _QWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+90h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      59789LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v5 = -2018375660;
    v6 = 59793LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
  if ( v5 < 0 )
  {
    v6 = 59800LL;
    goto LABEL_5;
  }
  v8 = (__int128)*a2;
  v9[0] = v12;
  v9[1] = v13;
  v10 = v8;
  return CoreUICallSend(v14, v9, 2LL, 90LL);
}
