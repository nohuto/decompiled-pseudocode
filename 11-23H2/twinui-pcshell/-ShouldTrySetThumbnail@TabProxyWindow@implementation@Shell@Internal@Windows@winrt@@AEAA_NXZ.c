/*
 * XREFs of ?ShouldTrySetThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1802E86E4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D1B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldTrySetThumbnail(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v2; // rdi
  int Ptr; // eax

  v1 = this + 21;
  v2 = this;
  _Platform_AcquireSRWLockExclusive(this + 21);
  Ptr = (int)v2[17].Ptr;
  LODWORD(v2[17].Ptr) = 2;
  LOBYTE(v2) = Ptr <= 0;
  ReleaseSRWLockExclusive_0(v1);
  return (char)v2;
}
