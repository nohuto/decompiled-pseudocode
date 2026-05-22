/*
 * XREFs of ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x18004D884
 * Callers:
 *     ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x180005470 (-IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x18004D68C (--0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180019AF0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputDestTarget::GetInputSiteFromInputDest(__int64 a1, __int64 *a2, __int64 a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v6; // rsi
  __int64 *InputSiteFromId; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
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
    InputSiteFromId = InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, &v12, 0, v12);
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, (char *)InputSiteFromId);
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( !*a2 && (*(_BYTE *)a3 & 2) != 0 )
  {
    v9 = InputSiteManager::GetInputSiteFromId(v6, &v12, 1, *(unsigned int *)(a3 + 24));
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, (char *)v9);
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return a2;
}
