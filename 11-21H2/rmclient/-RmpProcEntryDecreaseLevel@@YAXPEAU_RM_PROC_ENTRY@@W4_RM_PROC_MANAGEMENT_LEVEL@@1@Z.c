/*
 * XREFs of ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44
 * Callers:
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 * Callees:
 *     ?RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z @ 0x1800146E4 (-RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     ?RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z @ 0x180014A40 (-RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z.c)
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 *     CempListEntryIsNull @ 0x18001E5BC (CempListEntryIsNull.c)
 *     CempListEntryRemoveAndClear @ 0x18001E5E0 (CempListEntryRemoveAndClear.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcEntryDecreaseLevel(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  int v4; // r15d
  unsigned __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2 - 1;
  v4 = a3;
  if ( a2 - 1 >= (int)a3 )
  {
    while ( v3 )
    {
      if ( v3 != 1 )
      {
        if ( v3 != 2 )
        {
          if ( v3 == 3 )
            RmpProcEntrySetFreezeState((struct _RM_PROC_ENTRY *)a1, 0);
          goto LABEL_18;
        }
        v6 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
        CempLockAcquireExclusive(v6 + 48, (unsigned int)(v3 - 2), a3);
        if ( (unsigned int)CempListEntryIsNull(a1 + 88) )
        {
          v7 = 0;
        }
        else
        {
          CempListEntryRemoveAndClear();
          v7 = 1;
        }
        *(_DWORD *)(v6 + 56) = 0;
        RtlReleaseSRWLockExclusive(v6 + 48);
        if ( !v7 )
          goto LABEL_18;
        goto LABEL_17;
      }
      RmpProcEntrySetSwapState((struct _RM_PROC_ENTRY *)a1, 0);
LABEL_18:
      if ( --v3 < v4 )
        return;
    }
    CempLockAcquireExclusive(a1 + 64, 0LL, a3);
    while ( 1 )
    {
      v10 = *(_DWORD *)(a1 + 104);
      v11 = a1 + 64;
      *(_DWORD *)(a1 + 72) = 0;
      if ( (v10 & 0x80u) == 0 )
        break;
      v12 = v10;
      RtlReleaseSRWLockExclusive(v11);
      RtlWaitOnAddress(a1 + 104, &v12, 4LL, 0LL);
      CempLockAcquireExclusive(a1 + 64, v8, v9);
    }
    RtlReleaseSRWLockExclusive(v11);
LABEL_17:
    CemRcObjectDereference(a1);
    goto LABEL_18;
  }
}
