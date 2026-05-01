/*
 * XREFs of ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1804C5234
 * Callers:
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1804B2888 (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1804B28EC (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

__int64 ElementHelpers::GetModifierKeyState()
{
  unsigned int v0; // edi
  int *v1; // rbx

  v0 = 0;
  v1 = (int *)&unk_1806EA018;
  do
  {
    if ( GetKeyState(*v1) < 0 )
      v0 |= v1[1];
    v1 += 2;
  }
  while ( v1 != (int *)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp" );
  return v0;
}
