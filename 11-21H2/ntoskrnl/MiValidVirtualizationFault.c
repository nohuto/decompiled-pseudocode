/*
 * XREFs of MiValidVirtualizationFault @ 0x14045C52A
 * Callers:
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 * Callees:
 *     MiPerformSafePdeWrite @ 0x14025D6C0 (MiPerformSafePdeWrite.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillVirtualFaultInfo @ 0x14045C47C (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x14045C4F6 (MiGetVirtualFaultPageInfo.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiSetFaultPacketDirectives @ 0x1405A7A74 (MiSetFaultPacketDirectives.c)
 */

__int64 __fastcall MiValidVirtualizationFault(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *VirtualFaultPageInfo; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  signed __int64 v10; // rbx
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  VirtualFaultPageInfo = (unsigned __int64 *)MiGetVirtualFaultPageInfo(a2, *a1);
  v7 = MI_READ_PTE_LOCK_FREE(a3);
  v9 = *(_DWORD *)(a2 + 56);
  v10 = v7;
  v17 = v7;
  if ( (v9 & 1) != 0 && (v7 & 0x42) == 0 )
    return 0LL;
  v12 = 1;
  if ( (v9 & 0x20) != 0 )
  {
    v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    v18 = v13;
    if ( !_bittest64((const signed __int64 *)(v13 + 40), 0x28u) && *(__int64 *)(v13 + 8) > 0 )
    {
      v14 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v14 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v14);
        return 0LL;
      }
      v17 = MI_READ_PTE_LOCK_FREE(a3);
      v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
    }
    v15 = MiCompleteSecureProcessFault(&v18, &v17);
    v10 = v17;
    v12 = v15;
  }
  if ( (v10 & 0x20) == 0 )
  {
    MiPerformSafePdeWrite(v8, (volatile signed __int64 *)a3, v10, 1);
    v10 = MI_READ_PTE_LOCK_FREE(a3);
    v17 = v10;
  }
  if ( v12 )
  {
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
    MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v16 >> 12) & 0xFFFFFFFFFFLL, v10);
  }
  return v12;
}
