/*
 * XREFs of ?OnCacheTimerStatic@InputSinkDataCache@@SAJPEAX@Z @ 0x1800113F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18003462C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSinkDataCache::OnCacheTimerStatic(_BYTE *a1)
{
  struct IInputSiteHierarchyManager *v1; // rcx
  struct IInputSiteHierarchyManager **v3; // rax
  struct IInputSiteHierarchyManager *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  a1[104] = 0;
  v1 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v3 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v5);
    v4 = *v3;
    *v3 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v4;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v5);
    v1 = ISMStatics::s_inputSiteHierarchyManager;
  }
  (*(void (__fastcall **)(struct IInputSiteHierarchyManager *))(*(_QWORD *)v1 + 40LL))(v1);
  return 0LL;
}
