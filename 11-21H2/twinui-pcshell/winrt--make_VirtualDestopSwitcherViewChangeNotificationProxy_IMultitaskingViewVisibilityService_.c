/*
 * XREFs of winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_f5bad7708cd3d32b6b139f2523e4a8ac___ @ 0x18010E5A4
 * Callers:
 *     _lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator() @ 0x1800F4C08 (_lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator().c)
 * Callees:
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E414 (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_f5bad7708cd3d32b6b139f2523e4a8ac___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v10; // [rsp+80h] [rbp+8h]

  v10 = operator new(0xE0uLL);
  v6 = *a3;
  v7 = a3[1];
  a3[1] = 0LL;
  v9[0] = off_180637ED8;
  v9[1] = v6;
  v9[2] = v7;
  v9[7] = v9;
  *a1 = winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>(
          v10,
          *a2,
          (__int64)v9);
  return a1;
}
