/*
 * XREFs of MiCheckProtoAccess @ 0x14034A148
 * Callers:
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9; // rbx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1);
  v5 = (v4 >> 5) & 0x1F;
  if ( MiIsPrototypePteVadLookup(v4) )
  {
    v11 = 0LL;
    v10 = 0;
    v7 = MiCheckVirtualAddress((__int64)(a1 << 25) >> 16, &v10, &v11);
    if ( v11 )
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                        + 284));
  }
  else
  {
    v9 = v6;
    if ( qword_140C65B40 )
    {
      if ( (v6 & 0x10) != 0 )
        v9 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v9 = v6 & ~qword_140C65B40;
    }
    v7 = v9 >> 16;
    LODWORD(v5) = (v6 & 8) != 0 ? 1 : 256;
  }
  *a2 = v5;
  return v7;
}
