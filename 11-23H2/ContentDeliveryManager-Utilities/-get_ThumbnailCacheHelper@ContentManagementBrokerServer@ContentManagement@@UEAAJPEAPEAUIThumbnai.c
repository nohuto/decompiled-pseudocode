/*
 * XREFs of ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x180044A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailCacheHelper@ContentManagement@@@Z @ 0x1800277B8 (--$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IThumbnailCacheHelper **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct ContentManagement::IThumbnailCacheHelper **); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ThumbnailCacheHelper,ContentManagement::IThumbnailCacheHelper,>(&v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (**v8)(v8, &GUID_d75aa9a4_4b0c_4d61_8fa9_51016cc2622c, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 1155LL;
  }
  else
  {
    v5 = 1154LL;
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
