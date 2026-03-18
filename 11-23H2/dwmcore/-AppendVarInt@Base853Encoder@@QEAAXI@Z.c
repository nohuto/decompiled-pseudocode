/*
 * XREFs of ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18010D464
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18010BA9C (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18010BBC0 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x18010C7A4 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x18010CB58 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x18010CC08 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18010D518 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 * Callees:
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x18010D4C4 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 */

void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = a2; i != (i & 0x7F); i >>= 7 )
    Base853Encoder::AppendByte(this, i | 0x80);
  if ( i || *((_DWORD *)this + 3) )
    Base853Encoder::AppendByte(this, i);
  else
    ++*((_DWORD *)this + 4);
}
