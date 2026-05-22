/*
 * XREFs of ?AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18010E82C
 * Callers:
 *     ?AddDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18010E7D0 (-AddDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x18010FBDC (-CallAddDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800A27C4 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::AddDataSource(
        BamoImpl::BamoDataProviderStubImpl *this,
        struct BamoDataSourcePrincipal *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29C9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 56) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = -2018375660;
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 16) + 32LL),
        0x87B20814,
        0);
    v7 = 10706LL;
    goto LABEL_7;
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a2);
  v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v13, &v11, &v12);
  if ( v6 < 0 )
  {
    v7 = 10714LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9[0] = v11;
  v9[1] = v12;
  return CoreUICallSend(v13, v9, 2LL, 1LL);
}
