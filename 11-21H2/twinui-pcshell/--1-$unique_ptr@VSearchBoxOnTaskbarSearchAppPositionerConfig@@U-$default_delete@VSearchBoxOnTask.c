/*
 * XREFs of ??1?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@QEAA@XZ @ 0x18019BDD4
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositionerConfig,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositionerConfig>>::~unique_ptr<SearchBoxOnTaskbarSearchAppPositionerConfig,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositionerConfig>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
