/*
 * XREFs of ?MoveNext@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A3A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnsureValidState@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801A3888 (-EnsureValidState@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::Api::MoveNext(
        Windows::UI::Composition::VisualUnorderedCollectionIterator::Api *this,
        bool *a2)
{
  Windows::UI::Composition::VisualUnorderedCollectionIterator *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int valid; // eax
  __int64 v7; // rax

  v2 = (Windows::UI::Composition::VisualUnorderedCollectionIterator::Api *)((char *)this - 40);
  *a2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( *((_DWORD *)v2 + 19) < *(_DWORD *)(*((_QWORD *)v2 + 7) + 24LL) )
    {
      valid = Windows::UI::Composition::VisualUnorderedCollectionIterator::EnsureValidState(v2);
      v5 = valid;
      if ( valid < 0 )
      {
        DoStackCaptureDirect(valid, 0xB6u);
        goto LABEL_7;
      }
      v7 = *((_QWORD *)v2 + 7);
      *a2 = ++*((_DWORD *)v2 + 19) < *(_DWORD *)(v7 + 24);
    }
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
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
