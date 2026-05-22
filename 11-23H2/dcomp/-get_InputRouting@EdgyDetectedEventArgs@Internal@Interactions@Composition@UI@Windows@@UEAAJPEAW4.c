/*
 * XREFs of ?get_InputRouting@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAW4EdgyInputRouting@23456@@Z @ 0x1801319D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::get_InputRouting(
        Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *this,
        enum Windows::UI::Composition::Interactions::Internal::EdgyInputRouting *a2)
{
  int v2; // r8d
  BOOL v3; // eax

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  if ( v2 )
    v3 = v2 == 1;
  *(_DWORD *)a2 = v3;
  return 0LL;
}
