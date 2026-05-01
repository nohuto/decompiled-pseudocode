/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x18000A7A8
 * Callers:
 *     sub_1800181D0 @ 0x1800181D0 (sub_1800181D0.c)
 * Callees:
 *     sub_1800101BC @ 0x1800101BC (sub_1800101BC.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    sub_1800101BC(v1);
}
