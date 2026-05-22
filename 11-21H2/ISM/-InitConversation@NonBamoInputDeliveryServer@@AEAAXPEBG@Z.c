/*
 * XREFs of ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x180032F40
 * Callers:
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x180031B10 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@$$QEAPEAV4@@Z @ 0x18003C254 (--$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall NonBamoInputDeliveryServer::InitConversation(
        NonBamoInputDeliveryServer *this,
        const unsigned __int16 *a2)
{
  char *v2; // r14
  int v5; // eax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, const unsigned __int16 *, _QWORD, __int64 *); // rdi
  int v8; // eax
  int v9; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+60h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  NonBamoInputDeliveryServer *v13; // [rsp+90h] [rbp+8h] BYREF

  v2 = (char *)this + 24;
  v13 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer *>(
         v2,
         &v13);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v6 = *((_QWORD *)this + 6);
  v7 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)v6 + 304LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 8);
  v10 = 0LL;
  v11 = 1;
  v8 = v7(v6, a2, *((_QWORD *)this + 7), &v10);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v8,
      3);
}
