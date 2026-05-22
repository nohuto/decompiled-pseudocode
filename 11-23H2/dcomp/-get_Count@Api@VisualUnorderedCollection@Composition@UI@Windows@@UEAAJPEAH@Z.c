/*
 * XREFs of ?get_Count@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801A1F10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1CC0 (-EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollection::Api::get_Count(
        Windows::UI::Composition::VisualUnorderedCollection::Api *this,
        int *a2)
{
  Windows::UI::Composition::VisualUnorderedCollection *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int valid; // eax

  *a2 = 0;
  v2 = (Windows::UI::Composition::VisualUnorderedCollection::Api *)((char *)this - 136);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::VisualUnorderedCollection::EnsureValidState(v2);
    v5 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0xDAu);
    }
    else
    {
      *a2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v2 + 20) + 32LL))(
              *((_QWORD *)v2 + 20),
              *((_QWORD *)v2 + 19));
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
