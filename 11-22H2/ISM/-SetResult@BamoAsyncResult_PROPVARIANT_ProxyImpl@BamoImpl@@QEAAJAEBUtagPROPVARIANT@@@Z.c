/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJAEBUtagPROPVARIANT@@@Z @ 0x18018BCAC
 * Callers:
 *     ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z @ 0x18018BC50 (-SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180031F48 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180031FC8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetResult(
        BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl *this,
        const struct tagPROPVARIANT *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  __int128 v12; // xmm0
  BYTE *pData; // xmm1_8
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h]
  BYTE *v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v18; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v20; // [rsp+B8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21BF,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C8,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v20, &v18, &v19);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v20;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v20 - 16;
        if ( !v20 )
          v11 = 0LL;
        v11[72] = 1;
      }
      v12 = *(_OWORD *)&a2->vt;
      v14[0] = v18;
      pData = a2->bstrblobVal.pData;
      v14[1] = v19;
      v15 = v12;
      v16 = pData;
      return CoreUICallSend(v10, v14, 2LL, 0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21CF,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
