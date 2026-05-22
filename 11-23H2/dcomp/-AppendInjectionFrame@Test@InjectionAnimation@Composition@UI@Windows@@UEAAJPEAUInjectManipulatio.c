/*
 * XREFs of ?AppendInjectionFrame@Test@InjectionAnimation@Composition@UI@Windows@@UEAAJPEAUInjectManipulationArgs@@I@Z @ 0x1801626C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AppendInjectionFrame@InjectionAnimation@Composition@UI@Windows@@QEAAJPEAUInjectManipulationArgs@@I@Z @ 0x18016253C (-AppendInjectionFrame@InjectionAnimation@Composition@UI@Windows@@QEAAJPEAUInjectManipulationArgs.c)
 */

__int64 __fastcall Windows::UI::Composition::InjectionAnimation::Test::AppendInjectionFrame(
        Windows::UI::Composition::InjectionAnimation::Test *this,
        struct InjectManipulationArgs *a2,
        unsigned int a3)
{
  Windows::UI::Composition::InjectionAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi

  v3 = (Windows::UI::Composition::InjectionAnimation::Test *)((char *)this - 344);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::InjectionAnimation::AppendInjectionFrame(v3, a2, a3);
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
