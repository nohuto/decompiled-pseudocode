/*
 * XREFs of ??1?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x18019BD98
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 *     _CreateSearchAppPositioner_::_1_::dtor$0_0 @ 0x180216D13 (_CreateSearchAppPositioner_--_1_--dtor$0_0.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x18038E2C8 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>::~unique_ptr<SearchBoxOnTaskbarSearchAppPositioner,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositioner>>(
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
