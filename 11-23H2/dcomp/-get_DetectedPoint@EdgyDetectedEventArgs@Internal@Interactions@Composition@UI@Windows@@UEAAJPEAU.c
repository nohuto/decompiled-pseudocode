/*
 * XREFs of ?get_DetectedPoint@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z @ 0x1800900B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::get_DetectedPoint(
        Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  int v2; // eax

  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  v2 = *((_DWORD *)this + 17);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = v2;
  return 0LL;
}
