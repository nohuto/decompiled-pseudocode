/*
 * XREFs of ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180071858
 * Callers:
 *     RtlpFlsFree @ 0x180071670 (RtlpFlsFree.c)
 *     RtlpFlsAlloc @ 0x1800741C0 (RtlpFlsAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r10
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  _BitScanReverse(&v2, a2);
  v3 = *(_DWORD **)(a1 + 8LL * (v2 - 4));
  --*v3;
  v4 = a2 ^ (unsigned __int64)(unsigned int)(1 << v2);
  result = 3 * v4;
  if ( *(_QWORD *)&v3[6 * v4 + 4] )
    NT_ASSERT("T::IsEmpty(&Chunk->Slots[SlotIndex])");
  return result;
}
