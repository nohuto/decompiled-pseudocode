/*
 * XREFs of OnPTPMouseOperation @ 0x1C01F6A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 OnPTPMouseOperation()
{
  return CPTPProcessor::ProcessMouseQueue();
}
