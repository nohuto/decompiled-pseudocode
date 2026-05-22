/*
 * XREFs of ?ActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x18008D7FC
 * Callers:
 *     ?ActivationRequested@BamoActivationWatcherStub@@UEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x18008D790 (-ActivationRequested@BamoActivationWatcherStub@@UEAAJPEAVBamoActivatableEntityPrincipal@@0@Z.c)
 *     ?CallActivationRequestedOnStub@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoActivatableEntityPrincipal@@1@Z @ 0x18008DA38 (-CallActivationRequestedOnStub@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x18008B6D4 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherStubImpl::ActivationRequested(
        BamoImpl::BamoActivationWatcherStubImpl *this,
        struct BamoActivatableEntityPrincipal *a2,
        struct BamoActivatableEntityPrincipal *a3,
        const char *a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct IMessageCallSendHost *v9; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2114LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v6 = -2018375660;
    v7 = 2118LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a2);
  if ( a3 )
    Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a3);
  v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v9, &v12, &v13);
  if ( v6 < 0 )
  {
    v7 = 2127LL;
    goto LABEL_5;
  }
  v10[0] = v12;
  v10[1] = v13;
  return CoreUICallSend(v9, v10, 2LL, 6LL);
}
