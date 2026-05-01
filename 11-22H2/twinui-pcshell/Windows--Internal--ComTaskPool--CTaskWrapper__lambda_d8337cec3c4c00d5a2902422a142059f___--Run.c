/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::Run @ 0x1802ECA00
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180763A14 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::Run(
        __int64 a1)
{
  XamlAltTabViewHost *v1; // rcx

  v1 = *(XamlAltTabViewHost **)(a1 + 24);
  if ( *((_BYTE *)v1 + 112) )
    XamlAltTabViewHost::DisplayAltTab(v1);
}
