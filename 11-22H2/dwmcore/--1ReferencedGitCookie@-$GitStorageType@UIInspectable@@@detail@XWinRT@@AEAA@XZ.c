/*
 * XREFs of ??1ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@AEAA@XZ @ 0x1802927FC
 * Callers:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x18029803C (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::~ReferencedGitCookie(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1803E5E70 + 32LL))(qword_1803E5E70);
  return result;
}
