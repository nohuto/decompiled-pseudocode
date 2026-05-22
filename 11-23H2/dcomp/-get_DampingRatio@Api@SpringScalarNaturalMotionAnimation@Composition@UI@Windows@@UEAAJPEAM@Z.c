/*
 * XREFs of ?get_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18017E100
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::SpringScalarNaturalMotionAnimation::Api::get_DampingRatio(
        Windows::UI::Composition::SpringScalarNaturalMotionAnimation::Api *this,
        float *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *a2 = 0.69999999;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 54);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 424) & 2) != 0 )
  {
    *a2 = *((float *)this - 4);
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
