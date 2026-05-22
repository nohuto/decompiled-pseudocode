/*
 * XREFs of ?get_Count@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x180072F30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180072FD0 (-EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::get_Count(
        Windows::UI::Composition::VisualCollection::Api *this,
        int *a2)
{
  Windows::UI::Composition::VisualCollection *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int valid; // eax
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // rax

  *a2 = 0;
  v2 = (Windows::UI::Composition::VisualCollection::Api *)((char *)this - 136);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::VisualCollection::EnsureValidState(v2);
    v6 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0x130u);
    }
    else
    {
      v7 = 0;
      v8 = *(_QWORD *)(*((_QWORD *)v2 + 19) + 144LL);
      while ( v8 )
      {
        v8 = *(_QWORD *)(v8 + 152);
        ++v7;
      }
      *a2 = v7;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
