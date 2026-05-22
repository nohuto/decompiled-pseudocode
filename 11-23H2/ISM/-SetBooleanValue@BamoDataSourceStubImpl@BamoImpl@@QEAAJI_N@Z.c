/*
 * XREFs of ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x180112E5C
 * Callers:
 *     ?CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I_N@Z @ 0x18010FDBC (-CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z @ 0x180112DF0 (-SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  struct IMessageCallSendHost *v8; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x341C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
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
    v6 = 13349LL;
    goto LABEL_7;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v8, &v11, &v12);
  if ( v5 < 0 )
  {
    v6 = 13356LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v9[0] = v11;
  v9[1] = v12;
  return CoreUICallSend(v8, v9, 2LL, 5LL);
}
