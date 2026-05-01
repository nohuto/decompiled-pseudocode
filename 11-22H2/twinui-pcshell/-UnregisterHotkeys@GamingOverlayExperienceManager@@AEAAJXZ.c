/*
 * XREFs of ?UnregisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180113C20
 * Callers:
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A3D30 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180113BDC (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::UnregisterHotkeys(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 100;
  AcquireSRWLockExclusive(this + 100);
  if ( !LODWORD(this[101].Ptr) )
    goto LABEL_5;
  Ptr = this[45].Ptr;
  if ( !Ptr || (v4 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 32LL))(Ptr), v5 = v4, v4 >= 0) )
  {
    LODWORD(this[101].Ptr) = 0;
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1056,
    (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v4,
    v7);
LABEL_6:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v5;
}
