/*
 * XREFs of ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x18015BDB8
 * Callers:
 *     ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxy@@UEAAJ_NII_KII@Z @ 0x18015BD20 (-OnHomeGestureReadyChanged@BamoMPCManagerClientProxy@@UEAAJ_NII_KII@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnHomeGestureReadyChanged(
        BamoImpl::BamoMPCManagerClientProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  int v7; // eax
  unsigned int v8; // esi
  struct IMessageCallSendHost *v9; // rcx
  unsigned int v10; // [rsp+60h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v11[3]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v13; // [rsp+A0h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      12295LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x300B,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v11, &v13, &v10);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v11[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v11[0] )
          v4 = (char *)v11[0] - 16;
        v4[72] = 1;
      }
      v11[0] = (struct IMessageCallSendHost *)v13;
      v11[1] = (struct IMessageCallSendHost *)v10;
      return CoreUICallSend(v9, v11, 2LL, 5LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3012,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
