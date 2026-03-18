/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002EF3C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x18002F018 (--0DataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x18002F2F0 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x1800304A0 (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  DataProviderManager *v5; // rax
  DataProviderManager *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  DataProviderRegistrarPrincipal *v9; // rax
  DataProviderRegistrarPrincipal *v10; // rax
  __int64 v11; // rcx
  DataProviderRegistrarPrincipal *v12; // rbx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = DataProviderManager::DataProviderManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((DataProviderManager *)((char *)v5 + 8));
    v7 = DataProviderManager::InitializeServer(v6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *(_QWORD *)(*((_QWORD *)v6 + 3) + 232LL) = v6;
      v9 = (DataProviderRegistrarPrincipal *)DefaultHeap::AllocClear(0x40uLL);
      if ( !v9 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v10 = DataProviderRegistrarPrincipal::DataProviderRegistrarPrincipal(
              v9,
              *((struct dataprovider_AutoBamos::BamoConnection **)v6 + 3));
      v11 = *((_QWORD *)v6 + 4);
      v12 = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_QWORD *)v6 + 4) = v12;
      *((_QWORD *)v12 + 7) = v6;
      v8 = 0;
      *a2 = v6;
      return v8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v7);
    v14 = 64LL;
  }
  else
  {
    v8 = -2147024882;
    v14 = 62LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
    (const char *)v8);
  if ( v6 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
  return v8;
}
