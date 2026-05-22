/*
 * XREFs of ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180007A40
 * Callers:
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180026A00 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180007B30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800080E0 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoControllerNavigationManagerPrincipalImpl *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r9
  struct IMessageCallSendHost *SendHost; // rsi
  __int64 v7; // rdi
  unsigned int ItemId; // eax
  unsigned int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *((_QWORD *)a1 + 4);
  if ( !*(_DWORD *)(v3 + 44) && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) + 64LL) )
  {
    v4 = *(_QWORD *)(v3 + 24);
    v5 = *(_QWORD *)(v4 + 32);
    if ( *((_BYTE *)a1 + 56) && *(_QWORD *)(v5 + 64) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v3);
      v7 = *(unsigned int *)(*((_QWORD *)a1 + 4) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a1 + 3));
      ++*((_DWORD *)a1 + 4);
      v12[1] = ItemId;
      *((_BYTE *)a1 + 60) = 1;
      LOWORD(v11) = 0;
      v12[0] = v7;
      v9 = CoreUICallSend(SendHost, v12, 2LL, 20LL);
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4CF2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v9,
          v11);
    }
    else
    {
      if ( v5 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v4 + 32),
          -2018375675,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v11);
    }
  }
  return 0LL;
}
