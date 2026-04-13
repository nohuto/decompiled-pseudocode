/*
 * XREFs of ?get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIContextualSuggestionsManager@2@@Z @ 0x180044070
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VContextualSuggestionsManager@ContentManagement@@UIContextualSuggestionsManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualSuggestionsManager@ContentManagement@@@Z @ 0x180026AEC (--$MakeAndInitialize@VContextualSuggestionsManager@ContentManagement@@UIContextualSuggestionsMan.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IContextualSuggestionsManager **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct ContentManagement::IContextualSuggestionsManager **); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ContextualSuggestionsManager,ContentManagement::IContextualSuggestionsManager,>(&v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (**v8)(v8, &GUID_b56a8e91_f7d4_47db_a915_40f6f26a2ed6, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 1145LL;
  }
  else
  {
    v5 = 1144LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return v4;
}
