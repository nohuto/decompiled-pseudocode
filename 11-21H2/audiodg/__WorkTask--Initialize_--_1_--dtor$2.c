/*
 * XREFs of __WorkTask::Initialize_::_1_::dtor$2 @ 0x14006816E
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall _WorkTask::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
