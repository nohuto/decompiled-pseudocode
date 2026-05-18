/*
 * XREFs of sub_1800E64F6 @ 0x1800E64F6
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010240 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800E64F6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 272) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 272) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 32));
  }
}
