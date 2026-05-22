/*
 * XREFs of ?put_IsConstrainedBySize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z @ 0x18017FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetIsConstrainedBySize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAX_N@Z @ 0x18018A510 (-SetIsConstrainedBySize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureController::Partner::put_IsConstrainedBySize(
        Windows::UI::Composition::Internal::CaptureController::Partner *this,
        char a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::Internal::CaptureController::Partner *)((char *)this - 192);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = 0;
    Windows::UI::Composition::Internal::CaptureControllerBase::SetIsConstrainedBySize(v2, a2 != 0);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
