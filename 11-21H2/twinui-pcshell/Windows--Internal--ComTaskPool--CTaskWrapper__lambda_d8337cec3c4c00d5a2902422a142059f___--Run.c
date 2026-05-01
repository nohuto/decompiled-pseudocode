/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::Run @ 0x1801E8DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x1801E8D1C (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::Run(
        __int64 a1,
        __int64 a2)
{
  XamlAltTabViewHost *v2; // rcx

  v2 = *(XamlAltTabViewHost **)(a1 + 24);
  if ( *((_BYTE *)v2 + 112) )
    XamlAltTabViewHost::DisplayAltTab(v2, a2);
}
