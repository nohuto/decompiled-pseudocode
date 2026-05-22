/*
 * XREFs of ?get_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z @ 0x18017E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::SpringVector2NaturalMotionAnimation::Api::get_Period(
        Windows::UI::Composition::SpringVector2NaturalMotionAnimation::Api *this,
        struct Windows::Foundation::TimeSpan *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *(_QWORD *)a2 = 500000LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 55);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 432) & 2) != 0 )
  {
    *(_QWORD *)a2 = *((_QWORD *)this - 1);
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
