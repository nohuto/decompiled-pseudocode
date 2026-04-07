/*
 * XREFs of ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x18009AE78
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$0 @ 0x18006809D (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$0.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800580D8 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::~RawUsageIndex(wil::details_abi::RawUsageIndex *this)
{
  void *v1; // rax

  v1 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v1 )
    MemoryFree(v1);
}
