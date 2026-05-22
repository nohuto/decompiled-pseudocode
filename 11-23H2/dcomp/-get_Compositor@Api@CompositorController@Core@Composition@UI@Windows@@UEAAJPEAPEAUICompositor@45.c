/*
 * XREFs of ?get_Compositor@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAPEAUICompositor@456@@Z @ 0x18008CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ToApi@UICompositor@Composition@UI@Windows@@@Compositor@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008CD38 (--$ToApi@UICompositor@Composition@UI@Windows@@@Compositor@Composition@UI@Windows@@SAXPEAV0123@V-.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorController::Api::get_Compositor(
        Windows::UI::Composition::Core::CompositorController::Api *this,
        struct Windows::UI::Composition::ICompositor **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    Windows::UI::Composition::Compositor::ToApi<Windows::UI::Composition::ICompositor>(*((Microsoft::WRL2::NestableRuntimeClass **)this
                                                                                       + 4));
    *a2 = 0LL;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
