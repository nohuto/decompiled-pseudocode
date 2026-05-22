/*
 * XREFs of ?get_HasCurrent@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x18018B580
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowCaster@234@I@Z @ 0x1801837B4 (-GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjecte.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterIterator::Api::get_HasCurrent(
        Windows::UI::Composition::CompositionProjectedShadowCasterIterator::Api *this,
        bool *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    *a2 = Windows::UI::Composition::CompositionProjectedShadow::GetCasterAtIndex(
            *((Windows::UI::Composition::CompositionProjectedShadow **)this + 3),
            *((_DWORD *)this + 4)) != 0LL;
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
