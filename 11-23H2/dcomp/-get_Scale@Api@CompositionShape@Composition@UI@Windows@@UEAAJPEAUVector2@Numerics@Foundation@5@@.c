/*
 * XREFs of ?get_Scale@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x180189D80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::Api::get_Scale(
        Windows::UI::Composition::CompositionShape::Api *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // rax

  *(_QWORD *)a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 2);
    v5 = 0;
    if ( v6 )
      v7 = (_QWORD *)(v6 + 184);
    else
      v7 = &Windows::UI::Composition::ComponentTransform2D::sc_defaultScale;
    *(_QWORD *)a2 = *v7;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
