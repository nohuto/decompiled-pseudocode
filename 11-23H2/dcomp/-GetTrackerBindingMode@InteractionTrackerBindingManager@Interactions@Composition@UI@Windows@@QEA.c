/*
 * XREFs of ?GetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIPEAW4InteractionBindingAxisModes@2345@@Z @ 0x180187AA0
 * Callers:
 *     ?GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0PEAW4InteractionBindingAxisModes@2345@@Z @ 0x180139080 (-GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInterac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::GetTrackerBindingMode(
        Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *this,
        int a2,
        int a3,
        enum Windows::UI::Composition::Interactions::InteractionBindingAxisModes *a4)
{
  int v4; // r10d
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  char v8; // dl
  char v9; // cl
  __int64 result; // rax

  v4 = 0;
  *(_DWORD *)a4 = 0;
  v6 = (_DWORD *)*((_QWORD *)this + 17);
  v7 = (_DWORD *)*((_QWORD *)this + 18);
  while ( v6 != v7 )
  {
    if ( a2 != *v6 || (v8 = 1, a3 != v6[1]) )
      v8 = 0;
    if ( a2 != v6[1] || (v9 = 1, a3 != *v6) )
      v9 = 0;
    if ( v8 || v9 )
    {
      v4 = v6[2];
      break;
    }
    v6 += 3;
  }
  result = 0LL;
  *(_DWORD *)a4 = v4;
  return result;
}
