/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ_1 @ 0x18007C0E0
 * Callers:
 *     sub_1800E9C0C @ 0x1800E9C0C (sub_1800E9C0C.c)
 *     sub_1800E9C42 @ 0x1800E9C42 (sub_1800E9C42.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    sub_180010530(v1);
}
