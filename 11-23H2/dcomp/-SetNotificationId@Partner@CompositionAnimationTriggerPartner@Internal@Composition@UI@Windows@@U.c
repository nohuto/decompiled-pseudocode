/*
 * XREFs of ?SetNotificationId@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJ_K0@Z @ 0x1801875E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetNotificationId@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAX_K0@Z @ 0x18018753C (-SetNotificationId@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAX_K0@.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::Partner::SetNotificationId(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::Partner *this,
        __int64 a2,
        __int64 a3)
{
  Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi

  v3 = (Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::Partner *)((char *)this - 136);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::SetNotificationId(v3, a2, a3);
    v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
