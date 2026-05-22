/*
 * XREFs of ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180021C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E740 (-InternalRelease@-$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIWindowsMessageDeliveryProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180021DC0 (--$As@UIWindowsMessageDeliveryProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x180022100 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x1801638D0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall DWMLegacyInputTarget::GetInputSite(__int64 a1, _QWORD *a2)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v6; // rcx
  struct InputSiteManager *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = a2;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v17, 1LL, *(_QWORD *)(a1 + 40));
    Microsoft::WRL::ComPtr<InputSite>::operator=(a1 + 48, InputSiteFromId);
    v6 = (__int64)v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( !*(_QWORD *)(a1 + 48) )
    {
      v7 = ISMStatics::GetInputSiteManager();
      v8 = (_QWORD *)*((_QWORD *)v7 + 7);
      v9 = (_QWORD *)*((_QWORD *)v7 + 8);
      if ( v8 != v9 )
      {
        while ( 1 )
        {
          v10 = *v8;
          v11 = 0LL;
          v17 = 0LL;
          v12 = *(_QWORD *)(v10 + 488);
          v13 = *(_QWORD *)(v10 + 496);
          if ( v12 != v13 )
          {
            do
            {
              if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IWindowsMessageDeliveryProxy>(v12 + 8, &v17) >= 0 )
                break;
              v12 += 16LL;
            }
            while ( v12 != v13 );
            v11 = (__int64)v17;
          }
          v14 = v11 - 8;
          if ( !v11 )
            v14 = 0LL;
          if ( v14 )
            (**(void (__fastcall ***)(__int64))(v14 + 16))(v14 + 16);
          Microsoft::WRL::ComPtr<IWindowsMessageDeliveryProxy>::InternalRelease((__int64 *)&v17);
          if ( v14 )
          {
            if ( BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v14 + 8)) == *(_QWORD *)(a1 + 40) )
              break;
          }
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 8LL))(v14 + 16);
          if ( ++v8 == v9 )
            goto LABEL_18;
        }
        Microsoft::WRL::ComPtr<InputSite>::operator=(a1 + 48, *v8);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 8LL))(v14 + 16);
      }
    }
  }
LABEL_18:
  v15 = *(_QWORD *)(a1 + 48);
  *a2 = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  return a2;
}
