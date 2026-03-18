/*
 * XREFs of MiReuseUltraPageTable @ 0x14046EA2C
 * Callers:
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x1402870B0 (MiGetPfnChannel.c)
 *     MiManageUltraSpacePageTable @ 0x14046E63C (MiManageUltraSpacePageTable.c)
 */

unsigned __int64 __fastcall MiReuseUltraPageTable(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // ebx
  int PfnChannel; // eax
  unsigned __int64 result; // rax

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  v5 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * v4) >> 4)) + 2);
  PfnChannel = MiGetPfnChannel(48 * v4 - 0x220000000000LL);
  result = MiManageUltraSpacePageTable(
             (__int64 *)(48 * v4 - 0x220000000000LL),
             (PfnChannel << byte_140C65B8E) | (v5 << byte_140C65B8D) | (unsigned int)v4 & dword_140C65BF8,
             0);
  if ( result != v4 )
    *(_QWORD *)(a1 + 8 * v3 + 8) = result;
  return result;
}
