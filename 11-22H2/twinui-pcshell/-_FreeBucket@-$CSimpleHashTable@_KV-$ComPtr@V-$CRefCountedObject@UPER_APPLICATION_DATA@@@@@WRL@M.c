/*
 * XREFs of ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1800108C0
 * Callers:
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18001065C (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180396824 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
        _DWORD *a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( *a2 == 1 )
  {
    *a2 = 2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2 + 4);
    ++a1[2];
    --*a1;
  }
  else
  {
    return 0;
  }
  return v2;
}
