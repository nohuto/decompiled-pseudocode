/*
 * XREFs of ?GetAt@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJ_KAEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18054157C
 * Callers:
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180178090 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?OnMonitorDetached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z @ 0x180541920 (-OnMonitorDetached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::GetAt(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 *a3)
{
  __int64 result; // rax

  result = 2147650721LL;
  if ( a2 < a1[1] )
  {
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(a3, (__int64 *)(*a1 + 8 * a2));
    return 0LL;
  }
  return result;
}
