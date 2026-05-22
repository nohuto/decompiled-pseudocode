/*
 * XREFs of ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x1800F7C9C
 * Callers:
 *     ?CallSetScalarValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IM@Z @ 0x1800F56B8 (-CallSetScalarValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@.c)
 *     ?SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z @ 0x1800F7C30 (-SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003EED8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetScalarValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        float a3,
        const char *a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct IMessageCallSendHost *v7; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v8[3]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      10994LL,
      (__int64)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v4 = -2018375660;
    v5 = 10998LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v7, &v10, &v11);
  if ( v4 < 0 )
  {
    v5 = 11005LL;
    goto LABEL_5;
  }
  v8[0] = v10;
  v8[1] = v11;
  return CoreUICallSend(v7, v8, 2LL, 5LL);
}
