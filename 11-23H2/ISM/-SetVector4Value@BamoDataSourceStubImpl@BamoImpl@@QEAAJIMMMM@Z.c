/*
 * XREFs of ?SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180113E28
 * Callers:
 *     ?CallSetVector4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x180110090 (-CallSetVector4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?SetVector4Value@BamoDataSourceStub@@UEAAJIMMMM@Z @ 0x180113D90 (-SetVector4Value@BamoDataSourceStub@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetVector4Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        float a3,
        float a4)
{
  const char *v4; // r9
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // [rsp+60h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v13; // [rsp+B0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34B2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v4);
  if ( !*((_BYTE *)this + 56) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = -2018375660;
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 16) + 32LL),
        0x87B20814,
        0);
    v7 = 13499LL;
    goto LABEL_7;
  }
  v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v10, &v13, &v9);
  if ( v6 < 0 )
  {
    v7 = 13506LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v11[0] = v13;
  v11[1] = v9;
  return CoreUICallSend(v10, v11, 2LL, 5LL);
}
