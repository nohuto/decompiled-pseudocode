/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140318EE4
 * Callers:
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x1403CC428 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, _RTL_RB_TREE *a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rbx
  BOOLEAN v5; // cl
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v7; // rax

  result = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1501);
  if ( result > 30 )
    result = 30;
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v4 = a2 + 4;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode(a2 + 4, (PRTL_BALANCED_NODE)(a1 + 24));
    v5 = 0;
    Root = v4->Root;
    if ( (*(_BYTE *)&v4->0 & 1) != 0 )
    {
      if ( Root )
        Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)Root);
    }
    if ( Root )
    {
      while ( 1 )
      {
        if ( SLOBYTE(Root[1].Children[0]) < *(_BYTE *)(a1 + 48) )
        {
          v7 = Root->Children[0];
          if ( (*(_BYTE *)&v4->0 & 1) != 0 )
          {
            if ( !v7 )
              return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
            return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
        }
        else
        {
          v7 = Root->Children[1];
          if ( (*(_BYTE *)&v4->0 & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_11;
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
          {
LABEL_11:
            v5 = 1;
            return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
          }
        }
        Root = v7;
      }
    }
    return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
  }
  return result;
}
