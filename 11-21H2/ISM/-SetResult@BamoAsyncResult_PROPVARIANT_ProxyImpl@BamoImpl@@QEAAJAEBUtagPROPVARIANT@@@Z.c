/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJAEBUtagPROPVARIANT@@@Z @ 0x18015EA4C
 * Callers:
 *     ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z @ 0x18015E9F0 (-SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetResult(
        BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl *this,
        const struct tagPROPVARIANT *a2,
        __int64 a3,
        const char *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  __int128 v11; // xmm0
  BYTE *pData; // xmm1_8
  _QWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]
  BYTE *v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v17; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v19; // [rsp+B8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      8590LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2192,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v19, &v17, &v18);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v19;
      if ( *((_BYTE *)this + 31) )
      {
        v10 = (char *)v19 - 16;
        if ( !v19 )
          v10 = 0LL;
        v10[72] = 1;
      }
      v11 = *(_OWORD *)&a2->vt;
      v13[0] = v17;
      pData = a2->bstrblobVal.pData;
      v13[1] = v18;
      v14 = v11;
      v15 = pData;
      return CoreUICallSend(v9, v13, 2LL, 0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2199,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
