/*
 * XREFs of ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801BCC0C
 * Callers:
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x1801BCBC0 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801BCA90 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801BCD28 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::OnSetPropertyValueError(
        BamoImpl::BamoDataSourceProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  char *v9; // rax
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      11417LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C9D,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v14;
      if ( *((_BYTE *)this + 31) )
      {
        v9 = (char *)v14 - 16;
        if ( !v14 )
          v9 = 0LL;
        v9[72] = 1;
      }
      v10[0] = v12;
      v10[1] = v13;
      return CoreUICallSend(v8, v10, 2LL, 4LL, 0, &unk_1803434A5);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CA4,
        (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
