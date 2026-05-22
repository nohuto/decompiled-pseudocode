/*
 * XREFs of ?get_InitialVelocity@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x1801689F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::Api::get_InitialVelocity(
        Windows::UI::Composition::Vector3NaturalMotionAnimation::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 53);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 416) & 2) != 0 )
  {
    *(_QWORD *)a2 = *((_QWORD *)this - 2);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this - 2);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
