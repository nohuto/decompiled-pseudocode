/*
 * XREFs of ??1ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@AEAA@XZ @ 0x18014A8E8
 * Callers:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014CE8C (-Release@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::~ReferencedGitCookie(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_180220AD0 + 32LL))(qword_180220AD0);
  return result;
}
