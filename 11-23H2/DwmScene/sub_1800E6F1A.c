/*
 * XREFs of sub_1800E6F1A @ 0x1800E6F1A
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010240 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800E6F1A(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 144));
  }
}
