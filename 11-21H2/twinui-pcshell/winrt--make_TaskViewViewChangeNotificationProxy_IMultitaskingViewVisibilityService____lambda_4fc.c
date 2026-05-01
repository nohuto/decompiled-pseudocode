/*
 * XREFs of winrt::make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4fcc601e1ca868e387495d7c277bf315___ @ 0x18010E6AC
 * Callers:
 *     _lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator() @ 0x1800F4C08 (_lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator().c)
 * Callees:
 *     ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E52C (--0-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingVi.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4fcc601e1ca868e387495d7c277bf315___(
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
  v9[0] = off_180637F08;
  v9[1] = v6;
  v9[2] = v7;
  v9[7] = v9;
  *a1 = winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::heap_implements<TaskViewViewChangeNotificationProxy>(
          v10,
          *a2,
          (__int64)v9);
  return a1;
}
