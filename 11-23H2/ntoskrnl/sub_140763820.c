/*
 * XREFs of sub_140763820 @ 0x140763820
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140760F04 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140763418 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x140763600 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1407E769C (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1407E0EC0 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_140763820(volatile signed __int64 *a1)
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
