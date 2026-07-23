/*
 * XREFs of MmSetPageProtection @ 0x1403C2E50
 * Callers:
 *     sub_1403F1C50 @ 0x1403F1C50 (sub_1403F1C50.c)
 *     HvpProtectBinPartial @ 0x14070B1F0 (HvpProtectBinPartial.c)
 *     MmAllocateIsrStack @ 0x14081D84C (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x140A91730 (KeWriteProtectProcessorState.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     VslpIumPhase0Initialize @ 0x140B935CC (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // si
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v11; // rbx
  int v12; // esi
  char v13; // di
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v19[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v19, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x8000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v8, 0LL, ProtectionMask | 0xA0000000);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v11 = ValidPte;
  MiInsertTbFlushEntry((__int64)v19, a1, v9, 0);
  if ( v9 )
  {
    v12 = v7 & 4;
    do
    {
      v18 = MI_READ_PTE_LOCK_FREE(v8);
      v13 = v18;
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFFLL;
      v15 = (v14 << 12) | v11 & 0xFFF0000000000FFFuLL;
      v16 = v15;
      if ( v12 )
      {
        v15 |= 0x42uLL;
        if ( (v13 & 0x42) == 0 )
          v15 = v16;
      }
      else if ( v14 <= qword_140C65BA0 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v14 - 0x220000000000LL, 0);
      }
      v11 = v15 | 0x20;
      MiWriteValidPteNewProtection(v8, v11);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList((int *)v19);
  return 1;
}
