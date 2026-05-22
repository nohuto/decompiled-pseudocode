/*
 * XREFs of ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x1800A23B0
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001B8AC (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ForegroundManager::HandleForegroundChangeNotification(
        ForegroundManager *this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v5; // edi
  __int64 v8; // rcx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 27) = a2;
  *((_DWORD *)this + 56) = a3;
  v5 = a3;
  *((_DWORD *)this + 57) = a4;
  if ( (_DWORD)a3 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, a2);
    ForegroundManager::UpdateForegroundTarget(this, a2, ViewIdFromWindowId, v5, a4, 0);
  }
  else
  {
    v8 = *((_QWORD *)this + 2);
    if ( v8 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD))(*(_QWORD *)v8 + 24LL))(
        v8,
        0LL,
        a3,
        0LL,
        a3 & v11);
  }
}
