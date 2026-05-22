/*
 * XREFs of ?get_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18017DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::BounceScalarNaturalMotionAnimation::Api::get_Acceleration(
        Windows::UI::Composition::BounceScalarNaturalMotionAnimation::Api *this,
        float *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *a2 = 10.0;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 53);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 416) & 2) != 0 )
  {
    *a2 = *((float *)this - 2);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
