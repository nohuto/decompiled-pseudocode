/*
 * XREFs of RtlSetProcessPlaceholderCompatibilityMode @ 0x1409BCC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetProcessPlaceholderCompatibilityMode(CHAR Mode)
{
  __int64 v1; // r8
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  v1 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1360LL);
  if ( !v1 )
    return -3;
  result = *(_BYTE *)(v1 + 1968);
  *(_BYTE *)(v1 + 1968) = Mode;
  return result;
}
