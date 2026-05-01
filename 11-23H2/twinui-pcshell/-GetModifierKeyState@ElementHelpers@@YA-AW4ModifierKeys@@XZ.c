/*
 * XREFs of ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x18057FBC4
 * Callers:
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18056F1D8 (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18056F23C (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

__int64 ElementHelpers::GetModifierKeyState()
{
  unsigned int v0; // edi
  int *v1; // rbx

  v0 = 0;
  v1 = (int *)&unk_18089D500;
  do
  {
    if ( GetKeyState(*v1) < 0 )
      v0 |= v1[1];
    v1 += 2;
  }
  while ( v1 != (int *)&unk_18089D528 );
  return v0;
}
