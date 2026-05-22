/*
 * XREFs of ?s_InteractionOutputCallback@DragGestureTracker@@SAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801C9310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragGestureTracker::s_InteractionOutputCallback(float *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v2; // eax
  float v3; // xmm1_4

  if ( *(_DWORD *)a1 == 2 )
  {
    v2 = 1;
    if ( *(_DWORD *)a2 == 1 )
      v2 = 3;
    *(_DWORD *)a1 = v2;
  }
  v3 = *((float *)a2 + 16) * 1000.0;
  a1[1] = *((float *)a2 + 15) * 1000.0;
  a1[2] = v3;
}
