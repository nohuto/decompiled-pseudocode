/*
 * XREFs of ??1?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x18038E250
 * Callers:
 *     _CreateSearchAppPositioner_::_1_::dtor$0 @ 0x180216C7D (_CreateSearchAppPositioner_--_1_--dtor$0.c)
 *     _MiniSearchExperienceManager::MiniSearchExperienceManager_::_1_::dtor$7 @ 0x18021EA2B (_MiniSearchExperienceManager--MiniSearchExperienceManager_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<IMiniSearchAppPositioner,wistd::default_delete<IMiniSearchAppPositioner>>::~unique_ptr<IMiniSearchAppPositioner,wistd::default_delete<IMiniSearchAppPositioner>>(
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
