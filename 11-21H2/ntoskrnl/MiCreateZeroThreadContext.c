/*
 * XREFs of MiCreateZeroThreadContext @ 0x1403D3CA0
 * Callers:
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 * Callees:
 *     MiInitializeColorTable @ 0x14025BFE0 (MiInitializeColorTable.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiCreateZeroThreadContext(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *PoolMm; // rax
  PVOID v4; // rdi

  v1 = *(_DWORD *)(a1 + 80);
  PoolMm = ExAllocatePoolMm(64LL, 0x130uLL, 0x745A694Du, v1 | 0x80000000);
  v4 = PoolMm;
  if ( PoolMm )
  {
    MiInitializeColorTable(PoolMm + 62, v1);
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)v4 + 88, *((_DWORD *)v4 + 65), 14) )
    {
      *((_QWORD *)v4 + 29) = a1;
      return v4;
    }
    ExFreePoolWithTag(v4, 0);
  }
  return 0LL;
}
