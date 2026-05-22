/*
 * XREFs of ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180040A88
 * Callers:
 *     ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x18000C5C0 (-IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800409E0 (--0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputDestTarget::GetInputSiteFromInputDest(__int64 a1, __int64 *a2, __int64 a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v6; // rsi
  char *InputSiteFromId; // rax
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+10h]

  v13 = a2;
  v12 = a1;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v6 = (__int64)InputSiteManager;
  *a2 = 0LL;
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v12, 0, v12);
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, InputSiteFromId);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( !*a2 && (*(_BYTE *)a3 & 2) != 0 )
  {
    v10 = (char *)InputSiteManager::GetInputSiteFromId(v6, (__int64)&v12, 1, *(unsigned int *)(a3 + 24));
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, v10);
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return a2;
}
