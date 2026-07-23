/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x140319010
 * Callers:
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403190CC (KiAbOwnerComputeCpuPriorityKey.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2)
{
  BOOLEAN result; // al
  __int64 v5; // rbx
  BOOLEAN v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rax

  result = KiAbOwnerComputeCpuPriorityKey(a1);
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v5 = a2 + 48;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode((PRTL_RB_TREE)v5, (PRTL_BALANCED_NODE)(a1 + 24));
    v6 = 0;
    v7 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v5;
    }
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v7 + 24) > *(_BYTE *)(a1 + 48) )
        {
          v8 = *(_QWORD *)v7;
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              return RtlRbInsertNodeEx((PRTL_RB_TREE)v5, (PRTL_BALANCED_NODE)v7, v6, (PRTL_BALANCED_NODE)(a1 + 24));
            v8 ^= v7;
          }
          if ( !v8 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v5, (PRTL_BALANCED_NODE)v7, v6, (PRTL_BALANCED_NODE)(a1 + 24));
        }
        else
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_9;
            v8 ^= v7;
          }
          if ( !v8 )
          {
LABEL_9:
            v6 = 1;
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v5, (PRTL_BALANCED_NODE)v7, v6, (PRTL_BALANCED_NODE)(a1 + 24));
          }
        }
        v7 = v8;
      }
    }
    return RtlRbInsertNodeEx((PRTL_RB_TREE)v5, (PRTL_BALANCED_NODE)v7, v6, (PRTL_BALANCED_NODE)(a1 + 24));
  }
  return result;
}
