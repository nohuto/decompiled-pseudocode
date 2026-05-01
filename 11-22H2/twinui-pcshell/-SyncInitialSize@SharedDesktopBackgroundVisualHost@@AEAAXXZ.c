/*
 * XREFs of ?SyncInitialSize@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x1806EBEDC
 * Callers:
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 * Callees:
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1806E8E40 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::SyncInitialSize(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  PVOID Ptr; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 22;
  AcquireSRWLockShared(this + 22);
  Ptr = this[36].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  if ( *(float *)&Ptr >= 0.0 || *((float *)&Ptr + 1) >= 0.0 )
    SharedDesktopBackgroundVisualHost::Size(this, (const struct winrt::Windows::Foundation::Size *)&Ptr);
}
