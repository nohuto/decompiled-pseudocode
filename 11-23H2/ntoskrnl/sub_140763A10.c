/*
 * XREFs of sub_140763A10 @ 0x140763A10
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1407610F4 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140763608 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1407637F0 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1407E796C (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1407E1190 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_140763A10(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1 + 29);
    if ( !v1 )
      WbFreeWarbirdProcess((PVOID)a1);
  }
  return v1;
}
