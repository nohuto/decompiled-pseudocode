/*
 * XREFs of MiGetCombineDomain @ 0x140217408
 * Callers:
 *     MiCapturePfnVm @ 0x140215CDC (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCombineDomain(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return *(_QWORD *)(a2 + 864);
  if ( a1 == 2 )
    return 0LL;
  return *(_QWORD *)(a2 - 32);
}
