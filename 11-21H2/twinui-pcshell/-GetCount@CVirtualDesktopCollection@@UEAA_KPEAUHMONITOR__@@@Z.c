/*
 * XREFs of ?GetCount@CVirtualDesktopCollection@@UEAA_KPEAUHMONITOR__@@@Z @ 0x1805415B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0 (-GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 */

unsigned __int64 __fastcall CVirtualDesktopCollection::GetCount(CVirtualDesktopCollection *this, __int64 a2)
{
  return *(_QWORD *)(CVirtualDesktopCollection::GetDesktopCollectionForMonitor(this, a2) + 8);
}
