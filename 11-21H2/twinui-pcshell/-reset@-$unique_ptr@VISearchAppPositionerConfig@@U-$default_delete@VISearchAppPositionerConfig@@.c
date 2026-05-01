/*
 * XREFs of ?reset@?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@QEAAXPEAVISearchAppPositionerConfig@@@Z @ 0x180390324
 * Callers:
 *     ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@$$QEAV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@2@@Z @ 0x18019A534 (--$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V-$unique_ptr@VSearchBoxOnTaskbar.c)
 *     ??1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ @ 0x1801A5044 (--1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<ISearchAppPositionerConfig,wistd::default_delete<ISearchAppPositionerConfig>>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (**v2)(v2, 1LL);
  return result;
}
