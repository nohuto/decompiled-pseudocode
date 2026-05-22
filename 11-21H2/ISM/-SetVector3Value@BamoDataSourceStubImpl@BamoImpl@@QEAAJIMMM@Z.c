/*
 * XREFs of ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1800F8088
 * Callers:
 *     ?CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMM@Z @ 0x1800F5758 (-CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z @ 0x1800F8000 (-SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetVector3Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        float a3,
        float a4)
{
  const char *v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v9; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v12; // [rsp+A0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      11059LL,
      (__int64)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v4);
  if ( !*((_BYTE *)this + 32) )
  {
    v5 = -2018375660;
    v6 = 11063LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v9, &v12, &v8);
  if ( v5 < 0 )
  {
    v6 = 11070LL;
    goto LABEL_5;
  }
  v10[0] = v12;
  v10[1] = v8;
  return CoreUICallSend(v9, v10, 2LL, 5LL);
}
