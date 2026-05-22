/*
 * XREFs of ?put_AutoCompleteOnScreenOccluded@Internal@KeyFrameAnimation@Composition@UI@Windows@@UEAAJE@Z @ 0x1801886C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::Internal::put_AutoCompleteOnScreenOccluded(
        Windows::UI::Composition::KeyFrameAnimation::Internal *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 47);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 368) & 2) != 0 )
  {
    *((_BYTE *)this + 80) = *((_BYTE *)this + 80) & 0xFD | (a2 != 0 ? 2 : 0);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
