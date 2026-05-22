/*
 * XREFs of ?get_IterationCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x180188500
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _o_ceilf_0 @ 0x180096944 (_o_ceilf_0.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::Api::get_IterationCount(
        Windows::UI::Composition::KeyFrameAnimation::Api *this,
        int *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 312) & 2) != 0 )
  {
    *a2 = (int)o_ceilf_0(*((float *)this + 32));
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
