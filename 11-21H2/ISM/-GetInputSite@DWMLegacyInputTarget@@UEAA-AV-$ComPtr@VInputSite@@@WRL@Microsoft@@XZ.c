/*
 * XREFs of ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x1800192C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AC10 (-InternalRelease@-$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIWindowsMessageDeliveryProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180019470 (--$As@UIWindowsMessageDeliveryProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180019AF0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180144B98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
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
  __int64 v15; // rdi
  __int64 v16; // rcx
  char v18; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]

  v19 = a2;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v19, 1LL, *(_QWORD *)(a1 + 40));
    Microsoft::WRL::ComPtr<InputSite>::operator=(a1 + 48, InputSiteFromId);
    v6 = (__int64)v19;
    if ( v19 )
    {
      v19 = 0LL;
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
          v19 = 0LL;
          v12 = *(_QWORD *)(v10 + 488);
          v13 = *(_QWORD *)(v10 + 496);
          if ( v12 != v13 )
          {
            do
            {
              if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IWindowsMessageDeliveryProxy>(v12 + 8, &v19) >= 0 )
                break;
              v12 += 16LL;
            }
            while ( v12 != v13 );
            v11 = (__int64)v19;
          }
          v14 = v11 - 8;
          if ( !v11 )
            v14 = 0LL;
          v20 = v14;
          if ( v14 )
            (**(void (__fastcall ***)(__int64))(v14 + 16))(v14 + 16);
          Microsoft::WRL::ComPtr<IWindowsMessageDeliveryProxy>::InternalRelease((__int64 *)&v19);
          if ( v14 )
          {
            Microsoft::BamoImpl::InternalLock::InternalLock(
              (Microsoft::BamoImpl::InternalLock *)&v18,
              *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(v14 + 32) + 24LL));
            v15 = *(_QWORD *)(v14 + 48);
            Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v18);
            if ( v15 == *(_QWORD *)(a1 + 40) )
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
  v16 = *(_QWORD *)(a1 + 48);
  *a2 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  return a2;
}
