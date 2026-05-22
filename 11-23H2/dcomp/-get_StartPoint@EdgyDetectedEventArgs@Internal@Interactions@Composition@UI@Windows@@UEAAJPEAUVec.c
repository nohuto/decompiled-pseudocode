/*
 * XREFs of ?get_StartPoint@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z @ 0x180090110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::get_StartPoint(
        Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  int v2; // eax

  *(_DWORD *)a2 = *((_DWORD *)this + 11);
  v2 = *((_DWORD *)this + 12);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = v2;
  return 0LL;
}
