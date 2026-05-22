/*
 * XREFs of ?get_UpVector@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x180090730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnchor::Private::get_UpVector(
        Windows::UI::Composition::CompositionAnchor::Private *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14);
  *(_QWORD *)a2 = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 2) = v2;
  return 0LL;
}
