/*
 * XREFs of ?get_Id@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z @ 0x180113900
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::get_Id(
        Windows::UI::Composition::CompositionIsland::Api *this,
        unsigned __int64 *a2)
{
  Windows::UI::Composition::CompositionIsland *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int VisualId; // eax

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositionIsland::Api *)((char *)this - 128);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    VisualId = Windows::UI::Composition::CompositionIsland::AllocateVisualId(v2);
    v5 = VisualId;
    if ( VisualId < 0 )
    {
      DoStackCaptureDirect(VisualId, 0x6DDu);
    }
    else
    {
      v5 = 0;
      *a2 = *((_QWORD *)v2 + 21);
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
