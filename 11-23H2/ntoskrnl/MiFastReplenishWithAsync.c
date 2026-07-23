/*
 * XREFs of MiFastReplenishWithAsync @ 0x140656DF8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiAsyncSlabReplenish @ 0x1402B9F14 (MiAsyncSlabReplenish.c)
 *     MiReplenishSlabAllocator @ 0x1402E6D54 (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiFastReplenishWithAsync(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx

  v3 = MiReplenishSlabAllocator(a1, a2);
  if ( !v3 )
    MiAsyncSlabReplenish((__int64)a1, 0LL, 1);
  return v3;
}
