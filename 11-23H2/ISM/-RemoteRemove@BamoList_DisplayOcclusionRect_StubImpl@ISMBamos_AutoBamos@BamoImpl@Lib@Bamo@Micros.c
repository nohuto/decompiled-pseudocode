/*
 * XREFs of ?RemoteRemove@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x1801500DC
 * Callers:
 *     ?CallRemoteRemoveOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x18014D5A4 (-CallRemoteRemoveOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@.c)
 *     ?RemoteRemove@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x180150080 (-RemoteRemove@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteRemove(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34A6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 56) )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = -2018375660;
    if ( v4 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v4 + 16) + 32LL),
        0x87B20814,
        0);
    v6 = 13487LL;
    goto LABEL_7;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v12, &v10, &v11);
  if ( v5 < 0 )
  {
    v6 = 13494LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8[0] = v10;
  v8[1] = v11;
  return CoreUICallSend(v12, v8, 2LL, 100LL);
}
