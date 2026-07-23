/*
 * XREFs of ObKillProcess @ 0x14068B254
 * Callers:
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140208890 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x14068AC1C (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x14068EB88 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x14073FE50 (ExSweepHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(_QWORD **)(a1 + 1392);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1392) = 0LL;
    ExpRemoveHandleTable(v1);
    ExpFreeHandleTable(v1);
  }
}
