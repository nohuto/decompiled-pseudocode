/*
 * XREFs of ??1heap_buffer@details_abi@wil@@QEAA@XZ @ 0x180015F84
 * Callers:
 *     _wil::details_abi::RawUsageIndex::RecordUsage_::_1_::dtor$0 @ 0x18004AE6A (_wil--details_abi--RawUsageIndex--RecordUsage_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::heap_buffer::~heap_buffer(wil::details_abi::heap_buffer *this)
{
  void *v1; // rax

  v1 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v1 )
    operator delete(v1);
}
