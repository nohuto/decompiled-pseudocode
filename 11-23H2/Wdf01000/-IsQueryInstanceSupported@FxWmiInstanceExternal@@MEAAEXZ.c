/*
 * XREFs of ?IsQueryInstanceSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C0028E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxWmiInstanceExternal::IsQueryInstanceSupported(FxWmiInstanceExternal *this)
{
  unsigned __int8 result; // al

  result = 0;
  if ( this->m_UseContextForQuery || this->m_QueryInstanceCallback.m_Method || this->m_ExecuteMethodCallback.m_Method )
    return 1;
  return result;
}
