/*
 * XREFs of sub_14023A9D0 @ 0x14023A9D0
 * Callers:
 *     sub_1406B5F74 @ 0x1406B5F74 (sub_1406B5F74.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14023A9D0(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // al
  _RTL_RB_TREE *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE **i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r11
  __int64 v20; // r9
  int v21; // edx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = (_RTL_RB_TREE *)(a1 + 520);
  v8 = v6;
  v9 = *(_QWORD *)(a1 + 520);
  if ( (*(_BYTE *)(a1 + 528) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= (unsigned __int64)v7;
    else
      v9 = 0LL;
  }
  while ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) <= (unsigned __int64)a2 )
    {
      if ( *(_QWORD *)(v9 + 24) >= (unsigned __int64)a2 )
      {
        RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)v9);
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v15 = *((_QWORD *)CurrentPrcb + 4375);
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
              *(_DWORD *)(v15 + 20) &= v16;
              if ( v17 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
        if ( *(_QWORD *)(v9 + 32) )
          KeBugCheckEx(0x191u, 0x71BuLL, 0LL, 0LL, 0LL);
        for ( i = (_RTL_BALANCED_NODE **)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
        {
          if ( *i == a2 )
            *i = 0LL;
        }
        v5 = 1;
        ExFreePoolWithTag((PVOID)v9, 0);
        return v5;
      }
      v10 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v17 )
          sub_140418E4C(v19);
      }
    }
  }
  __writecr8(v8);
  return v5;
}
