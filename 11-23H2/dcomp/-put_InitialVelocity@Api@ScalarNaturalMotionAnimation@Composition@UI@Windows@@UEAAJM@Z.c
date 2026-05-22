/*
 * XREFs of ?put_InitialVelocity@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x180167B80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ScalarNaturalMotionAnimation::Api::put_InitialVelocity(
        Windows::UI::Composition::ScalarNaturalMotionAnimation::Api *this,
        float a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 50);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 392) & 2) != 0 )
  {
    *((float *)this - 2) = a2;
    v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
