/*
 * XREFs of MiFindActualFaultingPte @ 0x1402EF750
 * Callers:
 *     MiIsFaultPteIntact @ 0x1402EF658 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF750 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiFindActualFaultingPte @ 0x1402EF750 (MiFindActualFaultingPte.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  signed __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  char v10; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v16[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v17[18]; // [rsp+50h] [rbp-B8h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v17, 0, 0x88uLL);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
  {
    MiFillPteHierarchy(a2, (unsigned __int64 *)v16);
    v8 = 4LL;
    while ( 1 )
    {
      v9 = *(&v15 + v8--);
      v10 = MI_READ_PTE_LOCK_FREE(v9);
      if ( (v10 & 1) == 0 )
        return v9;
      if ( v10 < 0 )
        return 0LL;
      if ( v8 == 1 )
      {
        v5 = *(_QWORD *)&v16[0];
        goto LABEL_4;
      }
    }
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result != ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    return result;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
  v6 = *(_QWORD *)v5;
  if ( !MiPteInShadowRange(v5)
    || (MiFlags & 0x600000) == 0
    || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
  {
    goto LABEL_5;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v12 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v13 = v6 | 0x20;
        if ( (v12 & 0x20) == 0 )
          v13 = v6;
        v6 = v13;
        if ( (v12 & 0x42) != 0 )
          v6 = v13 | 0x42;
      }
    }
LABEL_5:
    if ( (v6 & 1) != 0 )
      return 0LL;
  }
  if ( (v6 & 0x400) == 0 )
    return v5;
  if ( MiIsPrototypePteVadLookup(v6) )
  {
    v15 = 0LL;
    v14 = 0;
    v7 = MiCheckVirtualAddress(a2, &v14, &v15);
    if ( v15 )
      MiUnlockVadTree(1, 0x11u);
    if ( !v7 )
      return 0LL;
  }
  else
  {
    if ( qword_140C65B40 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C65B40;
    v7 = v6 >> 16;
  }
  BYTE5(v17[8]) &= ~1u;
  v17[0] = v7;
  BYTE4(v17[8]) = 17;
  WORD1(v17[8]) = 0;
  v17[9] = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = MiFindActualFaultingPte(v17, v7);
  if ( !result )
    return v5;
  return result;
}
