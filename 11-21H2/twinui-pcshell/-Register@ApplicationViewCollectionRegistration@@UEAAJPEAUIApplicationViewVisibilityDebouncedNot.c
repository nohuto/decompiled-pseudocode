/*
 * XREFs of ?Register@ApplicationViewCollectionRegistration@@UEAAJPEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x1805B64F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x180116738 (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewCollectionRegistration::Register(
        ApplicationViewCollectionRegistration *this,
        struct IApplicationViewVisibilityDebouncedNotificationService *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct IApplicationViewVisibilityDebouncedNotificationService *, ApplicationViewCollectionRegistration *, char *))(*(_QWORD *)a2 + 24LL))(
         a2,
         this,
         (char *)this + 24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
      (__int64 *)this + 4,
      (__int64)a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
