/*
 * XREFs of ?get_TransformMatrix@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAUMatrix3x2@Numerics@Foundation@5@@Z @ 0x180189E20
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::Api::get_TransformMatrix(
        Windows::UI::Composition::CompositionShape::Api *this,
        struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // rax

  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 2);
    v5 = 0;
    if ( v6 )
      v7 = (_QWORD *)(v6 + 136);
    else
      v7 = &Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix;
    *(_OWORD *)a2 = *(_OWORD *)v7;
    *((_QWORD *)a2 + 2) = v7[2];
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
