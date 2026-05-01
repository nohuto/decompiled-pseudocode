/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ_0 @ 0x18000CCC0
 * Callers:
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     sub_18000D00C @ 0x18000D00C (sub_18000D00C.c)
 * Callees:
 *     sub_180010248 @ 0x180010248 (sub_180010248.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    sub_180010248(v1);
}
