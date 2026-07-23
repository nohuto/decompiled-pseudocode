/*
 * XREFs of MiReuseUltraPageTable @ 0x14046F48C
 * Callers:
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiManageUltraSpacePageTable @ 0x14046F09C (MiManageUltraSpacePageTable.c)
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
             (PfnChannel << byte_140C65A8E) | (v5 << byte_140C65A8D) | (unsigned int)v4 & dword_140C65AF8,
             0);
  if ( result != v4 )
    *(_QWORD *)(a1 + 8 * v3 + 8) = result;
  return result;
}
