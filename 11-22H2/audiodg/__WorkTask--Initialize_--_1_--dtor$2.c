/*
 * XREFs of __WorkTask::Initialize_::_1_::dtor$2 @ 0x14007004E
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall _WorkTask::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
