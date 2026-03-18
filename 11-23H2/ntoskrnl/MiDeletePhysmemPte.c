/*
 * XREFs of MiDeletePhysmemPte @ 0x1403687B4
 * Callers:
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F570 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14035734C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1403573AC (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiDeletePhysmemPte(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  BOOL v6; // eax
  __int64 v7; // r8
  __int64 v8; // r11

  v4 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a2) & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  v6 = MiPteInShadowRange(a2);
  v8 = 1LL;
  if ( v6 && MiPteHasShadow() )
    v4 = v8;
  *(_QWORD *)a2 = v5;
  if ( v4 )
    MiWritePteShadow(a2, v5, v7);
  return MiInsertTbFlushEntry(*(_QWORD *)(a1 + 16), (__int64)(a2 << 25) >> 16, v8, 0);
}
