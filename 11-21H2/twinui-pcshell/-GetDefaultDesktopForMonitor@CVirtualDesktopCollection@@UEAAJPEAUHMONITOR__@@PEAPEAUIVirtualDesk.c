/*
 * XREFs of ?GetDefaultDesktopForMonitor@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805415D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0 (-GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 */

__int64 __fastcall CVirtualDesktopCollection::GetDefaultDesktopForMonitor(
        CVirtualDesktopCollection *this,
        __int64 a2,
        struct IVirtualDesktop **a3)
{
  __int64 *v4; // rbx

  v4 = *(__int64 **)CVirtualDesktopCollection::GetDesktopCollectionForMonitor(this, a2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  *a3 = (struct IVirtualDesktop *)*v4;
  return 0LL;
}
