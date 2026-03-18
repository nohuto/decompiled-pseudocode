/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800D2F54
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800D1B80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x1800D3018 (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ??0DataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x1800D30D4 (--0DataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800D46D8 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B37C8 (--1-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  DataProviderManager *v5; // rax
  DataProviderManager *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  DataProviderRegistrarPrincipal *v9; // rax
  DataProviderRegistrarPrincipal *v10; // rax
  __int64 v11; // rcx
  DataProviderRegistrarPrincipal *v12; // rdi
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DataProviderManager *v17; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = DataProviderManager::DataProviderManager(v4, a1);
  v17 = v5;
  v6 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8007000ELL,
      v14);
    v8 = -2147024882;
    goto LABEL_12;
  }
  CMILRefCountImpl::AddReference((DataProviderManager *)((char *)v5 + 8));
  v7 = DataProviderManager::InitializeServer(v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v7,
      v14);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)v8,
      v15);
LABEL_12:
    Microsoft::WRL::ComPtr<DataProviderManager>::~ComPtr<DataProviderManager>(&v17);
    return v8;
  }
  *(_QWORD *)(*((_QWORD *)v6 + 3) + 248LL) = v6;
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
  result = 0LL;
  *((_QWORD *)v12 + 7) = v6;
  *a2 = v6;
  return result;
}
