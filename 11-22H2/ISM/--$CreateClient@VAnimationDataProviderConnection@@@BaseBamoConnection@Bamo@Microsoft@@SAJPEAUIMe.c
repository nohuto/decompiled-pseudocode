/*
 * XREFs of ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x180033F88
 * Callers:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x180033DB0 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180034228 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x180034FF8 (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C0878 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v13; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+20h]

  v13 = 0LL;
  *a4 = 0LL;
  v7 = operator new(0x100uLL);
  v14 = v7;
  memset_0(v7, 0, 0x100uLL);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v7 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v7);
  v7[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  *v7 = &AnimationDataProviderConnection::`vftable';
  v13 = v7;
  *(_OWORD *)v11 = *a2;
  v8 = ((__int64 (__fastcall *)(_QWORD *, __int64, int *, const wchar_t *))Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient)(
         v7,
         a1,
         v11,
         L"System\\CompositionEngineDataProvider");
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB10,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v13);
    return v9;
  }
  else
  {
    *a4 = v7;
    return 0LL;
  }
}
