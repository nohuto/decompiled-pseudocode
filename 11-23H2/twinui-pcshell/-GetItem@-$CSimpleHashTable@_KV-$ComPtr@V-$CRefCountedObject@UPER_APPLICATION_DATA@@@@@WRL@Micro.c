/*
 * XREFs of ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18000E108
 * Callers:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18000B94C (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18000DCDC (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011CD0 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_180011CD0.c)
 *     ?GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x18039BC80 (-GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV-$CRefCountedObject@UPER_APPLICA.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18004F578 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rax

  v3 = 0;
  if ( *(_QWORD *)(a1 + 16)
    && (v5 = (_DWORD *)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                         *(_QWORD *)(a1 + 16),
                         *(unsigned int *)(a1 + 4),
                         a2),
        *v5 == 1) )
  {
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(a3, v5 + 4);
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v3;
}
