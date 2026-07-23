/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x1409BCC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetThreadPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v2; // r8
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 )
    return -2;
  if ( *((_BYTE *)CurrentThread + 586) == 1 )
    return -2;
  v2 = *((_QWORD *)CurrentThread + 30);
  if ( !v2 )
    return -2;
  result = *(_BYTE *)(v2 + 640);
  *(_BYTE *)(v2 + 640) = Mode;
  return result;
}
