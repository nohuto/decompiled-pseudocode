/*
 * XREFs of sub_140704950 @ 0x140704950
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140299000 (KeTestAlertThread.c)
 */

__int64 sub_140704950()
{
  return KeTestAlertThread(*((_BYTE *)KeGetCurrentThread() + 562)) != 0 ? 0x101 : 0;
}
