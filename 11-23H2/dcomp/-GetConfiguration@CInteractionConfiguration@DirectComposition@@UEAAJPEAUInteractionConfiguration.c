/*
 * XREFs of ?GetConfiguration@CInteractionConfiguration@DirectComposition@@UEAAJPEAUInteractionConfigurationInternal@@@Z @ 0x180085BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionConfiguration::GetConfiguration(
        DirectComposition::CInteractionConfiguration *this,
        struct InteractionConfigurationInternal *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 8);
  return result;
}
