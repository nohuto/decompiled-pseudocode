/*
 * XREFs of sub_140766F60 @ 0x140766F60
 * Callers:
 *     sub_140B53104 @ 0x140B53104 (sub_140B53104.c)
 * Callees:
 *     <none>
 */

char sub_140766F60()
{
  ULONG HandleAttributes; // eax
  ULONG v1; // ett

  _m_prefetchw(&stru_140C24040);
  HandleAttributes = stru_140C24040.HandleAttributes;
  do
  {
    v1 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&stru_140C24040,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v1 != HandleAttributes );
  return HandleAttributes & 1;
}
