/*
 * XREFs of ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18002C4D0
 * Callers:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x18002C410 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 * Callees:
 *     ?GetImpl@BamoConnection@MPCManagerBamo_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ @ 0x180021D20 (-GetImpl@BamoConnection@MPCManagerBamo_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Micros.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002CE64 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18002CF90 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  __int128 v9; // xmm6
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *Impl; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0xF0uLL);
  memset_0(v7, 0, 0xF0uLL);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v7 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v7);
  v7[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  *v7 = &AnimationDataProviderConnection::`vftable';
  v8 = (Microsoft::Bamo::BaseBamoConnection *)v7;
  v9 = *a2;
  Impl = MPCManagerBamo_AutoBamos::BamoConnection::GetImpl((MPCManagerBamo_AutoBamos::BamoConnection *)v7);
  v14 = v9;
  v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(Impl, a1, 0LL, &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      (int)L"System\\CompositionEngineDataProvider");
  }
  else
  {
    v8 = 0LL;
    *a4 = v7;
    v12 = 0;
  }
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  return v12;
}
