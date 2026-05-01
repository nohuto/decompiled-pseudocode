/*
 * XREFs of ?RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z @ 0x180014264
 * Callers:
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 * Callees:
 *     ?RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013E7C (-RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z @ 0x1800146E4 (-RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     ?RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z @ 0x180014A40 (-RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcEntryIncreaseLevel(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // esi
  int v5; // ebp
  int i; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  unsigned int v16; // eax

  v4 = a2 + 1;
  v5 = a4 & 2;
  for ( i = a3; v4 <= i; ++v4 )
  {
    switch ( v4 )
    {
      case 1:
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
          __fastfail(0xEu);
        continue;
      case 2:
        if ( (a4 & 1) != 0 )
        {
          CempLockAcquireExclusive(a1 + 64, a2, a3);
          *(_DWORD *)(a1 + 104) |= 0x10u;
LABEL_20:
          *(_DWORD *)(a1 + 72) = 0;
          RtlReleaseSRWLockExclusive(a1 + 64);
          continue;
        }
        RmpProcEntrySetSwapState((struct _RM_PROC_ENTRY *)a1, 1u);
        break;
      case 3:
        CempLockAcquireExclusive(a1 + 64, a2, a3);
        v15 = *(_DWORD *)(a1 + 104);
        if ( (v15 & 0x10) != 0 )
          v16 = v15 & 0xFFFFFF9F;
        else
          v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(16 * a4)) & 0x40 | 0x20;
        *(_DWORD *)(a1 + 104) = v16;
        if ( v5 )
          RmpProcEntryCheckQueueEmpty((struct _RM_PROC_ENTRY *)a1, v13, v14);
        goto LABEL_20;
      case 4:
        RmpProcEntrySetFreezeState((struct _RM_PROC_ENTRY *)a1, v5 != 0 ? 3 : 1);
        CempLockAcquireExclusive(a1 + 64, v9, v10);
        v11 = *(_DWORD *)(a1 + 104);
        if ( (v11 & 0x10) != 0 )
        {
          v12 = v11 & 0xFFFFFF9F;
        }
        else
        {
          if ( !v5 )
            v11 |= 0x20u;
          v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * a4)) & 0x40;
        }
        *(_DWORD *)(a1 + 104) = v12;
        goto LABEL_20;
    }
  }
}
