/*
 * XREFs of ?MoveNext@Api@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180195520
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureVersionMatches@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801954CC (-EnsureVersionMatches@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationIterator::Api::MoveNext(
        Windows::UI::Composition::CompositionAnimationIterator::Api *this,
        bool *a2)
{
  Windows::UI::Composition::CompositionAnimationIterator *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  signed int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rax

  v2 = (Windows::UI::Composition::CompositionAnimationIterator::Api *)((char *)this - 40);
  *a2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::CompositionAnimationIterator::EnsureVersionMatches(v2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FE5F0, 2u, v6, 0xAFu, 0LL);
    }
    else
    {
      v7 = (__int64 *)*((_QWORD *)v2 + 8);
      if ( v7 )
      {
        v8 = *v7;
        *((_QWORD *)v2 + 8) = v8;
        *a2 = v8 != 0;
      }
      v5 = 0;
    }
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
