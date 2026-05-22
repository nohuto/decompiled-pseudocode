/*
 * XREFs of ?RemoteClear@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x18018763C
 * Callers:
 *     ?CallRemoteClearOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z @ 0x1801867F8 (-CallRemoteClearOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib.c)
 *     ?RemoteClear@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ @ 0x1801875F0 (-RemoteClear@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl::RemoteClear(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      64376LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v4 = -2018375660;
    v5 = 64380LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
  if ( v4 < 0 )
  {
    v5 = 64387LL;
    goto LABEL_5;
  }
  v7[0] = v9;
  v7[1] = v10;
  return CoreUICallSend(v11, v7, 2LL, 97LL);
}
