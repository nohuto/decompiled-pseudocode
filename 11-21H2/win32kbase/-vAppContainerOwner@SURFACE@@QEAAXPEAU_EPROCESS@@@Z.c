/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001E8AC
 * Callers:
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     UserIsProcessImmersiveAppContainer @ 0x1C001E860 (UserIsProcessImmersiveAppContainer.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2)
{
  struct _EPROCESS *v2; // rbx
  struct _ENTRY *v4; // rax
  __int64 v5; // rcx
  struct _ENTRY *EntryFromObject; // rax

  v2 = a2;
  if ( !a2 || (unsigned int)UserIsProcessImmersiveAppContainer((__int64)a2) )
  {
    GreAcquireHmgrSemaphore(this);
    if ( v2 )
    {
      EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
      *((_BYTE *)EntryFromObject + 15) |= 0x80u;
      goto LABEL_5;
    }
  }
  else
  {
    v2 = 0LL;
    GreAcquireHmgrSemaphore(this);
  }
  v4 = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
  *((_BYTE *)v4 + 15) &= ~0x80u;
LABEL_5:
  *((_QWORD *)this + 80) = v2;
  GreReleaseHmgrSemaphore(v5);
}
