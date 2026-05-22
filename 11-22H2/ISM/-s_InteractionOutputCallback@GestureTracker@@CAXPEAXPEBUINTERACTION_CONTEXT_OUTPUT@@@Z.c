/*
 * XREFs of ?s_InteractionOutputCallback@GestureTracker@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D1820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GestureTracker::s_InteractionOutputCallback(_BYTE *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  bool v2; // zf
  int v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm1_4

  v2 = a1[52] == 0;
  v3 = *((_DWORD *)a2 + 11);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 10);
  *((_DWORD *)a1 + 3) = v3;
  if ( !v2 )
  {
    v4 = (float)*((int *)a1 + 12) + *((float *)a2 + 11);
    *(float *)a1 = (float)*((int *)a1 + 11) + *((float *)a2 + 10);
    *((float *)a1 + 1) = v4;
  }
  v5 = *((float *)a2 + 16) * 1000.0;
  *((float *)a1 + 4) = *((float *)a2 + 15) * 1000.0;
  *((float *)a1 + 5) = v5;
}
