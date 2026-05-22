/*
 * XREFs of ?RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x18018777C
 * Callers:
 *     ?CallRemoteInsertOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoPenDevicePrincipal@@@Z @ 0x180186848 (-CallRemoteInsertOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 *     ?RemoteInsert@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x180187710 (-RemoteInsert@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAV.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x18008B6D4 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl::RemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl *this,
        __int64 a2,
        struct BamoPenDevicePrincipal *a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  struct IMessageCallSendHost *v8; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      64284LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v5 = -2018375660;
    v6 = 64288LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( a3 )
    Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a3);
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v8, &v11, &v12);
  if ( v5 < 0 )
  {
    v6 = 64296LL;
    goto LABEL_5;
  }
  v9[0] = v11;
  v9[1] = v12;
  return CoreUICallSend(v8, v9, 2LL, 97LL);
}
