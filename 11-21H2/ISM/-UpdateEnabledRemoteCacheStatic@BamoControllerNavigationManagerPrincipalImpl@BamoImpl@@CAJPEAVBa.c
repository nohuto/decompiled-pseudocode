/*
 * XREFs of ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18001F120
 * Callers:
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180006370 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x18001F860 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18001F8D0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoControllerNavigationManagerPrincipalImpl *a2)
{
  __int64 v3; // rcx
  struct IMessageCallSendHost *SendHost; // rsi
  unsigned int v5; // ebp
  unsigned int ItemId; // ecx
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-38h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IMessageCallSendHost *v12; // [rsp+60h] [rbp+8h]

  v3 = *((_QWORD *)a1 + 5);
  if ( !*(_DWORD *)(v3 + 44) && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a1 + 32) && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL) + 64LL) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v3);
      v5 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a1 + 3));
      _InterlockedIncrement((volatile signed __int32 *)a1 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v9);
      ItemId = (unsigned int)v12;
      v5 = (unsigned int)v12;
      SendHost = v12;
    }
    v10[0] = v5;
    v10[1] = ItemId;
    LOWORD(v9) = 0;
    v7 = CoreUICallSend(SendHost, v10, 2LL, 19LL);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22BD,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v7,
        v9);
  }
  return 0LL;
}
