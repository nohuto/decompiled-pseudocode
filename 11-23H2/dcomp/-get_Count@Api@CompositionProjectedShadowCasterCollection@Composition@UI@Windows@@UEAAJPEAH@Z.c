/*
 * XREFs of ?get_Count@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801304C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1800075F0 (-EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api::get_Count(
        Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api *this,
        int *a2)
{
  Windows::UI::Composition::CompositionProjectedShadowCasterCollection *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int valid; // eax

  *a2 = 0;
  v2 = (Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api *)((char *)this - 136);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::CompositionProjectedShadowCasterCollection::EnsureValidState(v2);
    v5 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0x124u);
    }
    else
    {
      *a2 = (__int64)(*(_QWORD *)(*((_QWORD *)v2 + 19) + 200LL) - *(_QWORD *)(*((_QWORD *)v2 + 19) + 192LL)) >> 3;
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
