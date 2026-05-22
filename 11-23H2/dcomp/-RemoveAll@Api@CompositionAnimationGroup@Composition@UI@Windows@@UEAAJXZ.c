/*
 * XREFs of ?RemoveAll@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJXZ @ 0x180152060
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ @ 0x1801520C4 (-RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationGroup::Api::RemoveAll(
        Windows::UI::Composition::CompositionAnimationGroup::Api *this)
{
  Windows::UI::Composition::CompositionAnimationGroup *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi

  v1 = (Windows::UI::Composition::CompositionAnimationGroup::Api *)((char *)this - 128);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::CompositionAnimationGroup::RemoveAll(v1);
    v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
